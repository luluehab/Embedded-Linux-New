#include<iostream>
#include<utility>



namespace DynamicAlloc
{
    using pair= std::pair<int,int>;
   pair* CreatePair(int size)
   {
    
      pair* ptr = new pair [size];
      return ptr;

   }
   void DeletePair(pair* ptr)
   {
     delete ptr;
   }
   void SetPair(pair* ptr,int first, int second , int index)
   {
     ptr[index].first = first;
     ptr[index].second = second;
   }
   pair GetPair(pair* ptr, int index)
   {
    return ptr[index];
   }

   void PrintArray(pair* ptr,int size)
   {
    for(int i=0 ; i<size ;i++)
    {
        std::cout<< ptr[i].first <<" " <<ptr[i].second <<"\n";
    }
    std::cout<<"\n";
   }

}

 int main()
{

int size = 5;
using pair= std::pair<int,int>;
pair* ptr = DynamicAlloc::CreatePair(size);
for(int i=0 ; i<size ; i++)
{
DynamicAlloc::SetPair(ptr,i+1,i+2,i) ;
}
pair ptrd = DynamicAlloc::GetPair(ptr,2);
std::cout<< "the pair is " << ptrd.first <<" and " << ptrd.second <<"\n";

std::cout<<"========================================= \n";
DynamicAlloc::PrintArray(ptr,size);
DynamicAlloc::DeletePair(ptr);

    return 0;
}  
   