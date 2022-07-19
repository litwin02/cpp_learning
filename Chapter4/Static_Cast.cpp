#if 0
#include <iostream>

//This program test conversion between data types

void print(int x)
{
	std::cout << x << std::endl;
}

int main()
{
	/*
	std::cout << "Enter a single character: ";
	char usrChar{};
	std::cin >> usrChar;
	std::cout << "You enetered: '" << usrChar << "', which which has ASCII code " << static_cast<int>(usrChar) << ".\n";
	*/

	//Implicit cast - losing precision when casting from double to int
	double num{ 9.83 };
	print(num);
}
#endif