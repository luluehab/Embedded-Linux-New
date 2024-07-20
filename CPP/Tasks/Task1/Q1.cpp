#include <iostream>
#include <stdio.h>


using namespace std;

int main()
{
    // Define the variables
    int inputVar;
    int result=0;
    int loop=0;
    //loop until user input Zero 
    while(loop == 0)
    {
    cout<<"Please Enter Number";
    cin>> inputVar;

    if(inputVar != 0)
    {   //sum all user's inputs
        result += inputVar;
    }
    else
    {
        cout << result;
        loop =1;
    }
    }
    return 0;
}