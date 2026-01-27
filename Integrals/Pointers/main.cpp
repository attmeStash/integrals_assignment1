#include <iostream>


int main()
{
	int i = 3;
	const char* name = "Artemijs";

	int* pi = &i;

	std::cout << "Adress of i: " << pi << std::endl;
	std::cout << "Value: " << *pi << std::endl; //* is cruical in order to get the value, not the address, unlike the 11 line

	*pi = 4;
	std::cout << "Value: " << *pi << std::endl;

	if (*pi = i)
	{

		std::cout << "The values are both " << i << std::endl;

	}

	std::cout << "The firtst letter of " << name << " is " << name[0] << std::endl;

	const char* const lastName = "Stashans"; //everything is const, nothing could be changed

	const char values[] = { 1, 2, 3, 4 };

	std::cout << *(values + 2) << std::endl; //+2 means that it should cout the third element in the array cuz it starts with 0 and 0+2 = 2 or third element

	int* arr = new int[100];

	*(arr + 0) = 0;
	arr[0] = 0;
	arr[99] = 99;
	*(arr + 99) = 99; // basically the same but the previous one is way more readable;

	delete[] arr;

	int& ir = i;

	std::cout << ir << std::endl;

	return 0;
}