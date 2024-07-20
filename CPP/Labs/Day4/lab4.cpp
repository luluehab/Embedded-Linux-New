#include<iostream>

class VPointerArray{
private:
void** ptr;
int size;
public:

void setValue(void* p,int index)
{
    ptr[index]=p;
}
void* getValue(int index)
{
return ptr[index]
}
int getSize()
{
    return size;
}
VPointerArray()
{
    ptr = new void* [2];
}
VPointerArray(int size)
{
     ptr = new void* [size];
}
~VPointerArray()
{
for(int i=0 ;i<size ;i++)
{delete ptr[i];}
delete ptr;
}

};