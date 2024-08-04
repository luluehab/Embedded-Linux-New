# Yocto Setup Guide

## Pre-requisites

Install the necessary dependencies:
```sh 
sudo apt-get install gawk wget git-core diffstat unzip texinfo gcc-multilib build-essential chrpath socat cpio  python3 python3-pip python3-pexpect 
```

## git Yocto repo 
```sh
git clone -b kirkstone https://git.yoctoproject.org/git/poky.git
```
## setup environment 
```sh
cd poky
source oe-init-build-env
```
![alt text](image-4.png)

### my configure
```sh 
vi conf/local.conf
```
change target,Download directory, shared state files directory and set number of threads 
![alt text](image.png)
![alt text](image-1.png)
![alt text](image-2.png)

## Build yocto 
```sh 
bitbake -k core-image-minimal
```
![alt text](image-3.png)

![alt text](image-5.png)

## Run QEMU
```sh
runqemu qemuarm64 nographic
```
![alt text](image-6.png)
![alt text](image-7.png)
