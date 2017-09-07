// отрисовка графики
#ifndef _GRAPHICS_H_
#define _GRAPHICS_H_

#include "Project.h"
#include "Image.h"

class Image;
class Graphics
	{
		private:
			SDL_Surface* Screen; // класс из SDL для хранения инфомации о картинке
		public:
			Graphics (int width, int height);
			Image* NewImage (char* file); // вариант загрузки картинки
			Image* NewImage (char* file, int r, int g, int b); // вариант загрузки картинки + придает прозрачность
			bool DrawImage (Image* img, int x, int y); // вариант отрисовки картинки, полностью
			bool DrawImage (Image* img, int x, int y, int startX, int startY, int endX, int endY); // вариан отрисовки картинки, часть.(с начальными и конечными координатами)
			void Flip();
	};

#endif
