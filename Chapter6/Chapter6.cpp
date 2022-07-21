#include <iostream>
#include "constants.h"

//This program test inline global variables

/*
bool passOrFail()
{
    static int counter{0};
    ++counter;
    return (counter <= 3);
}
*/

int main()
{
    std::cout << "Enter a radius: ";
    int radius{};
    std::cin >> radius;

    std::cout << "The circumference is: " << 2.0 * radius * constants::pi;
}
