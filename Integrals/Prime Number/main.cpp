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
	unsigned int min;
	unsigned int max;
	std::cout << "Input a minimum number" << std::endl;
	std::cin >> min;
	while (std::cin.fail())  //checking for invalid input of the first number
	{
		std::cerr << "Error occured \n" << std::endl;

		std::cin.clear();
		std::cin.ignore(10000, '\n');

		std::cout << "Enter a correct number" << std::endl;
		std::cin >> min;
	}


	std::cout << "Input a maximum number" << std::endl;
	std::cin >> max;
	while (std::cin.fail())  //checking for invalid input of the first number
	{
		std::cerr << "Error occured \n" << std::endl;

		std::cin.clear();
		std::cin.ignore(10000, '\n');

		std::cout << "Enter a correct number" << std::endl;
		std::cin >> max;
	}


		for (int i = min; i < max; i++)
		{
			int primeCounter = 0;

			for (int j = 1; j <= i; j++) // i know that we should check only up to sqrt of i, however this way it was just easier for me to complete the task
			{
				if (i % j == 0)
				{
					primeCounter++;
				}
				
			}
			if (primeCounter == 2)
			{
				std::cout << i << std::endl;
			}

		}
	
}

void optimizedPrime(int x)
{
	bool isPrime = true;

	for (int i = 5; i*i <= x; i+=6)
	{
		if ((x%i==0)||(x % (i + 2) == 0))
		{
			isPrime = false;			
			break;
		}
	

	}
	if (isPrime)
		std::cout << x << " is prime" << std::endl;
	else
		std::cout << x << " is not prime" << std::endl;

}


int main()
{
	prime(userInput());
	optimizedPrime(userInput());
}