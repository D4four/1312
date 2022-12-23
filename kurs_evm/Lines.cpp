#include "includes.h"


void lines(int x1, int y1, int digit) {
	int x2, y2;
	x2 = x1, y2 = y1 - 40;
	switch (digit)
	{
	case 1:
		drawlinedigits(x1, x2, y1, y2);
		break;
	case 2:
		drawlinedigits(x1, x2, y1, y2);
		x1 += 10, x2 = x1;
		drawlinedigits(x1, x2, y1, y2);
		break;
	case 3:
		drawlinedigits(x1, x2, y1, y2);
		x1 += 10, x2 = x1;
		drawlinedigits(x1, x2, y1, y2);
		x1 += 10, x2 = x1;
		drawlinedigits(x1, x2, y1, y2);
		break;
	case 4:
		drawlinedigits(x1, x2, y1, y2);
		x1 += 10;
		drawlinedigits(x2, x1, y2, y1);
		x2 += 20;
		drawlinedigits(x1, x2, y1, y2);
		break;
	case 5:
		x1 += 10;
		drawlinedigits(x2, x1, y2, y1);
		x2 += 20;
		drawlinedigits(x1, x2, y1, y2);
		break;
	case 6:
		x1 += 10;
		drawlinedigits(x2, x1, y2, y1);
		x2 += 20;
		drawlinedigits(x1, x2, y1, y2);
		x1 = x2;
		drawlinedigits(x2, x1, y2, y1);
		break;
	}
}