#include "includes.h"
void task3(int k, int time, int bit, int op) {/*{adress();data();}*/
	int xnach = adress(k, time, bit, op);
	int xend = data(xnach, time, bit, op, k);
	codeop(xnach, op, k);
	IRDY(xnach, xend, k);
	devsel(xnach, xend, op);
	endline(xend);
	_getch();
}