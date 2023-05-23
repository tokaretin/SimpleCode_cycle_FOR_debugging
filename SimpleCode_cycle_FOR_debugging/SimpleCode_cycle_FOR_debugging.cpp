#include <iostream>

int main()
{
	char simbol;
	int height; // высота
	int weidth;	// ширина

	std::cout << "символ: ";
	std::cin >> simbol;
	std::cout << "высота: ";
	std::cin >> height;
	std::cout << "ширина: ";
	std::cin >> weidth;

	for (int i = 0; i < height; i++)
	{
		std::cout << simbol;

		for (int j = 0; j < weidth; j++)
		{
			std::cout << simbol;
		}

		std::cout << '\n';

	}
}
