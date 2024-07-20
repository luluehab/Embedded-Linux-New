#include<iostream>
#include <math.h>
using namespace std;

int main()
{
    int binary;
    unsigned int decimal;
    int cho;
    //ask user about operation he want
    cout<<"1. Convert Binary Numbers to Decimals  \n2. Convert Decimals Numbers to Binary"<<endl;
    cin>> cho;
    //if user want Convert Binary Numbers to Decimals
    if(cho==1)
    {
        int ite;
        int res=0;
        int base=1;
        cout<<"Enter the number"<<endl;
        cin>> binary;

        ite =binary;
        // loop until number be zero
        while(ite>0)
        {
         // to get the last digit of number // 1101 ==> 110{1}
         int lastDigit = ite%10;
         //to delete the last digit of number // 1101 ==>110
         ite /=10;
         // to get the decimal number 
         res += lastDigit*base;
         // update base to be equivlant to bit index //1101 ==> base of {0} is (1*2) // 1 is index of 0
         base *= 2;
        }
        cout<< res <<endl;
    }
    // if user want  Convert Decimals Numbers to Binary
    else if(cho == 2)
    {
    int ite; 
    int flag =0;
    int c=0;
    cout<<"Enter the number"<<endl;
    cin>> decimal;
    // loop on bits of number
    for(ite=(sizeof(decimal)*8)-1 ; ite>=0 ;ite--)
    {
        //get the first bit 101101 ==> 10110{1}
        if((decimal>>ite) & 1)
        {
           cout<<"1";
           //To avoid printing zeros that have no value 00000000000101 ==> 101
           flag =1;
        }
        else
        {
          if(flag==1)
           {
            cout<<"0";
           }
           else
           {

           }
        }
    }
    cout<<endl;
    }
return 0;
}
