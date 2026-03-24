#include <iostream>

uint16_t factorial(uint16_t x)
{

	
	if (x > 1)
	{

		return x * factorial(x - 1);
	}
	else
	{
		return 1;
	}

}


int main()
{

	int temp;
	std::cin >> temp;
	while (std::cin.fail() || (temp < 0) || (temp > 65535))  //checking for invalid input of the first number
	{
		
			std::cerr << "Error occured \n" << std::endl;

			std::cin.clear();
			std::cin.ignore(10000, '\n');

		std::cout << "Enter a number" << std::endl;
		std::cin >> temp;
	}
	uint16_t x;
	x = temp;
	std::cout << factorial(x) << std::endl;




}
