#include<fcntl.h> // for open() (from man open)
#include<unistd.h> //for write() read()
#include<stdio.h>
int main()
{

    int fdBright =0;
    int output=0;
    char var;
    //open needed file, (O_RDONLY) for read only mode 
    fdBright =open("/sys/class/leds/input2::capslock/brightness", O_RDONLY);
    //open output file in write mode
    output=open("/home/lulu/output",O_WRONLY);

    //print("file descriptor: %d",fdBright)



    // read variable from brightness file to write it in output file 
    // if read succesfully, write on output
    // 1 for count byte
    if(read(fdBright,&var,1)==1)
    {
        printf("now var in output");
        write(output,&var,1);
    }

    return 0;
}

