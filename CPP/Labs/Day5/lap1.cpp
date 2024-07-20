#include<iostream>
#include<string>



int main()
{
    
    std::string text{"the cycle of life is a cycle of cycles"};
    auto y= text.find("cycle",0);
   while(y != std::string::npos)
   {
        text.replace(y,5,"circle");
        y =text.find("cycle",y);
   }

    std::cout<< "after replace \n";
    std::cout<< text <<"\n";

    auto i =text.find("circle",0);
    text.insert(i,"great ");
    std::cout<< "after insert great \n";
    std::cout<< text<< i <<"\n";

    auto x = text.find("circle",i+7);
    text.insert(x,"never-ending ");
    std::cout<< "after insert never-ending \n";
    std::cout<< text<<"\n";
    return 0;

}