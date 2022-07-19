#if 0
#include <iostream>
#include <string>

//This program takes user full name, counts letters in it and sum it with user age

int main()
{
	std::cout << "Enter your full name: ";
	std::string name{};
	std::getline(std::cin >> std::ws, name);

	std::cout << "Enter your age: ";
	int age{};
	std::cin >> age;

	int length_age = static_cast<int>(name.length()) + age; 

	std::cout << "Your age + length of name is: " << length_age;
}
#endif