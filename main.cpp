#include "Project.h"

// функци€, определ€юща€ точку входа. HISTANCE - дескриптор(описание) текущего экземпл€ра окна, HISTANCE - дескриптор предыдущего экземпл€ра окна,
// LPSTR - указатель на командную строку, int - показывает состо€ние окна
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) 
	{
		Game game; // создаем объект класса Game
		return game.Execute(500, 350); // создаем экран 
		return 0;
	}
