#include<iostream>

class Car{
private:
  std::string company;
  std::string model;
  int year;

public:

void setCompany(std::string c)
{
    company = c;
}

void setModel(std::string m)
{
    model =m;
}
void setyear(int y)
{
    year = y;
}


std::string getCompany()
{
    return company;
}

std::string getModel()
{
    return model;
}
int getyear()
{
    return year;
}


void PrintValues()
{
    std::cout << " Company name is "<< company <<" \n model is "<< model <<"\n" << " year " << year <<"\n";
}

Car()
{
    company="none";
    model="none";
    year=0;
}
Car(std::string c , std::string m , int y)
{
    company= c;
    model= m;
    year= y;
}

~Car()
{

}

};



int main()
{
Car C1;
std::cout << "company is " << C1.getCompany() ;
std::cout << " model is" << C1.getModel() << " year is" << C1.getyear()<<"\n";
C1.PrintValues();
std::cout << "======================== \n";

Car C2;
C2.setCompany("mar");
C2.setModel("lulu");
C2.setyear(2000);
std::cout << "company is " << C2.getCompany() ;
std::cout << " model is" << C2.getModel() << " year is" << C2.getyear()<<"\n";
C2.PrintValues();

std::cout << "======================== \n";
Car C3("hu","a",2014);
std::cout << "company is " << C3.getCompany() ;
std::cout << " model is" << C3.getModel() << " year is" << C3.getyear()<<"\n";
C3.PrintValues();

std::cout << "======================== \n";
}