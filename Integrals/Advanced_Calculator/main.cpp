#include <iostream>
#include <string>
#include <cstring>


int main()
{
	std::string userInput;
	std::cin >> userInput;
	int n = userInput.length();
	std::string* tokens = new std::string[n]; //maximum possible tokens
	int tokensCount = 0;

	int index = 0;
	int sizeOfOperators = 0;

	
	std::string current = "";
	for (int i = 0; i < n; i++)
	{
		while (userInput[i] != '+' && userInput[i] != '-' && userInput[i] != '*' && userInput[i] != '/' && userInput[i] != '(' && userInput[i] != ')')
		{
			current += userInput[i];
			i++;
			if (i >= n)
			{
				i--; // so that there will be no unwanted behaviour
				break;
			}
		}
		if (!current.empty())
		{
			tokens[tokensCount] = current;
			tokensCount++;
		}
		if ((userInput[i] == '+' || userInput[i] == '-' || userInput[i] == '*' || userInput[i] == '/'))
		{
			 tokens[tokensCount] = userInput[i];
			 tokensCount++;

		}
		else if ((userInput[i] == '(' || userInput[i] == ')'))
		{
			tokens[tokensCount] = userInput[i];
			tokensCount++;
		}
		current = "";

	}

	std::string* outputArr = new std::string[tokensCount];
	std::string* operatorStack = new std::string[tokensCount];
	int stackTop = 0;
	int outputArrCount = 0;
	int operatorCount = 0;
	int* operatorRate = new int[tokensCount];
	int indexTopStack = -1;

	for (int i = 0; i < tokensCount; i++)
	{
		if ((tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/" && tokens[i] != "(" && tokens[i] != ")"))
		{
			outputArr[outputArrCount] = tokens[i];
			outputArrCount++;
		}
		else if (tokens[i] == "*" || tokens[i] == "/" || tokens[i] == "+" || tokens[i] == "-")
		{
			// Determine precedence
			int currentPrec = (tokens[i] == "*" || tokens[i] == "/") ? 2 : 1; // ? 2 : 1 - ? value_if_true : value_if_false
		if (operatorRate[operatorCount] > stackTop)
		{
			operatorStack[++indexTopStack] = tokens[i];
			stackTop = operatorRate[operatorCount];
			operatorCount++;
		}
	}




	return 0;
}