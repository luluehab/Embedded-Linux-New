#include<iostream>
using namespace std;

// Define the Name structure
typedef struct 
{
    char firstName[15];
    char middleName[15];
    char lastName[15];
}Name;


// Define the DateOfBirth structure
typedef struct 
{
    int day;
    int month;
    int year;
}DateOfBirth;


// Define the Address structure
typedef struct 
{
    char street[50];
    char city[20];
    char country[20]
}Address;


// Define the contact structure
typedef struct
{
    char email[50];
    double mobile;
    int telephone;
    
} contact;


// Define the Salary structure
typedef struct
{
   int basic;
   int additional;
   int reduction;
   int taxes;
}salary;


// Define the Employees structure
typedef struct 
{
    Name Emp_name;
    DateOfBirth Emp_DateOfBirth;
    Address Emp_Address;
    contact Emp_contact;
    salary Emp_Salary;
    char Emp_Jop[50];
}Employees;

int main()
{

    return 0;
}