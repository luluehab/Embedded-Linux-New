# load file into RAM 


# checking Options (SD card - tftp - no option) 

- write u-boot text file 

```sh
setenv flag 0

for option in mmc tftp nooption; do

    if test "$option" = "mmc"; then
        echo "Hello iam in mmc..."
        if fatload mmc 0:1 $kernel_addr_r zimage && fatload mmc 0:1 $fdt_addr_r LULU.txt; then
            echo "Loaded DONE"
            setenv flag 1
        else
            echo "mmc failed"
        fi
    fi

    if test "$flag" -eq 0 && test "$option" = "tftp"; then
        setenv ipaddr 192.168.100.2
        seten serverip 192.168.100.1
        echo "hello iam in TFTP..."
        if ping 192.168.100.1; then
            tftp $kernel_addr_r Zimage
	    tftp $fdt_addr_r vexpress-v2p-ca9.dtp
            bootz $kernel_addr_r - $fdt_addr_r
            echo "Loaded DONE"
            setenv flag 1
        else
            echo "TFTP failed"
        fi
    fi

    if test "$flag" -eq 0 && test "$option" = "nooption"; then
        echo "Sorry there is NO OPTION"
    fi

done

```

- Creating a U-Boot image 

```sh 
mkimage -T script -n "Bootscript" -C none -d loading.txt bootingScript
```
In this example:
    - T kernel: The image type is a kernel.
    - C none: No compression is used.
    - n "Bootscript": The image name is "Bootscript".
    - d loading.txt: The input data file.
    - Bootingscript: The output image file.

- copy the image into boot partition
```sh
cp bootingScript /media/lulu/boot/
```
![alt text](image.png)


- Edit Bootcmd value in QEMU

```sh 
setenv bootcmd 'fatload mmc 0:1 ${loadaddr} bootingScript; source ${loadaddr}'
saveenv
reset
```

### Run QEMU

```sh
qemu-system-arm -M vexpress-a9 -sd ./Desktop/SD_CARD/lulu.img -net nic -net tap,ifname=tap1,script=no -kernel ~/UBOOT/u-boot/u-boot -nographic

```
![alt text](image-1.png)