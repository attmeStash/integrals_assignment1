#include <iostream>

int add(int a, int b)
{
	return a + b;
}

int pass_by_value(int a)
{
	a += 5;
	return a;
}

int pass_byy_reference(int& a) //usually complex types
{
	a += 5;
	return a;
}

int pass_by_const_reference(const int& a) 
{
	//a += 5;
	return a;
}

int pass_by_pointer(int* p) //variable is optional
{
	if (p)
		*p += 5;
	return *p;
}

double pow(double base, int exponent = 1) //default should be at the end tho
{

}

double add(double a, double b)
{
	return a + b;
}

float add(float a, float b)
{
	return a + b;
}

int main()
{
	int one = add(0, 1);
	int a = 0;
	pass_by_value(a);
	std::cout << "a: " << a << std::endl;
	a = pass_byy_reference(a);

	pass_by_const_reference(10); //literals are allowed when passed by const reference 
	int b = 0;
	pass_by_pointer(&b);

	double d1 = add(0.0, 1.0); //double version
	float f1 = add(0.0f, 1.0f);


	int(*add_func)(int, int);
	add_func = &add;

	int j = add_func(5, 6); //????????

	add_func f = &add; //??
	return 0;
}