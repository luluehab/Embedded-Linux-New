#include<iostream>
#include <cmath>

class Calculator{
private:
double num1;
double num2;
char op;
double add(double x,double y)
{
    return (x+y);
}
double sub(double x,double y)
{
    return (x-y);
}
double mul(double x,double y)
{
    return (x*y);
}
double div(double x, double y) 
{
if (y != 0) {
 return x / y;
} 
else {
            std::cerr << "Error: Division by zero!" << std::endl;
            return 0;  
    }
}

    double power(double base, double exponent) {
        return std::pow(base, exponent);
    }

    double squareRoot(double x) {
        if (x >= 0) {
            return std::sqrt(x);
        } else {
            std::cerr << "Error: Square root of a negative number!" << std::endl;
            return 0;  
        }
    }

public:

void calc(double num1, double num2, char op)
{
 switch(op) {
            case '+':
                std::cout << "Result: " << add(num1, num2) << std::endl;
                break;
            case '-':
                std::cout << "Result: " << sub(num1, num2) << std::endl;
                break;
            case '*':
                std::cout << "Result: " << mul(num1, num2) << std::endl;
                break;
            case '/':
                std::cout << "Result: " << div(num1, num2) << std::endl;
                break;
            case '^':
                std::cout << "Result: " << power(num1, num2) << std::endl;
                break;
            case 'S':
            case 's':
                std::cout << "Result: " << squareRoot(num1) << std::endl;
                break;
            default:
                std::cerr << "Error: Invalid operator!" << std::endl;
                break;
}
}


Calculator()
{
num1 = 0;
num2 = 0;
op = '+';
}



};

int main() {
    Calculator c;  // Correct object instantiation
    c.calc(2, 3, '+');  // Test addition
    c.calc(5, 2, '-');  // Test subtraction
    c.calc(3, 4, '*');  // Test multiplication
    c.calc(10, 2, '/'); // Test division
    c.calc(2, 3, '^');  // Test power
    c.calc(16, 0, 'S'); // Test square root
}