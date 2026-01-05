#include <iostream>
#include <cstdint>


int main() 
{
	int min_int = -2147483647;
	int max_int = 214783647;

	unsigned int max_unit = 4'294'967'295;
	unsigned int min_uint = 0;
	unsigned int max_uint = -1;

	std::cout << "Sizeof int: " << sizeof(int) << std::endl;
	std::cout << "Min uint (-1): " << max_uint << std::endl;
	
	short max_short = 32'767;
	short min_short = -32'768;

	unsigned max_ushort = 65535;
	
	std::cout << "Size of short: " << sizeof(short) << std::endl;
	
	long max_long = 214'783'647;
	long min_long = -214783647;

	std::int32_t i = 0; // always 32-bits
	std::uint32_t ui = 0;
	std::int16_t i16 = 0; // always 16-bits
	std::int64_t i64 = 0; //always 64


	
	std::cout << "Size of short: " << sizeof(int64_t) << std::endl;


	std::size_t sz = 0; //64-bits on 64-bit builds, 32-bits on 32-bits platform tho

	std::cout << "Sizeof size_t: " << sizeof(std::size_t) << std::endl;
	return 0;
} 