// конструкторы класса Graphics
#include <Graphics.h>

Graphics::Graphics (int width, int height) // инициализация SDL и создание экрана
	{
		SDL_Init (SDL_INIT_EVERYTHING);
		Screen = SDL_SetVideo_Mode (width, height, 32, SDL_HWSURFACE|SDL_DOUBLEBUF);
		
	}
Image* Graphics::NewImage (char* file)
	{
		Image* image = new Image();
		image -> surf = SDL_DisplayFormat (SDL_LoadBMP(file));
		return image;
	}
Image* Graphics::NewImage(char* file, int r, int g, int b)
	{
		Image* image = new Image();
		image -> surf = SDL_DisplayFormat (SDL_LoadBMP(file));
		SDL_SetColorKey (image -> surf, SDL_SRCCOLORKEY | SDL_RLEACCEL, SDL_MapRGB (image -> surf -> format, r, g, b));
		return image;		
	}
bool Graphics::DrawImage(Image* img, int x, int y)
	{
		if (Screen == NULL || img - > surf == NULL)
			{
				return false;
			}
		SDL_Rect Area;
		Area.x = x;
		Area.y = y;
		SDL_BlitSurface (img -> surf, NULL, Screen, &Area);
		return true;
	} 
bool Graphics::DrawImage(Image* img, int x, int y, int startX, int startY, int endX, int endY)
	{
		if (Screen == NULL || img -> surf == NULL)
			{
				return false;
			}
		SDL_Rect Area;
		Area.x = x;
		Area.y = y;
		SDL_Rect SrcAREA;
		SrcArea.x = startX;
		ScrArea.y = startY;
		ScrArea.w = endX;
		ScrArea.h = endY;
		SDL_BlitSurface (img -> surf, %SrcArea, Screen, $Area);
		return true;
	}
void Graphics::Flip() // показывает отрисованную картинку и чистит экран в черный цвет для дальнейшей отрисовки
	{
		SDL_Flip(Screen);
		SDL_FillRect (Screen, Null, 0x000000);
	}
 

