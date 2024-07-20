#include <iostream>
using namespace std;

typedef struct 
{
    int* ptr;
    int size;
    int capacity;
}D_array;

void Dynamic_array_init(D_array* arr,int size)
{
    arr->ptr = (int *)malloc(size * (sizeof(int)));
    arr->size = size;
    arr->capacity = 0; 

}

void Dynamic_array_print(D_array* arr)
{
    int i;
    for(i=0; i< arr->capacity ;i++)
    {
       cout<< arr->ptr[i]<<endl;//*(arr->ptr +i)
    }
}

void Dynamic_array_print_index(D_array* arr , int index)
{
cout<< arr->ptr[index]<< endl;
}

void Dynamic_array_insertAtIndex(D_array* arr , int index , int element)
{
    if(index < arr->size)
        {
        arr->ptr[index]=element;
        cout<< arr->ptr[index]<< endl;
         arr->capacity ++;
        }
        
    else if(index >= arr->size)
        {
        arr->ptr =(int *)realloc(arr->ptr , (arr->size*2)*sizeof(int));
        arr->size=arr->size*2;
        if(index > arr->capacity)
            {
                arr->ptr[index]=element;
            }
        else
            {
                for(int i=arr->size; i>index  ; i--)
                arr->ptr[arr->capacity] = arr->ptr [arr->capacity -1];
            }
           
          arr->capacity ++;
        }
    /*else if()
        {
        
            cout<< "out of bounds"<<endl;
        }*/
    

}
void Dynamic_array_print_size(D_array* arr)
{

   cout<<"array size = "<< arr->size << endl;
}
void Dynamic_array_print_capacity(D_array* arr)
{
    cout<<"array capacity = "<< arr->capacity << endl;
}


int main()
{

D_array myarr;
Dynamic_array_init(&myarr,5);
Dynamic_array_print_size(&myarr);
Dynamic_array_print_capacity(&myarr);


Dynamic_array_insertAtIndex(&myarr, 0, 0);
Dynamic_array_insertAtIndex(&myarr, 1, 1);
Dynamic_array_print_size(&myarr);
Dynamic_array_print_capacity(&myarr);


Dynamic_array_insertAtIndex(&myarr, 2, 2);
Dynamic_array_insertAtIndex(&myarr, 3, 3);

Dynamic_array_print(&myarr);
Dynamic_array_print_index(&myarr, 2);

Dynamic_array_print_size(&myarr);
Dynamic_array_print_capacity(&myarr);

Dynamic_array_insertAtIndex(&myarr, 4, 4);
Dynamic_array_insertAtIndex(&myarr, 5, 5);
Dynamic_array_insertAtIndex(&myarr, 6, 6);
Dynamic_array_insertAtIndex(&myarr, 7, 7);

Dynamic_array_print_size(&myarr);
Dynamic_array_print_capacity(&myarr);
}