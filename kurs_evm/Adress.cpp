#include "includes.h"

int adress(int k, int time, int bit, int op) {
	int x1, x2, y1, y2;
	x1 = 60;
	x2 = 110;
	y1 = 110;
	y2 = 110;
	drawline(x1, x2, y1, y2);
	//drowing A
	drawlinedigits(x2 + 10, x2 + 15, 130, 90);//1.25
	drawlinedigits(x2 + 15, x2 + 20, 90, 130);
	drawlinedigits(x2 + 12.5, x2 + 17.5, 110, 110);
	//drowing D
	drawlinedigits(x2 + 20, x2 + 20, 90, 130);
	drawlinedigits(x2 + 20, x2 + 30, 130, 110);
	drawlinedigits(x2 + 30, x2 + 20, 110, 90);
	//
	int a = 0;
	if (op == 1 || op == 3)
	{
		a = romb(x2, y2, k) + 40;
		drawline((a - 40), a, y1, y2);
	}
	else
		a = romb(x2, y2, k);
	return a;
}