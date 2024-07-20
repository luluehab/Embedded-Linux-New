#!/bin/bash

echo -e "please enter the directory path \n "
read SRC

IMG=$SRC/images
DOC=$SRC/Documents
OTHER=$SRC/othe
SRCCONTENT=($SRC/*)

#echo -e "$SRCCONTENT"
#echo -e "${#SRCCONTENT[@]}"

if [ -d $SRC ] 
then
	if [ ${#SRCCONTENT[@]} -gt 1 ]
	then
		mkdir $IMG $DOC $OTHER
	       for file in $SRC/*
	       do
		       if [ -f $file ]
		       then 
				case $file in
		 			*.jpg | *.png | *.gif)
						mv $file $IMG 
						;;
					*.txt | *.doc | *.pdf)
						mv $file $DOC
						;;
					*)
						mv $file $OTHER
						;;
				esac
		       fi

		done
		echo -e "files organized"
	else
		echo -e "there is no files \n"
	fi
else
	echo -e "no such directory"
fi


