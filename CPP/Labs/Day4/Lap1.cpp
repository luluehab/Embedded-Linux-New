
#include<iostream>

enum class ErrorCode
{
 Bad_Request = 401, 
 Not_found = 404,
 Server_error=500,
 Gateway_timeout = 504
};

void PrintError(ErrorCode var)
{

   /*  if input int
   std::cout<<"login \n";
    if(x == static_cast<int>(ErrorCode ::Bad_Request))
    {
        std::cout<<"Bad Request";
    }
    else if(static_cast<int>(ErrorCode ::Not_found) == x)
    {
         std::cout<<"Not found";
    }
    else if(static_cast<int>(ErrorCode ::Server_error) == x)
    {
         std::cout<<"Server error";
    }
    else if(static_cast<int>(ErrorCode ::Gateway_timeout) == x)
    {
         std::cout<<"Gateway_timeout";
    }
    else
    {
      std::cout<<"no choise";
    }*/

   switch (var)
   {
   case ErrorCode::Bad_Request:
     std::cout<<"Bad Request \n";
    break;
   case ErrorCode::Not_found:
      std::cout<<"Not found \n";
    break;
    case ErrorCode::Server_error:
     std::cout<<"Server error \n";
    break;
    case ErrorCode::Gateway_timeout:
     std::cout<<"Gateway_timeout \n";
    break;
   default:
   std::cout<<"no choise \n";
    break;
   }
}

int main()
{
    ErrorCode var1= ErrorCode::Not_found;
    PrintError(var1);
    return 0;
}