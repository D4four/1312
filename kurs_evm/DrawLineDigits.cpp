#include "includes.h"
void drawlinedigits(int x1, int x2, int y1, int y2)
{
	HWND sHwnd = GetForegroundWindow();
	HDC hdc = GetDC(sHwnd);
	HPEN hPen1;
	hPen1 = CreatePen(PS_SOLID, 1, RGB(0, 255, 0));
	SelectObject(hdc, hPen1);
	MoveToEx(hdc, x1, y1, NULL);
	LineTo(hdc, x2, y2);
	ReleaseDC(sHwnd, hdc);
}