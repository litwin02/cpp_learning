#include <iostream>

using namespace std;

//This program takes two integers and add them and substract them

int main() {
	int user_num1{};
	int user_num2{};

	cout << "Enter an integer: ";
	cin >> user_num1;

	cout << "\n" << "Enter another integer: ";
	cin >> user_num2;

	cout << user_num1 << " + " << user_num2 << " is " << user_num1 + user_num2 << "\n";
	cout << user_num1 << " - " << user_num2 << " is " << user_num1 - user_num2;

}