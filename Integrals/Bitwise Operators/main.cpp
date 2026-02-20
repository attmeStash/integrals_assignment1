#include <iostream>
#include <cstdint>
#include <bitset>

int main()
{
	int8_t a = 0b1010101; // if the last number is 1, it means that the whole number is even
	int8_t b = 0b1111111;
	uint8_t mask = 0b111;

	std::cout << "a: " << std::bitset<8>(a) << std::endl;
	std::cout << "~a: " << std::bitset<8>(~a) << std::endl;// flipping each bit
	std::cout << "a & b : " << std::bitset<8>(a & b) << std::endl;// if a and b has 1, then it is going to print 1, if not, 0;
	std::cout << "a | b : " << std::bitset<8>(a | b) << std::endl; // if either bit is on, then it prints 1; 
	std::cout << "a ^ b : " << std::bitset<8>(a ^ b) << std::endl; // prints 1 if the bits is different
	std::cout << "a << 1: " << std::bitset<8>(a << 1) << std::endl; //moves every bit to the left by 1
	std::cout << "a << 8: " << std::bitset<8>(a << 8) << std::endl; // everything is 0 because moves everything to the left by 7
	std::cout << "a >> 8: " << std::bitset<8>(a >> 8) << std::endl; // same but to the right
	std::cout << "a & mask : " << std::bitset<8>(a & mask) << std::endl; //masking off the values


	std::cout << "b: " << std::bitset<8>(b) << std::endl;


	return 0;
}