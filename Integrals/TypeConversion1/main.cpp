#include <iostream>

class Base
{
public:
	virtual ~Base() = default;
};

class Derived : public Base
{
public:
	virtual ~Derived() override = default;
};

class Derived2 : public Base
{
public:
	~Derived2() override = default;
};

int main()
{
	unsigned char c = 'A';
	int i = c; //cause uinsigned is 8 bits and signed int is 32 bits => ?????????? ?????? ??? ????

	c = static_cast <unsigned char> (i); //Narrowing conversion

	unsigned int ui = 3;
	i = static_cast<int> (ui); //narrowing cuz signed int has 31 bit, but unsigned is 32

	ui = static_cast<unsigned int> (i); // Result in unintentional behaviour

	float f = 3.14f;
	double d = f;

	f = static_cast <float> (d); //Narrowing conversion

	f = static_cast <float> (i);
	d = i;

	i = static_cast<int>(f);

	const float cf = 3.14f;
	float* pf = const_cast<float*>(&cf);

	Base* b = new Derived();

	

	return 0;
}