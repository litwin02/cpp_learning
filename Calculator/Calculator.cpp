#include <iostream>
#include <string>
#include "Compute.h"

//Calculator ver1

float numInput(const std::string& inputMessage)
{
    std::cout << "Enter a " << inputMessage;
    float input{ };
    std::cin >> input;
    return input;
}

int main()
{
    float num1{ numInput("first number: ") };
    char sign_operation;
    std::cout << "Enter a sign: ";
    std::cin >> sign_operation;
    float num2{ numInput("second number: ") };
    switch (sign_operation)
    {
    case '+':
        std::cout << "The result is: " << add(num1, num2);
        break;
    case '-':
        std::cout << "The result is: " << sub(num1, num2);
        break;
    case '*':
        std::cout << "The result is: " << multiply(num1, num2);
        break;
    case '/':
        std::cout << "The result is: " << divide(num1, num2);
        break;
    default:
        break;
    }
}//end of main
