#if 0
#include <iostream>

//Quick program that checkes whether given number is a prime or not

int main()
{
	int userInput{};
	std::cout << "Enter a number(1-9) to determine whether it is a prime number or not: ";
	std::cin >> userInput;

	if (userInput < 1 )
		std::cout << "Your number is too small to be prime";
	else if (userInput == 2 || userInput == 3 || userInput == 5 || userInput == 7)
		std::cout << "Your number is prime";
	else
		std::cout << "Your number is not a prime number";
}
#endif