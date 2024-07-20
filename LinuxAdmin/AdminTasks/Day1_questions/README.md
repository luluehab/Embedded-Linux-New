Q1. List three Linux Distributions
1-	Ubuntu
2-	Red hat
3-	Kali

Q2. From the slides what is the man command used for?
	man command is a Help command that provide short reference manuals for External commands 
and it organized in sections
1-	For user commands 
2-	For system call
 
 ![image](https://github.com/luluehab/Embedded-Linux/assets/167600614/96ce0bb3-2a6f-4c8f-8bff-ee25a57b1668)


 if i don't know the command I can use
 $man –k

![image-1](https://github.com/luluehab/Embedded-Linux/assets/167600614/2e3af291-d0dc-489c-9922-e09fa495d82f)

Q3. What is the difference between rm and rmdir using man command?
1-	rm
to remove file or directory 
to remove file 
$rm

To remove directory recursively  
$rm –r
Or 
$rm –R 

2-	rmdir
to remove Empty directory 

![image-1](https://github.com/luluehab/Embedded-Linux/assets/167600614/706135df-ea97-4a5c-841c-e279092b69e5)

Q4. Create the following hierarchy under your home directory:
![image-1](https://github.com/luluehab/Embedded-Linux/assets/167600614/2e01b604-2209-4c23-9d03-54f2843d6e0d)

![image-4](https://github.com/luluehab/Embedded-Linux/assets/167600614/c093869f-a845-411c-aaa1-debca2b82c79)


 a.	Remove dir11 with rmdir in one-step. What did you notice? And how did you overcome that?
rmdir: failed to remove ‘Directory’: Directory not empty
       the rm -r command deletes non-empty directories

![image-4](https://github.com/luluehab/Embedded-Linux/assets/167600614/43e70c41-62b9-4a79-b127-1a73372dcd99)

 b.	Then remove OldFiles using rmdir –p command. State what happened to the hierarchy (Note: you are in your home directory).

![image-4](https://github.com/luluehab/Embedded-Linux/assets/167600614/80281320-035f-41e5-b7a1-8a52e6899079)

rmdir –p command  remove an empty subdirectory and its parent directory.
Nothing happened to the hierarchy.

c.	The output of the command pwd was /home/user. Write the absolute and relative path for the file mycv
Absolute
	/home/lulu/docs/mycv
              Relative path
		Docs/mycv
![image-4](https://github.com/luluehab/Embedded-Linux/assets/167600614/eacf6073-4d39-4213-8003-313d6454c11d)


Q5. Copy the /etc/passwd file to your home directory making its name is mypasswd
cp /etc/passwd ~/mypasswd

![image-4](https://github.com/luluehab/Embedded-Linux/assets/167600614/a356994e-193f-4b5f-be8b-023192c88465)


Q6. Rename this new file to be oldpasswd

![image-4](https://github.com/luluehab/Embedded-Linux/assets/167600614/8188119d-ec79-4208-9c6c-beb7f1a934cd)



Q7. You are in /usr/bin, list four ways to go to your home directory 
cd 
cd ~ 
cd /home/lulu
cd $home

![image-4](https://github.com/luluehab/Embedded-Linux/assets/167600614/9a46a52a-0881-4b04-806c-f2808a851345)


Q8. List Linux commands in /usr/bin that start with letter w
$ls /usr/bin/w*

![image-4](https://github.com/luluehab/Embedded-Linux/assets/167600614/360ef7f9-9234-41ed-94f2-da8f7c473116)

 

Q9. What command type are used for? (from the slide)
To know the type of command 
Alias or internal command(is the part of shell) or external command(exist as an executable file on the disk)
 
![image-4](https://github.com/luluehab/Embedded-Linux/assets/167600614/2780cac8-4f6c-4f36-b299-2543fbd139cd)

Q10. Show 2 types of command file in /usr/bin that start with letter c 
$ls /usr/bin/c*
 
 ![image-4](https://github.com/luluehab/Embedded-Linux/assets/167600614/dd200255-4392-422f-9412-2544629ce70e)


Q11. Using man command find the command to read file. (Note: man take option) 
$ man –k read

![image-4](https://github.com/luluehab/Embedded-Linux/assets/167600614/d1a25c9d-67ea-4714-be86-20dff55303af)

 
Q12. What is the usage of apropos command?

the apropos command and the man -k command serve similar purposes.
used to search the manual page names and descriptions for a keyword.
It is useful when i know what i want to do but iam not sure of the command.

![image-4](https://github.com/luluehab/Embedded-Linux/assets/167600614/520c0d66-a10a-4a15-a9cd-4888e2b25081)

 





