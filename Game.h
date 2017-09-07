// "каркас" игры, фреймворк
#ifndef _GAME_H_
#define _GAME_H_
#include "Project.h"

class Graphics;
class Game
	{
		private:
			bool run;
			Graphics* graphics;
		public:
			Game();
			int Execute(int width, int height); // размер экрана
			void Exit();
	};

#endif
