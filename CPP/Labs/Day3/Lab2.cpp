#include<iostream>
#include<cmath>

namespace DynamicAlloc
{
   int** Create2DArr(int size)
   {
      
      int** ptr = new int* [size];
      for(int i=0 ; i< size ; i++)
     {
       ptr[i]= new int[size];
     }
      return ptr;

   }
   void Delete2DArr(int** ptr, int size)
   {
     for(int i=0 ; i< size ; i++)
     {
        delete ptr[i];
     }
     delete ptr;
   }
}

 int main()
{

int size = 5;
int** ptr = DynamicAlloc::Create2DArr(size);



for(int i=0 ; i<size; i++)
{
    for(int j=0 ; j<size ;j++)
    {
        ptr[i][j]= i;
    }
}

for(int i=0 ; i<size; i++)
{
    for(int j=0 ; j<size ;j++)
    {
       std::cout << ptr[i][j] <<" ";
    }
    std::cout<<"\n ";
}  

DynamicAlloc::Delete2DArr(ptr,size);

    return 0;
}  
   
