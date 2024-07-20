#include<iostream>
#include<string>
#include<string_view>

std::string replaceString(std::string &haystack , std::string &needle ,std::string &replacement )
{
    
    std::string newstack = haystack;
   auto y= newstack.find(needle,0);
   while(y != std::string::npos)
   {
       newstack.replace(y,needle.length(),replacement);
        y =newstack.find(needle,y+replacement.length());
        
   }

   return newstack;
}


int main()
{
    
    std::string text;
    std::string needle;
    std::string replacement;
    std::cout<<"enter string \n";
    std::getline(std::cin, text);
    std::cout<<"enter needle \n";
    std::getline(std::cin, needle);
    std::cout<<"enter replacement\n";
    std::getline(std::cin, replacement);

std::string copy = replaceString(text , needle , replacement);



  std::cout<< "before replace \n";
    std::cout<< text <<"\n";
  std::cout<< "after replace \n";
    std::cout<< copy <<"\n";
    
    return 0;

}