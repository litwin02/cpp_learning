#if 0
#include <iostream>

double userInput_double()
{
	double user_number{};
	std::cout << "Enter a double value: ";
	std::cin >> user_number;
	return user_number;
}

int main()
{
	double v1{ userInput_double() };
	double v2{ userInput_double() };

	char sign{};
	std::cout << "Enter one of the following: +, -, *, or /: ";
	std::cin >> sign;

	switch (sign)
	{
	case '+':
		std::cout << v1 << ' ' << sign << ' ' << v2 << " is " << v1 + v2;
		break;
	case '-':
		std::cout << v1 << ' ' << sign << ' ' << v2 << " is " << v1 - v2;
		break;
	case '*':
		std::cout << v1 << ' ' << sign << ' ' << v2 << " is " << v1 * v2;
		break;
	case '/':
		std::cout << v1 << ' ' << sign << ' ' << v2 << " is " << v1 / v2;
		break;
	default:
		break;
	}
}
#endif