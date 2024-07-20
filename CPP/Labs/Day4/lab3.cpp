#include<iostream>

template<typename T1,typename T2>
class Pair{
private:
    T1 first;
    T2 second;

public:

void setFirst(T1 f)
{
first = f;
}

void setSecond(T2 s)
{
second =s;
}

void setPair(T1 f, T2 s)
{
    first =f;
    second =s;
}

T1 getFirst()
{
    return first;
}
T2 getSecond()
{
    return second;
}

void PrintPair()
{
    std::cout << " the first element is "<< first <<" \n the second element is "<< second<<"\n";
}

Pair()
{
}
Pair(T1 f,T2 s)
{
    first=f;
    second=s;
}

~Pair()
{

}

};



int main()
{
Pair<int,int> p1(5,6);
std::cout << "first element " << p1.getFirst() ;
std::cout << " secont element " << p1.getSecond() <<"\n";
p1.PrintPair();
std::cout << "======================== \n";

Pair<std::string,int> p2;
p2.setFirst("lulu");
p2.setSecond(24);
std::cout << "first element " << p2.getFirst() ;
std::cout << " secont element " << p2.getSecond() <<"\n";
p2.PrintPair();
std::cout << "======================== \n";
}