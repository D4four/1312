#include "includes.h"
void clk() {
	int x1, x2, y1, y2;
	x1 = 60, x2 = 80, y1 = 40, y2 = 40;
	drawline(x1, x2, y1, y2);
	for (int i = 0; i < 64; i++)
	{
		x1 = x2, x2 += 10, y1 = y2, y2 -= 20;
		drawline(x1, x2, y1, y2);
		x1 = x2, x2 += 10, y1 = y2;
		drawline(x1, x2, y1, y2);
		x1 = x2, x2 += 10, y1 = y2, y2 += 20;
		drawline(x1, x2, y1, y2);
		x1 = x2, x2 += 10, y1 = y2;
		drawline(x1, x2, y1, y2);
	}
}