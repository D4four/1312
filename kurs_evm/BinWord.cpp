#include "includes.h"

void binword(int xnach, int xend)
{
	int x1, x2;
	x1 = xnach, x2 = x1;
	int y1, y2;
	int xdif = xend - x2;
	y1 = 160, y2 = y1, x2 += 10, y2 += 20;
	drawline(x1, x2, y1, y2);
	x1 = x2, y1 = y2, x2 = xend, x2 -= 10;
	drawline(x1, x2, y1, y2);
	x1 = x2, x2 += 10, y2 -= 20;
	drawline(x1, x2, y1, y2);
	x1 = x2, y1 = y2, x2 -= 10, y2 -= 20;
	drawline(x1, x2, y1, y2);
	x1 = x2, y1 = y2, x2 -= xdif, x2 += 20;
	drawline(x1, x2, y1, y2);
	x1 = x2, x2 -= 10, y2 += 20;
	drawline(x1, x2, y1, y2);
}