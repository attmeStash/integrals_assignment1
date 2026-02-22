
#include <iostream>
#include <cmath>
#include <limits>

char userInputShape()
{
	char shapeInput;
	std::cout << "Input a shape (C - Circle, S - Square, R - Rectangle, T - Triangle)" << std::endl;
	std::cin >> shapeInput;
	while (std::cin.fail() || shapeInput!= 'C' && shapeInput != 'S' && shapeInput != 'R' && shapeInput != 'T')  //checking for invalid input of the first number
	{
			std::cerr << "Error occured \n" << std::endl;

			std::cin.clear();
			std::cin.ignore(10000, '\n');

		std::cout << "Enter a correct letter" << std::endl;
		std::cin >> shapeInput;
	}
	return shapeInput;
}

void circle()
{
	int radius;
	std::cout << "Input a radius" << std::endl;
	std::cin >> radius;
	const float PI = 3.141592653f;
	while (std::cin.fail())  //checking for invalid input of the first number
	{
		if (std::cin.fail())
		{
			std::cerr << "Error occured \n" << std::endl;

			std::cin.clear();
			std::cin.ignore(10000, '\n');


		}
		std::cout << "Enter a number" << std::endl;
		std::cin >> radius;
	}

	std::cout << "Circumference of the circle is " << PI *2*radius << std::endl;
	std::cout << "Area of the circle is " << PI * radius*radius << std::endl;
}

void square()
{
	int side;
	std::cout << "Input a side" << std::endl;
	std::cin >> side;

	while (std::cin.fail())  //checking for invalid input of the first number
	{
		if (std::cin.fail())
		{
			std::cerr << "Error occured \n" << std::endl;

			std::cin.clear();
			std::cin.ignore(10000, '\n');


		}
		std::cout << "Enter a number" << std::endl;
		std::cin >> side;
	}

	std::cout << "Perimeter of the square is " << 4*side << std::endl;
	std::cout << "Area of the square is " << side*side << std::endl;
}

void rectangle()
{
	int width;
	int height;
	std::cout << "Input a width" << std::endl;
	std::cin >> width;

	while (std::cin.fail())  //checking for invalid input of the first number
	{
		if (std::cin.fail())
		{
			std::cerr << "Error occured \n" << std::endl;

			std::cin.clear();
			std::cin.ignore(10000, '\n');


		}
		std::cout << "Enter a number" << std::endl;
		std::cin >> width;
	}
	std::cout << "Input a height" << std::endl;
	std::cin >> height;


	while (std::cin.fail())  //checking for invalid input of the first number
	{
		if (std::cin.fail())
		{
			std::cerr << "Error occured \n" << std::endl;

			std::cin.clear();
			std::cin.ignore(10000, '\n');


		}
		std::cout << "Enter a number" << std::endl;
		std::cin >> height;
	}

	std::cout << "Perimeter of the rectangle is " << (2*width) + (2*height) << std::endl;
	std::cout << "Area of the rectangle is " << width*height << std::endl;
}

void triangle()
{
	int base;
	int height;
	std::cout << "Input a base" << std::endl;
	std::cin >> base;

	while (std::cin.fail())  //checking for invalid input of the first number
	{
		if (std::cin.fail())
		{
			std::cerr << "Error occured \n" << std::endl;

			std::cin.clear();
			std::cin.ignore(10000, '\n');


		}
		std::cout << "Enter a number" << std::endl;
		std::cin >> base;
	}
	std::cout << "Input a height" << std::endl;
	std::cin >> height;


	while (std::cin.fail())  //checking for invalid input of the first number
	{
		if (std::cin.fail())
		{
			std::cerr << "Error occured \n" << std::endl;

			std::cin.clear();
			std::cin.ignore(10000, '\n');


		}
		std::cout << "Enter a number" << std::endl;
		std::cin >> height;
	}

	std::cout << "Perimeter of the triangle is " << (base+height+sqrt(base*base+height*height)) << std::endl;
	std::cout << "Area of the triangle is " << base*height/2 << std::endl;
}

int main()
{
	char userInputShapeForm = userInputShape();

	switch (userInputShapeForm)
	{
	case 'C':
		circle();
		break;
	case 'S':
		square();
		break;
	case 'R':
		rectangle();
		break;
	case 'T':
		triangle();
		break;
	default:
		std::cout << "Something went wrong" << std::endl;
	}
}