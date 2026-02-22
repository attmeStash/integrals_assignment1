#include <iostream>
#include <cmath>

unsigned int userInput()
{
	unsigned int shapeInput;
	std::cout << "Input a number" << std::endl;
	std::cin >> shapeInput;
	while (std::cin.fail())  //checking for invalid input of the first number
	{
		std::cerr << "Error occured \n" << std::endl;

		std::cin.clear();
		std::cin.ignore(10000, '\n');

		std::cout << "Enter a correct number" << std::endl;
		std::cin >> shapeInput;
	}
	return shapeInput;
}

void prime(unsigned int x)
{
	int counter = 0;
	for (int i = 1; i < sqrt(x); i++)
	{
		
		if (x%i==0)
		{
			counter++;
		
		}
		
	}
	if (counter == 1)
	{
		std::cout << x << " is prime" << std::endl;
	}
	else
	{
		std::cout << x << " is not prime" << std::endl;

	}
}


int main()
{
	prime(userInput());
}