#include "includes.h"

void ugolok(int x1, int x2, int y1, int y2, int xnach)
{
	drawline(x1, x2, y1, y2);
	x1 = x2, y2 -= 20, x2 += 10;
	binword(xnach, x2);
	drawline(x1, x2, y1, y2);
	x1 = x2, y1 = y2, y2 -= 20, x2 -= 10;
	drawline(x1, x2, y1, y2);
}