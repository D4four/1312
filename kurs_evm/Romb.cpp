#include "includes.h"
int romb(int x2, int y2, int k)
{
	int x1 = x2;
	int y1 = y2;
	y2 += 20, x2 += 10;
	drawline(x1, x2, y1, y2);
	x1 = x2, y1 = y2;
	if (k == 2)
		x2 += 60;
	else
		x2 += 20;
	drawline(x1, x2, y1, y2);
	x1 = x2, y2 -= 20, x2 += 10;
	drawline(x1, x2, y1, y2);
	x1 = x2;
	int x3 = x2;
	y1 = y2, x2 -= 10, y2 -= 20;
	drawline(x1, x2, y1, y2);
	x1 = x2, y1 = y2;
	if (k == 2)
		x2 -= 60;
	else
		x2 -= 20;
	drawline(x1, x2, y1, y2);
	x1 = x2, y1 = y2, x2 -= 10, y2 += 20;
	drawline(x1, x2, y1, y2);
	return x3;
}