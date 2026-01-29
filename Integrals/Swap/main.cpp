#include <iostream>

static void swap(int* a, int* b) {
	
	int temp = *a;
	*a = *b;
	*b = temp;


	std::cout << "a swapped with b is:" << *a << std::endl;
	std::cout << "b swapped with a is:" << *b << std::endl;


}


int main()
{
	int a = 3;
	int b = 5;
	std::cout << "Old a:" << a << std::endl;
	std::cout << "Old b:" << b << std::endl;
	swap(&a,&b);
}



