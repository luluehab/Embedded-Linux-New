1. install openSSH
 
 ```sh 
 sudo apt install openssh-server
 #check it running 
 sudo systemctl status ssh.service

```
 ssh targetRPI@ip
2. check our ip  
```sh 
ifconfig
#or
ip a
```
2. enter password of target 
3. 