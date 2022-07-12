#include <iostream>
#include "IO.h"

int readNumber()
{
    std::cout << "Enter an integer: ";
    int user_input{};
    std::cin >> user_input;
    return user_input;
}

void writeAnswer(int output)
{
    std::cout << "The sum of this two numbers is: " << output;
}