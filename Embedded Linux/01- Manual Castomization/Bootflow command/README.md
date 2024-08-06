# bootflow command
The bootflow command is used to manage bootflows. It can scan bootdevs to locate bootflows, list them and boot them.

## bootflow scan 
- Scans for available bootflows, optionally booting the first valid one it finds. This operates in two modes:

    - If no bootdev is selected (see bootdev select) it scans bootflows one by one, extracting all the bootdevs from each

    - If a bootdev is selected, it just scans that one bootflow

- it search under EFI partition (partition sould be bootable and primary) 

```sh 
bootflow scan 
```
it search for extlinux.conf in extlinux directory (that replace bootcmd) in EFI.

# Steps 
1. [creat virtual SD card](https://github.com/luluehab/Embedded-Linux-New/tree/main/Embedded%20Linux/Virtual%20SD%20Card) make sure you have one bootable and primary partition partition called boot.
2. copy the files to boot
    1. zImage
    2. vexpress-v2p-ca9.dtb
3. creat extlinux directory have extlinux.conf file in boot
```sh 
mkdir extlinux 
touch extlinux/extlinux.conf
```
4. extlinux.conf
```sh 
LABEL luluextconf
    KERNEL ../zImage
    FDT ../vexpress-v2p-ca9.dtb
```
![alt text](image.png)

5. run Qemu with the virtual SD card
```sh
sudo qemu-system-arm -M vexpress-a9 -m 128M -nographic -kernel u-boot -sd ~/Desktop/SD_CARD/lulu.img
```

6. edit bootcmd

```sh
setenv bootcmd bootflow scan
saveenv
reset
```
![alt text](image-1.png)

![alt text](image-2.png)
![alt text](image-3.png)

- Kernel panic

### Please hang tight! We'll be back shortly to explain everything.

# load files by TFTP 
1. move files into tftp server
our SD card 
![alt text](image-7.png)
![alt text](image-8.png)

2. edit extlinux.conf

```sh 
LABEL luluextconf
    KERNEL tftp://your_tftp_server_address/path to zImage
    FDT tftp://your_tftp_server_address/path to file.dtb
```
```sh 

LABEL luluextconf
    KERNEL tftp://192.168.100.1/zImage
    FDT tftp://192.168.100.1/vexpress-v2p-ca9.dtb
```
2. check service dev
![alt text](image-5.png)
![alt text](image-6.png)

3. run Qemu with Network
```sh
sudo qemu-system-arm -M vexpress-a9 -m 128M -nographic -kernel u-boot -sd ~/Desktop/SD_CARD/lulu.img -net nic -net tap,ifname=tap0,script=no
```
```sh 
sudo qemu-system-arm -M vexpress-a9 -m 128M -nographic -kernel u-boot -drive file=~/Desktop/SD_CARD/lulu.img,format=raw -netdev user,id=n0,tftp=/srv/tftp -device virtio-net-device,netdev=n0
```

4. set envuronment

```sh 
setenv ipaddr 192.168.100.2
#check conniction
ping 192.168.100.1
setenv serverip 192.168.100.1
setenv bootcmd bootflow scan
saveenv
reset
```
![alt text](image-9.png)
