## 1. List the available shells in your system.
cat /etc/shells

![alt text](image.png)

## 2. List the environment variables in your current shell.
printenv

![alt text](image-1.png)

## 3. Display your current shell name.
echo $SHELL

![alt text](image-2.png)

## 4. Execute the following command :
echo \ then press enter 

![alt text](image-3.png)

What is the purpose of \ ?
- the backslash character (\) is used as an escape character
- When you execute the command echo \ followed by pressing Enter, the backslash serves a specific purpose:
     - indicates that the command continues on the next line, So in the new line you enter what you need to print.



## 5. Create a Bash shell alias named PrintPath for the “echo $PATH” command

alias printPath="echo $PATH"

- To delete the alias
    - unalias printPath 

![alt text](image-4.png)
