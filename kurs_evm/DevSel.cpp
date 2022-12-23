#include "includes.h"

void devsel(int xnach, int xend, int op)
{
	int x1 = 60; int y1 = 310; int y2 = 330; int x2 = xend;
	if (op == 1 || op == 3)
	{
		drawline(x1, xnach - 50, y1, y1);
		x1 = xnach - 50;
		drawline(x1, xnach - 40, y1, y2);
		x1 = xnach - 40;
	}
	else
	{
		drawline(x1, xnach - 10, y1, y1);
		x1 = xnach - 10;
		drawline(x1, xnach, y1, y2);
		x1 = xnach;
	}
	drawline(x1, x2 - 10, y2, y2);
	drawline(x2 - 10, x2, y2, y1);
	drawline(x2, x2 + 300, y1, y1);
}