#include "includes.h"

int TRDY(int op, int bin, int xend, int time, int xbuff)
{
	int ybuff, x1, x2, y1, y2;
	ybuff = 260, y1 = ybuff, y2 = y1;
	x1 = xend, x2 = x1;
	x2 -= 10, y2 += 20;
	drawline(x1, x2, y1, y2);
	x1 = x2, y1 = y2, x2 -= 20;
	drawline(x1, x2, y1, y2);
	x1 = x2, x2 -= 10, y2 -= 20;
	drawline(x1, x2, y1, y2);
	x1 = x2, y1 = y2;
	drawline(x1, xbuff, y1, ybuff);
	xbuff = xend;
	return xbuff;
}