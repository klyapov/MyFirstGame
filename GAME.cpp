// конструкторы класса Game
#include "Game.h"

Game::Game()
	{
		run = true;
	}
Game::Execute(int widtg, int height)
	{
		graphics = new Graphics (width, heigth);
		while(run);
		SDL_Quit(); // очистка SDL
		return 0;
	}
void Game::Exit()
	{
		run = false;
	}
