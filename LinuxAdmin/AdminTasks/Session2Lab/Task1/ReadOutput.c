#include<fcntl.h> // for open()
#include<unistd.h> // for read() write() 

int main()
{
    int fdOut=0;
    int fdBrightness=0;
    char var;
    char newVar;
    // open output file in read only mode
    fdOut=open("/home/lulu/output",O_RDONLY);
    //read the variable from output file
    //if read successfuly toggle Brightness
    if (read(fdOut, &var, 1) == 1)
    {
        //oper brightness file in read write mode
        fdBrightness=open("/sys/class/leds/input2::capslock/brightness", O_WRONLY);
        //toggle 
        if(var =='1')
        {
            newVar='0';
        }
        else if(var == '0')
        {
            newVar='1';
        }
        write(fdBrightness,&newVar,1);
    }


    return 0;
}