#include <iostream>

uint64_t factorial(uint32_t x)
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

long long Fib(uint32_t n)
{

    if (n > 1)
    {
        return Fib(n - 1) + Fib(n - 2);
    }
    else if (n == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }

}

int main()
{

	double temp;
	std::cin >> temp;
	while (std::cin.fail() || (temp < 0) || (temp > 4294967295))  //checking for invalid input of the first number
	{
		
			std::cerr << "Error occured \n" << std::endl;

			std::cin.clear();
			std::cin.ignore(10000, '\n');

		std::cout << "Enter a number" << std::endl;
		std::cin >> temp;
	}
	uint32_t x;
	x = temp;
	std::cout << factorial(x) << std::endl;

	std::cout << Fib(4) << std::endl;


}
