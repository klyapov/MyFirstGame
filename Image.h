// ��������� ��������, ����� ������� ������
#ifndef _IMAGE_H_
#define _IMAGE_H_

#include "Project.h"
class Image
	{
		private:
			SDL_Surface* surf;
		public:
			friend class Graphics; // ���� ����� ������� � ����� �������� ������ ������ Graphics, ������� �������� SDL_Surface
			int GetWidth();
			int GetHeight();
	};
	
#endif
