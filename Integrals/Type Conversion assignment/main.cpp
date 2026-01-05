#include <iostream>

int main()
{
	double db = 42.99;
	std::cout << db << std::endl;
	float f = static_cast <float> (db);
	std::cout << f << std::endl;
	int i = static_cast <int> (f);
	std::cout << i << std::endl;
	char ch = static_cast <char> (i);
	std::cout << ch << std::endl;
	bool b = static_cast <bool> (ch);
	std::cout << b << std::endl;

	return 0;
}

