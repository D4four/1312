#include "includes.h"

int codeop(int xnach, int op, int k)
{
	//написание кода операции
	int x1, x2;
	int y1, y2;
	y1 = 160, y2 = y1;
	if (op == 1 || op == 3)
	{
		x2 = xnach - 40;
		if (k == 2)
		{
			x2 -= 30;
			if (op == 1)
			{
				drawlineCBE(x2 - 5, x2 + 5, 160, 160);
				drawlineCBE(x2 + 6, x2 + 6, 180, 140);
				drawlineCBE(x2 + 12, x2 + 12, 180, 140);
				drawlineCBE(x2 + 13, x2 + 23, 160, 160);
			}
			else if (op == 2)
			{
				drawlineCBE(x2 - 5, x2 + 5, 160, 160);
				drawlineCBE(x2 + 6, x2 + 6, 180, 140);
				drawlineCBE(x2 + 12, x2 + 12, 180, 140);
				drawlineCBE(x2 + 13, x2 + 13, 180, 140);
			}
			else if (op == 3)
			{
				drawlineCBE(x2 - 5, x2 + 5, 160, 160);
				drawlineCBE(x2 + 6, x2 + 6, 180, 140);
				drawlineCBE(x2 + 12, x2 + 12, 180, 140);
				drawlineCBE(x2 + 13, x2 + 13, 180, 140);
			}
			else if (op == 4)
			{
				drawlineCBE(x2 - 5, x2 + 5, 160, 160);
				drawlineCBE(x2 + 6, x2 + 6, 180, 140);
				drawlineCBE(x2 + 12, x2 + 12, 180, 140);
				drawlineCBE(x2 + 13, x2 + 13, 180, 140);
			}
			x2 -= 10;
			romb(x2, y2, 1);
			x2 -= 30;
			if (op == 1)
			{
				drawlineCBE(x2 - 5, x2 + 5, 160, 160);
				drawlineCBE(x2 + 6, x2 + 6, 180, 140);
				drawlineCBE(x2 + 12, x2 + 12, 180, 140);
				drawlineCBE(x2 + 13, x2 + 23, 160, 160);
			}
			else if (op == 2)
			{
				drawlineCBE(x2 - 5, x2 + 5, 160, 160);
				drawlineCBE(x2 + 6, x2 + 6, 180, 140);
				drawlineCBE(x2 + 12, x2 + 12, 180, 140);
				drawlineCBE(x2 + 18, x2 + 18, 180, 140);
			}
			else if (op == 3)
			{
				drawlineCBE(x2 - 5, x2 + 5, 160, 160);
				drawlineCBE(x2 + 7, x2 + 17, 160, 160);
				drawlineCBE(x2 + 19, x2 + 19, 140, 180);
				drawlineCBE(x2 + 21, x2 + 30, 160, 160);
			}
			else if (op == 4)
			{
				drawlineCBE(x2 - 5, x2 + 5, 160, 160);
				drawlineCBE(x2 + 7, x2 + 17, 160, 160);
				drawlineCBE(x2 + 19, x2 + 19, 140, 180);
				drawlineCBE(x2 + 20, x2 + 20, 180, 140);
			}
			x2 -= 10;
			romb(x2, y2, 1);
		}
		else
			x2 -= 40;
	}
	else
		if (k == 2)
		{
			x2 = xnach - 30;
			if (op == 1)
			{
				drawlineCBE(x2 - 5, x2 + 5, 160, 160);
				drawlineCBE(x2 + 6, x2 + 6, 180, 140);
				drawlineCBE(x2 + 12, x2 + 12, 180, 140);
				drawlineCBE(x2 + 13, x2 + 23, 160, 160);
			}
			else if (op == 2)
			{
				drawlineCBE(x2 - 5, x2 + 5, 160, 160);
				drawlineCBE(x2 + 6, x2 + 6, 180, 140);
				drawlineCBE(x2 + 12, x2 + 12, 180, 140);
				drawlineCBE(x2 + 18, x2 + 18, 180, 140);
			}
			else if (op == 3)
			{
				drawlineCBE(x2 - 5, x2 + 5, 160, 160);
				drawlineCBE(x2 + 7, x2 + 17, 160, 160);
				drawlineCBE(x2 + 19, x2 + 19, 140, 180);
				drawlineCBE(x2 + 21, x2 + 30, 160, 160);
			}
			else if (op == 4)
			{
				drawlineCBE(x2 - 5, x2 + 5, 160, 160);
				drawlineCBE(x2 + 7, x2 + 17, 160, 160);
				drawlineCBE(x2 + 19, x2 + 19, 140, 180);
				drawlineCBE(x2 + 20, x2 + 20, 180, 140);
			}
			x2 -= 10;
			romb(x2, y2, 1);
			x2 -= 30;
			if (op == 1)
			{
				drawlineCBE(x2 - 5, x2 + 5, 160, 160);
				drawlineCBE(x2 + 6, x2 + 6, 180, 140);
				drawlineCBE(x2 + 12, x2 + 12, 180, 140);
				drawlineCBE(x2 + 13, x2 + 23, 160, 160);
			}
			else if (op == 2)
			{
				drawlineCBE(x2 - 5, x2 + 5, 160, 160);
				drawlineCBE(x2 + 6, x2 + 6, 180, 140);
				drawlineCBE(x2 + 12, x2 + 12, 180, 140);
				drawlineCBE(x2 + 18, x2 + 18, 180, 140);
			}
			else if (op == 3)
			{
				drawlineCBE(x2 - 5, x2 + 5, 160, 160);
				drawlineCBE(x2 + 7, x2 + 17, 160, 160);
				drawlineCBE(x2 + 19, x2 + 19, 140, 180);
				drawlineCBE(x2 + 21, x2 + 30, 160, 160);
			}
			else if (op == 4)
			{
				drawlineCBE(x2 - 5, x2 + 5, 160, 160);
				drawlineCBE(x2 + 7, x2 + 17, 160, 160);
				drawlineCBE(x2 + 19, x2 + 19, 140, 180);
				drawlineCBE(x2 + 20, x2 + 20, 180, 140);
			}
			x2 -= 10;
			romb(x2, y2, 1);
		}
		else
		{
			x2 = xnach - 30;
			if (op == 1)
			{
				drawlineCBE(x2 - 5, x2 + 5, 160, 160);
				drawlineCBE(x2 + 6, x2 + 6, 180, 140);
				drawlineCBE(x2 + 12, x2 + 12, 180, 140);
				drawlineCBE(x2 + 13, x2 + 23, 160, 160);
			}
			else if (op == 2)
			{
				drawlineCBE(x2 - 5, x2 + 5, 160, 160);
				drawlineCBE(x2 + 6, x2 + 6, 180, 140);
				drawlineCBE(x2 + 12, x2 + 12, 180, 140);
				drawlineCBE(x2 + 18, x2 + 18, 180, 140);
			}
			else if (op == 3)
			{
				drawlineCBE(x2 - 5, x2 + 5, 160, 160);
				drawlineCBE(x2 + 7, x2 + 17, 160, 160);
				drawlineCBE(x2 + 19, x2 + 19, 140, 180);
				drawlineCBE(x2 + 21, x2 + 30, 160, 160);
			}
			else if (op == 4)
			{
				drawlineCBE(x2 - 5, x2 + 5, 160, 160);
				drawlineCBE(x2 + 7, x2 + 17, 160, 160);
				drawlineCBE(x2 + 19, x2 + 19, 140, 180);
				drawlineCBE(x2 + 20, x2 + 20, 180, 140);
			}
			x2 -= 10;
		}
	x1 = 60;
	int X = 0;
	int Y = 0;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD cor = { 0,0 };
	cor.X = X;
	cor.Y = Y;
	SetConsoleCursorPosition(hConsole, cor);
	switch (op)
	{
	case 1:
		cout << "0110";
		break;
	case 2:
		cout << "0111";
		break;
	case 3:
		cout << "0010";
		break;
	case 4:
		cout << "0011";
		break;
	}
	drawline(x1, x2, y1, y2);
	romb(x2, y2, 1);
	romb(x2, y2, 1);
	return romb(x2, y2, 1);
}