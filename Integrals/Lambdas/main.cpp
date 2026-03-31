#include <iostream>
#include <functional>
//a fucntion that takes 2 ints and returns an int
using add_func = std::function<int(int, int)>;

int call_func(add_func f, int a, int b) // idk why but using auto is not likebale by the teacher so whatever
{

	return f(a, b);
}



int main()
{
	auto f = [](int a, int b) -> int {return a + b; }; // -> optional specyfing what type lambda returns
	//lambdas are mini functions that make the code easier
	
	int c = f(5, 10); 
	int l = call_func(f, 5, 10);

	int a = 10;
	int b = 15;
	auto g = [&] {return a + b; }; //capture by the value ([0]) and work with copies of the variables
	// [&] means capturing by reference which means, that changing the values would change the outcome
	auto gv = [a, b] {return a + b; };
	//specyfing the variables will capture them by values
	//just adding & before the variables (&a) will make the lambda capture by reference
	auto gvd = [=, &a, &b] {return a + b; }; //basically means capture everything by value, except a and b

	 a = 20;
	 b = 30;

	//should be 25 with [=], but isn't because the values was capturead by reference
	

	int d = g();
	int dv = gv();
	std::cout << "g(): " << d << std::endl;
	std::cout << "gv(): " << dv << std::endl;
	
	// C++ 14: generic lambdas (it means has an auto in the parameter list)

	auto h = [](auto a, auto b) { return a + b; }; // could use auto h = [] <typename T> (T a, T b) {return...;}; to guarantee that both variables are the same type
	//but template parameter require C++ 20
	auto i = h(5, 10);



	return 0;
}