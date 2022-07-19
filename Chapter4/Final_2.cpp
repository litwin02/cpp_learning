#include <iostream>

int main()
{
	constexpr double gravity = 9.8;
	double height{};

	std::cout << "Enter the height of the tower in meters: ";
	std::cin >> height;
	for (int i = 0; height >= 0; i++)
	{
		double distance_fallen = gravity * i * i / 2.0;
		height = height - distance_fallen;
		if (height > 0)
			std::cout << "At " << i << " seconds, the ball is at height: " << height << " meters\n";
		else
			std::cout << "At " << i << " seconds, the ball is on the ground.\n";
	}
}