#if 0
#include <iostream>

bool isEven(int num)
{
    return num % 2 == 0;
}

void printAnswer(int number, bool evenNumb)
{
    if (evenNumb)
        std::cout << number << " is even";
    else
        std::cout << number << " is odd";
}

int main()
{
    int userInput{};
    std::cout << "Enter a number: ";
    std::cin >> userInput;
    printAnswer(userInput, isEven(userInput));
}
#endif