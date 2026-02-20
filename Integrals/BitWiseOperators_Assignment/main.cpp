#include <iostream>
#include <bitset>
#include <cstdint>

int userInput()
{
	int input;
	std::cout << "Input a number in the range of 0 to 255" << std::endl;
	std::cin >> input;
	while (std::cin.fail() || input < 0 || input > 255)  //checking for invalid input of the first number
	{
		if (std::cin.fail())
		{
			std::cerr << "Error occured \n" << std::endl;

			std::cin.clear();
			std::cin.ignore(10000, '\n');
		}
		if ((input < 0 || input >255))
		{
			std::cerr << "Error occured \n" << std::endl;

			std::cin.clear();
			std::cin.ignore(10000, '\n');


		}
		std::cout << "Enter a number" << std::endl;
		std::cin >> input;
	}
	return static_cast<int>(input);
}
int bitPosition()
{
	int input;
	std::cout << "Input a number in the range of 1 to 7" << std::endl;
	std::cin >> input;
	while ((std::cin.fail() || input < 0 || input > 7))  //checking for invalid input of the first number
	{
		if (std::cin.fail())
		{
			std::cerr << "Error occured \n" << std::endl;

			std::cin.clear();
			std::cin.ignore(10000, '\n');


		}
		std::cout << "Enter a number" << std::endl;
		std::cin >> input;
	}
	return input;
}

int checkBits(uint8_t a)
{
	uint8_t mask = 0b00000001;
	int counter = 0;
	for (int i = 0; i < 8; i++)
	{
		bool cond = (a & mask);
		if (cond)
		{
			counter++;
		}
		mask <<= 1;
	}
	return counter;
}

bool bitPositionCheck(int a, uint8_t b)
{
	uint8_t mask = 0b00000001;
	mask <<= a;
	return (b & mask) != 0;

}

int main()
{
	uint8_t input = userInput();
	int bitPositionInput = bitPosition();
	std::cout << std::bitset<8>(input) << std::endl;
	std::cout << std::bitset<8>(input)<< " or " << static_cast<int>(input) << " has " << checkBits(input) << " bits on" << std::endl;
	std::cout << bitPositionInput-1 << " bit in the " << std::bitset<8>(input) << " or " << static_cast<int>(input) << " is set: " << (bitPositionCheck(bitPositionInput, input) ? "true" : "false") << std::endl;
	
	int mask = 0b00000001;
	mask <<= bitPositionInput;

	uint8_t setBit = input | mask;
	std::cout << "After setting bit: " << std::bitset<8>(setBit) << " (" << static_cast<int>(setBit) << ")" << std::endl;
	uint8_t clearedBit = input & ~mask;
	std::cout << "After clearing bit: " << std::bitset<8>(clearedBit) << " (" << static_cast<int>(clearedBit) << ")" << std::endl;
	uint8_t invertedBit = input ^ mask;
	std::cout << "After inverting bit: " << std::bitset<8>(invertedBit) << " (" << static_cast<int>(invertedBit) << ")" << std::endl;
	uint8_t leftBit = input << bitPositionInput;
	std::cout << "After left shift: " <<  std::bitset<8>(leftBit) << " (" << static_cast<int>(leftBit) << ")" << std::endl;
	uint8_t rightBit = input >> bitPositionInput;
	std::cout << "After right shift: " << std::bitset<8>(rightBit) << " (" << static_cast<int>(rightBit) << ")" << std::endl;

}


