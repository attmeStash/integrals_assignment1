#include <iostream>
#include <compare>

int main()
{
	{
		int a = 5;
		int b = 4;

		int c = a + b;
		c = a - b;
		c = a * b;
		c = a / b;
	}

	{
		int a = 5;
		int b = -a;
		b = +a;
		std::cout << b << std::endl;

		uint8_t c = 5; // 8-bit integer
		auto d = +c; // d will be integer

		auto e = c + 1; // c is integer(applying arithmetic operators on mixed types there could be an unexpected results)
	
	
		{
			for (int i = 0; i < 20; ++i)
			{
				std::cout << i << " % 10 " << (i % 10) << std::endl;
			}
		
		}
	
		
	}

	//C++20 three-way comparison operator (spaceship operator)
	{
		int a = 5;
		int b = 4;

		auto c = a <=> b;

		if (c < 0) {
		std::cout << "a is less than b" << std::endl;
		}
		if (c > 0)
		{
			std::cout << "a is greater than b" << std::endl;
		}
		if (c == 0)
		{
			std::cout << "a is equal to b" << std::endl;

		}
	}


	return 0;
}