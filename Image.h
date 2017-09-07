// отрисовка картинок, также придает размер
#ifndef _IMAGE_H_
#define _IMAGE_H_

#include "Project.h"
class Image
	{
		private:
			SDL_Surface* surf;
		public:
			friend class Graphics; // дает право доступа к своим закрытым членам классу Graphics, который изменяет SDL_Surface
			int GetWidth();
			int GetHeight();
	};
	
#endif
