#include <iostream>



int main()
{
	int values[5]{1};

	for (int i = 0; i < std::size(values); i++)
	{
		std::cout << values[i] << std::endl;
	}

	int* pvalues = new int[10];
	memset(pvalues, 0, sizeof(int) * 10); //sets every element to 0
	for (int i = 0; i < 10; i++)
	{
		std::cout << pvalues[i] << std::endl;
	}

	int values2d[3][3]
	{
		{0,1,2},
		{3,4,5},
		{6,7,8 }
	};

	int* pvalues2d = &values2d[0][0]; // array as a pointer

	for (int i = 0; i < 9; i++)
	{
		std::cout << pvalues2d[i] << std::endl;;
	}

	delete[] pvalues;


	return 0;
}