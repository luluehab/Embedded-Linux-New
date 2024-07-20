#include<iostream>
#include<stdlib.h>

using namespace std;
#define minsec 60 

int main()
{
    //Define variables
    int inputSec;
    int hour;
    int minutes;
    int secounds;
    float fh,fm,mod;
    // ask user to enter number of seconds
    cout << "Enter Input secound";
    cin>> inputSec;

     //calculate the hours
     fh = inputSec/(float)(minsec*minsec);
     hour = fh;
    //calculate The remaining seconds to calculate minutes
     mod= (fh - hour)*minsec;
     minutes=mod;
     //calculate The remaining seconds
     secounds=(mod-minutes)*minsec;

     cout<< "H:M:S - " <<hour <<":"<<minutes<<":"<<secounds<<endl;




}