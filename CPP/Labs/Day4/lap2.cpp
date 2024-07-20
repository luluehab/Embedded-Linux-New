
#include<iostream>

// int pair
/*class Pair{
private:
    int first;
    int second;

public:

void setFirst(int f)
{
first = f;
}

void setSecond(int s)
{
second =s;
}

void setPair(int f, int s)
{
    first =f;
    second =s;
}

int getFirst()
{
    return first;
}
int getSecond()
{
    return second;
}
void swap()
{
    int temp = first;
    first = second;
    second =temp;
}

void PrintPair()
{
    std::cout << " the first element is "<< first <<" \n the second element is "<< second<<"\n";
}


Pair()
{
    first =0;
    second=0;
}
Pair(int f,int s)
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
Pair p1(5,6);
std::cout << "first element " << p1.getFirst() <<"\n";
std::cout << "secont element " << p1.getSecond() <<"\n";
std::cout << "======================== \n";
p1.swap();
p1.PrintPair();*/



//string pair

class Pair{
private:
    std::string first;
    std::string second;

public:

void setFirst(std::string f)
{
first = f;
}

void setSecond(std::string s)
{
second =s;
}

void setPair(int f, int s)
{
    first =f;
    second =s;
}

std::string getFirst()
{
    return first;
}
std::string getSecond()
{
    return second;
}
void swap()
{
   first.swap(second);
}

void PrintPair()
{
    std::cout << " the first element is "<< first <<" \n the second element is "<< second<<"\n";
}


Pair()
{
    first ="none";
    second="none";
}
Pair(std::string f,std::string s)
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
Pair p1("lulu","ehab");
std::cout << "first element " << p1.getFirst() <<"\n";
std::cout << "secont element " << p1.getSecond() <<"\n";
std::cout << "======================== \n";
p1.swap();
p1.PrintPair();

    return 0;
}
