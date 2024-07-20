#!/bin/bash 

yourName="n3na3a"
familyName="z8alel"

if [ $(cat /etc/group | grep $familyName | wc -l) -gt 0 ] 
then
	echo -e "the group $familyName already exist \n"
else
	sudo groupadd $familyName
	echo -e "group $familyName ceated" 
fi 

if [ $(cat /etc/passwd | grep $yourName | wc -l) -gt 0 ]
then
	echo -e "the user $yourName already exist \n"	
else
	sudo adduser $yourName
	echo -m "user $yourName created \n"
fi

if [ $(groups $yourName | grep $familyName | wc -l) -gt 0 ]
then
	echo -e  "the user is already exist in group \n"
else
	sudo usermod -aG $familyName $yourName
	echo -e "user added to group"
fi


echo -e "USER INFORMATION \n"
echo -e "userName:passward:UID:GID:GECOS:home directory:login shell \n"
echo -e "$(cat /etc/passwd | grep $yourName) \n"

echo -e "GROUP INFORMATION \n"
echo -e "group name:passward:GID:users \n"
echo -e "$(cat /etc/group | grep $familyName) \n"


