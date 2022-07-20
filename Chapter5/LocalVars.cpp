#include <iostream>

int main()
{
	int smaller{};
	int larger{};
	std::cout << "Enter an integer: ";
	std::cin >> smaller;

	std::cout << "Enter a larger integer: ";
	std::cin >> larger;

	if (smaller > larger)
	{
		std::cout << "Swapping the values\n";
		int temp{ larger };
		larger = smaller;
		smaller = temp;
	}//temp dies here

	std::cout << "The smaller value is: " << smaller <<"\n";
	std::cout << "The larger value is: " << larger << "\n";
}//larger and smaller dies here