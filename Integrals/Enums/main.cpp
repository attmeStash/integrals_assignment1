#include <iostream>
#include <cstdint>



enum class GameState
{
	Menu,
	Playing,
	Paused,
	GameOver,
};

int main()
{
	/*int input;
	std::cin >> input;
	while ((input < 0) || (input > 2))
	{
		std::cin >> input;
	}*/

	
	
	while (true)
	{
		int input;
		std::cin >> input;

		GameState state = static_cast<GameState>(input);
		
		switch (state)
		{
		case GameState::Menu:
			std::cout << "You are in the main menu \n";
			break;
		case GameState::Playing:
			std::cout << "You are playing \n";
			break;
		case GameState::Paused:
			std::cout << "Game is paused \n";
			break;
		case GameState::GameOver:
			std::cout << "Game is over \n";
			break;
		default:
			break;
		}
	}
}