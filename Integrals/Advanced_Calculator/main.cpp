#include <iostream>
#include <string>
#include <cstring>


int main()
{
	std::string userInput;
	std::cin >> userInput;
	int n = userInput.length();
	char* arr = new char[n];

	int index = 0;
	int sizeOfOperators = 0;

	strcpy_s(arr, n+1, userInput.c_str()); // from string userInput to an array of chars, n+1 is for the null character
	
	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i] << std::endl;
		if ((arr[i] == '+') || (arr[i] == '-') || (arr[i] == '*') || (arr[i] == '/') || (arr[i] == '%'))
		{
			index = i;
			sizeOfOperators++;
		}

	}
	int indexOfOperators = 0;
	char* arrOperators = new char[sizeOfOperators];
	for (int i = 0; i < n; i++)
	{
		if ((arr[i] == '+') || (arr[i] == '-') || (arr[i] == '*') || (arr[i] == '/') || (arr[i] == '%'))
		{
			
			arrOperators[indexOfOperators] = arr[i];
			std::cout << arrOperators[indexOfOperators] << std::endl;
			indexOfOperators++;
		}

	}

	return 0;
}