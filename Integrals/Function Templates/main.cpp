#include <iostream>

//template <typename T, typename U>
decltype(auto) max(const auto& a, const auto& b) //max in auto doesnt require template
{
	return a > b ? a : b;
}

//template<typename T>
void swap(auto& a, auto& b) //ASK ABOUT THE TEMPLATE, HOW DOES IT EXCACTLY WORK, ALSO ASK ABOUT &
{
	auto tmp = std::move (a); // tmp is a type because of the decltype
	a = std::move(b);
	b = std::move(tmp);
}


int main()
{
	{
		int a = 5;
		int b = 10;

		int c = max(a, b);
	}

	{
		int a = 5;
		double b = 10.0;

		auto c = max(a, b);
	}
	{
		int a = 5;
		int b = 10;
		swap(a, b);
		std::cout << "a: " << a << std::endl; //SO BASICALLY THAT MEANS THAT THE TEMPLATE IS CHANGING VALUES OF THE WHOLE PROGRAMM AND NOT SPECIFICALLY IN HIS 
		std::cout << "b: " << b << std::endl;
	}


	return 0;
}