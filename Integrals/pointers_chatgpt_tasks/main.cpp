#include <iostream>


int main()
{

	//FIRST EASY TASK

	/*int i = 4;
	int* pi = &i;
	std::cout <<"The address of i is: " << pi << std::endl;
	std::cout <<"The value of i is: " << *pi << std::endl;

	*pi = 6;
	 
	std::cout << "The value of the new i is: " << *pi << std::endl;


	int i2 = 10;

	int* pi2 = &i2;

	int temp = *pi;
	*pi = *pi2;
	*pi2 = temp;

	std::cout << "Swaped ones are: " << *pi << " "<<*pi2 <<std::endl;*/



	//SECOND MIDDLE TASKS

	int arr[5] = {1,2,3,4,5};

	int sum = 0;

	for (int i = 0; i < 5; i++)
	{
		int* pi = &arr[i];
		std::cout << *pi << std::endl;
		sum += *pi;
	}
	std::cout << sum << std::endl;



	int arr2[5];
	for (int i = 0; i < 5; i++)
	{
		std::cin >> arr2[i];
		std::cout << " " << std::endl;
	}
	int min = 0;
	for (int i = 0; i < 5; i++)
	{
		int* pi = &arr2[i];
		if (*pi > min)
		{
			min = *pi;
		}
	}
	std::cout << min << std::endl;


	std::cout << "PRINT ARRAY ELEMENTS IN REVERSE ORDERS" << std::endl;

	

	for (int i = 0; i < 5; i++)
	{
		int* ppi = &arr[4-i];
		std::cout << *ppi << std::endl;
	}

	return 0;
}





