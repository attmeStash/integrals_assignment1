#include <iostream>


template <typename T>
T minValue(T a, T b)
{
	return a < b ? a : b;
}


template <typename T>
void swapValues(T& a, T& b)
{
	T tmp = a;
	a = b;
	b = tmp;
}



int main()
{
	/*{
		int input1, input2;

		std::cin >> input1;
		std::cin >> input2;


		std::cout << minValue(input1, input2) << std::endl;
	}*/

	{
		int x = 5;
		int y = 10;
		swapValues(x, y);
		std::cout << x << " " << y << std::endl;
	}


	return 0;
}