#include "includes.h"

void frame(int x2) {
	int x3, x4, y3, y4;
	x3 = 60, x4 = 100, y3 = 60, y4 = 60;
	drawline(x3, x4, y3, y4);
	x3 = x4, y4 += 20, x4 += 10;
	drawline(x3, x4, y3, y4);
	y3 = y4, x3 = x4, x4 = x2, x4 -= 10;
	drawline(x3, x4, y3, y4);
	x3 = x4, y4 -= 20, x4 += 10;
	drawline(x3, x4, y3, y4);
	y3 = y4, x3 = x4, x4 += 2000;
	drawline(x3, x4, y3, y4);
}