#include "Project.h"

// �������, ������������ ����� �����. HISTANCE - ����������(��������) �������� ���������� ����, HISTANCE - ���������� ����������� ���������� ����,
// LPSTR - ��������� �� ��������� ������, int - ���������� ��������� ����
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) 
	{
		Game game; // ������� ������ ������ Game
		return game.Execute(500, 350); // ������� ����� 
		return 0;
	}
