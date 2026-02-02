#include <iostream>
#include <limits>




int main() {
	std::cout << "Enter the size of the array(from 1 to 10):" << std::endl;
	int num;
	std::cin >> num;
	while (std::cin.fail()) {

		if (std::cin.fail())
		{
			std::cerr << "Error, enter right size of the array" << std::endl;
			std::cout << " " << std::endl;
			std::cin.clear();

			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			

		}
		std::cin >> num;
	}
	bool check1 = false;
		if (num <= 0) {
			check1 = true;
		}
	while (check1 == true)
	{
		std::cout << "Enter size greater than 0" << std::endl;
		std::cin >> num;
		if ((num>0)&&(num<=10))
		{
			check1 = false;
		}
	}
	
	int sizeOfArray = num;
	int* values = new int[sizeOfArray];

	//fulfill the array with the values
	for (int i = 0; i < sizeOfArray; i++)
	{
		int numOfValue = i;
		std::cout << "Enter the value of the " << numOfValue++ << "th element" << std::endl;
		int numberI;
		std::cin >> numberI;
		values[i] = numberI;
	}

	std::cout << " " << std::endl;


	int minValue = values[0], maxValue = values[0], sum = 0;

	for (int i = 0; i < sizeOfArray; i++)
	{
		if (values[i]<minValue)
		{
			minValue = values[i];
		}
		if (values[i] > maxValue)
		{
			maxValue = values[i];
		}
		sum += values[i];
	}

	int average = sum / sizeOfArray;

	std::cout << "The minimum value of the array is " << minValue << std::endl;
	std::cout << "The maximum value of the array is " << maxValue << std::endl;
	std::cout << "The average value of the array is " << average << std::endl;

	delete[] values;

	return 0;
}
