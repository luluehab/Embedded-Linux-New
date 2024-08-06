# Linux kernel image 
The Linux kernel image is the compiled version of the Linux kernel, which is the core component of the Linux operating system. The kernel image contains all the essential code required to manage hardware resources, system processes, memory, and other critical tasks that make the operating system function.

## Kernel Image Formats

1. Image: It is simply the compiled binary of the Linux kernel without any additional compression or wrapping.
    - raw
    - uncompressed Linux kernel image.
- Usage
    - used in environments where storage space isn't a primary concern, and the system can load and execute the kernel directly from this raw format.

2. zImage: It includes the compressed kernel and a small decompression stub that extracts the kernel into memory.
    - compressed version of the Linux kernel.
    - The "z" prefix indicates that the image is compressed using gzip.
- Usage
    - used in embedded systems and other environments where saving space is crucial.
    
###### When the system boots, the kernel's built-in decompression code decompresses the zImage into memory before execution.

3. uImage:  It is created using the mkimage tool from U-Boot, which adds a header to the image containing metadata needed by U-Boot.
    - uImage is a kernel image format used by U-Boot, a popular bootloader for embedded systems. It can encapsulate different types of images, including the Linux kernel, and include additional metadata(Header).


#  commands in U-Boot is used to boot a Linux kernel image 

1. bootz: used to boot zImage format.
```sh
bootz <kernel address> - <device tree address>
```
- kernel address: the memory address(kernel_addr_r) where the zImage is loaded
-device tree address: is the memory address(fdt_addr_r) of the device tree blob (if used).


2. booti: used to boot Image format, which is an uncompressed version of the kernel.
```sh
booti <kernel address> - <device tree address>.
```

3. bootm: used to boot uImage format.
 ```sh
 bootm <kernel address> [<ramdisk address>] [<device tree address>].
```
