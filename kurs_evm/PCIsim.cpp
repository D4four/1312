#include "includes.h"

void pcisim(int speed, int bitting, int type, int amount) {
	auto t1 = chrono::high_resolution_clock::now();
	int cnt, x, var, i, sum;
	i = 0, sum = 0;
	bool clk, adr, irdy, trdy, devs, com;
	adr = false, irdy = false, trdy = false;
	cout << "Характеристики шины: Частота шины ";
	switch (type)
	{
	case 1:
		var = sizeof(char);
		break;
	case 2:
		var = sizeof(short);
		break;
	case 3:
		var = sizeof(int);
		break;
	case 4:
		var = sizeof(long long);
		break;
	}
	switch (speed)
	{
	case 1:
		cnt = 26;
		cout << "33MHZ; Раpрядность 32-bit" << endl;
		break;
	case 2:
		cnt = 10;
		cout << "33/66 MHZ; Раpрядность32/64-bit" << endl;
		break;
	case 3:
		cnt = 6;
		cout << "64MHZ; Раpрядность 64-bit" << endl;
		break;
	}
	int datas = amount / cnt;
	while (cnt > 0)
	{
		if (i % 2 == 0)
			clk = true;
		else
			clk = false;
		if (clk == true && adr == false)
		{
			adr = true;
			i++;
		}
		else
			irdy = true, trdy = true, devs = true, com = true;
		if (irdy == true && trdy == true && devs == true && com == true && clk == true)
		{
			x = var * datas;
			sum += x;
			i++;
			cnt--;
		}
		else
		{
			cnt--;
			i++;
		}
	}
	auto t2 = chrono::high_resolution_clock::now();
	auto duration = chrono::duration_cast<chrono::microseconds>(t2 - t1).count();
	cout.precision(2);
	cout << "Шина обработала " << x << " байт за " << duration << " микросекунд." << endl;
}