#include <iostream>
using namespace std;

int main()
{
    int Size = 0; 
    cout<<"Enter the size" <<endl;
    cin>>Size;
    char** ptr= (char**)malloc(Size * sizeof(char *));
   for(int i =0; i<Size ;i++)
   {
    ptr[i]=(char *)malloc(20 * sizeof(char));
   } 

   for(int i=0 ; i<Size ;i++)
   {
    
    cout<<"enter string" <<(i+1)<<endl;
        cin>>ptr[i];
        
    }

 for(int i=0 ; i<Size ;i++)
   {
cout<< ptr[i]<<endl;
        
    }

     for(int i=0 ; i<Size ;i++)
   {
free(ptr[i]);
        
    }
free(ptr);
   }  
