#include <iostream>
#include <limits>
int main()
{
	std::cout << "Enter a number" << std::endl; //user's input
	double firstNumberUser;
	std::cin >> firstNumberUser;

	while (std::cin.fail())  //checking for invalid input of the first number
	{
		if (std::cin.fail())
		{
			std::cerr << "Error occured \n" << std::endl;

			std::cin.clear();
			std::cin.ignore(10000, '\n');


		}
		std::cout << "Enter a number" << std::endl;
		std::cin >> firstNumberUser;
	}

	char userOperator;


	while (true)
	{

		std::cout << "Enter an operator(+, -, *, /, %, ^)" << std::endl;
		std::cin >> userOperator;
		switch (userOperator)  //checks user's operator's input
		{
		case '+':
			break;
		case '-':
			break;
		case '*':
			break;
		case '/':
			break;
		case '%':
			break;
		case '^':
			break;

		default: // by default if none of the cases are valid, the system tells that error occured 
			std::cerr << "Error occured \n" << std::endl;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //ignores everything after first symbol
			continue; //continues with the loop abd doesnt break from the loop, which is wiritten next line
		}
		break;
	}
	double secondNumberUser;
	std::cout << "Enter a second number" << std::endl; //user's second numberinput

	std::cin >> secondNumberUser;
	while (true)
	{

		while (std::cin.fail())  //checking for invalid input of the second number
		{
			if (std::cin.fail() || (userOperator == '/' && secondNumberUser == 0))
			{
				std::cerr << "Error occured \n" << std::endl;

				std::cin.clear();
				std::cin.ignore(10000, '\n');
			}

			std::cout << "Enter a second number" << std::endl; //user's second numberinput

			std::cin >> secondNumberUser;
			continue;
		}
		if ((userOperator == '/' && secondNumberUser == 0))
		{
			std::cerr << "Error occured \n" << std::endl;

			std::cin.clear();
			std::cin.ignore(10000, '\n');
			std::cout << "Enter a second number" << std::endl; //user's second numberinput

			std::cin >> secondNumberUser;
			continue;
		}
		if ((userOperator == '%' && secondNumberUser == 0))
		{
			std::cerr << "Error occured \n" << std::endl;

			std::cin.clear();
			std::cin.ignore(10000, '\n');
			std::cout << "Enter a second number" << std::endl; //user's second numberinput

			std::cin >> secondNumberUser;
			continue;
		}

		break;
	}




	switch (userOperator)
	{
	case '+':
		std::cout << '\n';
		std::cout <<firstNumberUser << " + " << secondNumberUser << " = " << firstNumberUser + secondNumberUser << std::endl;
		break;
	case '-':
		std::cout << '\n';
		std::cout << firstNumberUser << " - " << secondNumberUser << " = " << firstNumberUser - secondNumberUser << std::endl;
		break;
	case '*':
		std::cout << '\n';
		std::cout << firstNumberUser << " * " << secondNumberUser << " = " << firstNumberUser * secondNumberUser << std::endl;
		break;
	case '/':
		std::cout << '\n';
		std::cout << firstNumberUser << " / " << secondNumberUser << " = " << firstNumberUser / secondNumberUser << std::endl;
		break;
	case '%':
		std::cout << '\n';
		std::cout << firstNumberUser << " % " << secondNumberUser << " = " << std::fmod(firstNumberUser, secondNumberUser) << std::endl;
		break;
	case '^':
		std::cout << '\n';
		std::cout << firstNumberUser << " ^ " << secondNumberUser << " = " << std::pow(firstNumberUser, secondNumberUser) << std::endl;
	}
	return 0;

}