#include<iostream>
#include<cmath>

namespace Mathfunc
{
   void print(double x)
   {
   std::cout<< sqrt(x) << "\n";
   }
}
namespace Stringfunc
{
    void print(std::string name)
   {
     for(char& c : name)
     {
        c= ::toupper(c);
     }
     std::cout<< name << "\n";
   }
}
namespace Arrfunc
{
    void print(int arr[], int size)
   {
     for(int i=size-1 ; i>= 0 ;i--)
     {
      std::cout<< arr[i] ;
     }
     std::cout <<"\n";
   }
}

int main()
{
double x =9;
std::string name= "lulu";
int arr[5]={1,2,3,4,5};

Mathfunc::print(x);
Stringfunc::print(name);
Arrfunc::print(arr,5);

    return 0;
}