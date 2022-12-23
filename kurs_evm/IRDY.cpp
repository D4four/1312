#include "includes.h"

void IRDY(int xnach, int xend, int k)
{
	int x1, x2, y1, y2;
	x1 = 60;
	if (k == 1)
		x2 = xnach - 10;
	else
		x2 = xnach - 50;
	y1 = 210, y2 = y1;
	drawline(x1, x2, y1, y2);
	x1 = x2, y1 = y2;
	x2 += 10, y2 += 20;
	drawline(x1, x2, y1, y2);
	x1 = x2, y1 = y2;
	x2 = xend - 10;
	drawline(x1, x2, y1, y2);
	x1 = x2;
	x2 += 10, y2 -= 20;
	drawline(x1, x2, y1, y2);
	x1 = x2, y1 = y2;
	x2 += 300;
	drawline(x1, x2, y1, y2);
}