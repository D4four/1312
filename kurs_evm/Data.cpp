#include "includes.h"
int data(int x3, int time, int bit, int op, int k)
{
	int i = 0;
	int digit = 1;
	int x1, x2, y1, y2, xbuff, ybuff = 0;
	x2 = x3, y2 = 110, y1 = y2, x1 = x2;
	int xnach, xend;
	xnach = 0, xend = 0;
	switch (time)
	{
	case 1:// 30ns
		xnach = x1;
		xbuff = 60;
		for (i = 0; i < 6; i++)
		{
			y2 += 20;
			x2 += 10;
			drawline(x1, x2, y1, y2);
			lines(x2, y2, digit);
			digit++;
			y1 = y2;
			x1 = x2;
			if (bit == 1)
			{
				x2 += 20;
				if (i == 0 && (op == 1 || op == 3))
					ugolok(x1, x2, y1, y2, xnach = adress(k, time, bit, op) - 40);
				else
					ugolok(x1, x2, y1, y2, xnach);
				xnach = x2 + 10; x2 += 50;
				binword(xnach, x2);
				x2 -= 10;
			}
			else
			{
				x2 += 30;
				if (i == 0 && (op == 1 || op == 3))
					binword((adress(k, time, bit, op) - 40), x2);
				else
					binword(xnach, x2);
				xnach = x2;
				x2 -= 10;
			}

			drawline(x1, x2, y1, y2);
			x1 = x2;
			y2 -= 20;
			x2 += 10;
			xnach = x2;
			xbuff = TRDY(op, bit, x2, time, xbuff);
			drawline(x1, x2, y1, y2);
			x1 = x2;
			y1 = y2;
			if (i == 4)
				frame(x2);
		}
		xend = x2;
		x2 += 300;
		drawline(x1, x2, y1, y2);
		y1 = 260, y2 = 260;
		drawline(x1, x2, y1, y2);
		y1 = 100, y2 = 110;
		x2 = x1;
		for (i; i > 0; i--)
		{
			x1 = x2;
			y1 = y2;
			x2 -= 10;
			y2 -= 20;
			drawline(x1, x2, y1, y2);
			x1 = x2;
			y1 = y2;
			if (bit == 1)
				x2 -= 60;
			else
				x2 -= 20;
			drawline(x1, x2, y1, y2);
			x1 = x2;
			y1 = y2;
			x2 -= 10;
			y2 += 20;
			drawline(x1, x2, y1, y2);

		}
		break;
	case 2://70 ns
		xnach = x1;
		xbuff = 60;
		for (i = 0; i < 6; i++)
		{
			y2 += 20;
			x2 += 10;
			drawline(x1, x2, y1, y2);
			lines(x2, y2, digit);
			digit++;
			y1 = y2;
			x1 = x2;
			if (bit == 1)
			{
				x2 += 100;//220
				if (i == 0 && (op == 1 || op == 3))
					ugolok(x1, x2, y1, y2, adress(k, time, bit, op) - 40);
				else
					ugolok(x1, x2, y1, y2, xnach);
				xnach = x2 + 10, x2 += 130;
				binword(xnach, x2);
				xnach = x2;
				x2 -= 10;
			}
			else
			{
				x2 += 110;
				if (i == 0 && (op == 1 || op == 3))
					binword((adress(k, time, bit, op) - 40), x2);
				else
					binword(xnach, x2);
				xnach = x2, x2 -= 10;
			}
			drawline(x1, x2, y1, y2);
			x1 = x2;
			y2 -= 20;
			x2 += 10;
			xnach = x2;
			xbuff = TRDY(op, bit, x2, time, xbuff);
			drawline(x1, x2, y1, y2);
			x1 = x2;
			y1 = y2;
			if (i == 4)
				frame(x2);
		}
		xend = x2;
		x2 = x1;
		for (i; i > 0; i--)
		{
			x1 = x2;
			y1 = y2;
			x2 -= 10;
			y2 -= 20;
			drawline(x1, x2, y1, y2);
			x1 = x2;
			y1 = y2;
			if (bit == 1)
				x2 -= 220;
			else
				x2 -= 100;
			drawline(x1, x2, y1, y2);
			x1 = x2;
			y1 = y2;
			x2 -= 10;
			y2 += 20;
			drawline(x1, x2, y1, y2);
		}
		break;
	case 3://100 ns
		xnach = x1;
		xbuff = 60;
		for (i = 0; i < 6; i++)
		{
			y2 += 20;
			x2 += 10;
			drawline(x1, x2, y1, y2);
			lines(x2, y2, digit);
			digit++;
			y1 = y2;
			x1 = x2;
			if (bit == 1)
			{
				x2 += 140;//310
				if (i == 0 && (op == 1 || op == 3))
					ugolok(x1, x2, y1, y2, adress(k, time, bit, op) - 40);
				else
					ugolok(x1, x2, y1, y2, xnach);
				xnach = x2 + 10, x2 += 180;
				binword(xnach, x2);
				xnach = x2;
				x2 -= 10;
			}
			else
			{
				x2 += 150;
				if (i == 0 && (op == 1 || op == 3))
					binword((adress(k, time, bit, op) - 40), x2);
				else
					binword(xnach, x2);
				xnach = x2; x2 -= 10;
			}
			drawline(x1, x2, y1, y2);
			x1 = x2, y2 -= 20, x2 += 10;
			drawline(x1, x2, y1, y2);
			x1 = x2;
			y1 = y2;
			if (i == 4)
				frame(x2);
		}
		xend = x2;
		x2 = x1;
		for (i; i > 0; i--)
		{
			x1 = x2;
			y1 = y2;
			x2 -= 10;
			y2 -= 20;
			drawline(x1, x2, y1, y2);
			x1 = x2;
			y1 = y2;
			if (bit == 1)
				x2 -= 310;
			else
				x2 -= 140;
			drawline(x1, x2, y1, y2);
			x1 = x2;
			y1 = y2;
			x2 -= 10;
			y2 += 20;
			drawline(x1, x2, y1, y2);

		}
		break;
	case 4://200 ns
		xnach = x1;
		xbuff = 60;
		for (i = 0; i < 6; i++)
		{
			y2 += 20;
			x2 += 10;
			lines(x2, y2, digit);
			digit++;
			drawline(x1, x2, y1, y2);
			y1 = y2;
			x1 = x2;
			if (bit == 1)
			{
				x2 += 260;//540
				if (i == 0 && (op == 1 || op == 3))
					ugolok(x1, x2, y1, y2, adress(k, time, bit, op) - 40);
				else
					ugolok(x1, x2, y1, y2, xnach);
				xnach = x2 + 10, x2 += 290;
				binword(xnach, x2);
				xnach = x2, x2 -= 10;
			}
			else//260
			{
				x2 += 270;
				if (i == 0 && (op == 1 || op == 3))
					binword((adress(k, time, bit, op) - 40), x2);
				else
					binword(xnach, x2);
				xnach = x2, x2 -= 10;
			}
			drawline(x1, x2, y1, y2);
			x1 = x2;
			y2 -= 20;
			x2 += 10;
			xnach = x2;
			xbuff = TRDY(op, bit, x2, time, xbuff);
			drawline(x1, x2, y1, y2);
			x1 = x2;
			y1 = y2;
			if (i == 4)
				frame(x2);
		}
		xend = x2;
		x2 = x1;
		for (i; i > 0; i--)
		{
			x1 = x2;
			y1 = y2;
			x2 -= 10;
			y2 -= 20;
			drawline(x1, x2, y1, y2);
			x1 = x2;
			y1 = y2;
			if (bit == 1)
				x2 -= 540;
			else
				x2 -= 260;
			drawline(x1, x2, y1, y2);
			x1 = x2;
			y1 = y2;
			x2 -= 10;
			y2 += 20;
			drawline(x1, x2, y1, y2);

		}
		break;
	case 5://3-1-1-1-3-1 25 ns
	case 6://3-1-1-1-3-1 20 ns
		xnach = x1;
		xbuff = 60;
		//3 takta 1 time
		y2 += 20;
		x2 += 10;
		drawline(x1, x2, y1, y2);
		lines(x2, y2, digit);
		digit++;
		y1 = y2;
		x1 = x2;
		if (bit == 1)
		{
			x2 += 100;
			if (op == 1 || op == 3)
				ugolok(x1, x2, y1, y2, adress(k, time, bit, op) - 40);
			else
				ugolok(x1, x2, y1, y2, xnach);
			xnach = x2 + 10, x2 += 120;
		}
		else
		{
			x2 += 100;
		}
		drawline(x1, x2, y1, y2);
		x1 = x2;
		y2 -= 20;
		x2 += 10;
		binword(xnach, x2);
		xnach = x2;
		xbuff = TRDY(op, bit, x2, time, xbuff);
		drawline(x1, x2, y1, y2);
		x1 = x2;
		y1 = y2;
		//1 takt 3 times
		for (i = 0; i < 3; i++)
		{
			y2 += 20;
			x2 += 10;
			drawline(x1, x2, y1, y2);
			lines(x2, y2, digit);
			digit++;
			y1 = y2;
			x1 = x2;
			if (bit == 1)//60
			{
				x2 += 20;
				ugolok(x1, x2, y1, y2, xnach);
				xnach = x2 + 10, x2 += 50;
				binword(xnach, x2);
				xnach = x2, x2 -= 10;
			}
			else//20
			{
				x2 += 30;
				binword(xnach, x2);
				xnach = x2, x2 -= 10;
			}
			drawline(x1, x2, y1, y2);
			x1 = x2;
			y2 -= 20;
			x2 += 10;
			xbuff = TRDY(op, bit, x2, time, xbuff);
			drawline(x1, x2, y1, y2);
			x1 = x2;
			y1 = y2;
		}
		//3 takts 1 time
		y2 += 20;
		x2 += 10;
		drawline(x1, x2, y1, y2);
		lines(x2, y2, digit);
		digit++;
		y1 = y2;
		x1 = x2;
		if (bit == 1)
		{
			x2 += 100;
			ugolok(x1, x2, y1, y2, xnach);
			xnach = x2 + 10, x2 += 120;
		}
		else
			x2 += 100;
		drawline(x1, x2, y1, y2);
		x1 = x2;
		y2 -= 20;
		x2 += 10;
		binword(xnach, x2);
		xnach = x2;
		xbuff = TRDY(op, bit, x2, time, xbuff);
		drawline(x1, x2, y1, y2);
		x1 = x2;
		y1 = y2;
		frame(x2);
		//1takt 1 time
		y2 += 20;
		x2 += 10;
		drawline(x1, x2, y1, y2);
		lines(x2, y2, digit);
		y1 = y2;
		x1 = x2;
		if (bit == 1)//60
		{
			x2 += 20;
			ugolok(x1, x2, y1, y2, xnach);
			xnach = x2 + 10, x2 += 40;
		}
		else//20
			x2 += 20;
		drawline(x1, x2, y1, y2);
		x1 = x2;
		y1 = y2;
		y2 -= 20;
		x2 += 10;
		binword(xnach, x2);
		xbuff = TRDY(op, bit, x2, time, xbuff);
		drawline(x1, x2, y1, y2);
		x1 = x2;
		y1 = y2;
		xend = x2;
		x2 = x1;
		//обратно последнее слово
		x2 -= 10;
		y2 -= 20;
		drawline(x1, x2, y1, y2);
		x1 = x2;
		y1 = y2;
		if (bit == 1)
			x2 -= 60;
		else
			x2 -= 20;
		drawline(x1, x2, y1, y2);
		x1 = x2;
		y1 = y2;
		x2 -= 10;
		y2 += 20;
		drawline(x1, x2, y1, y2);
		x1 = x2;
		y1 = y2;
		//обратно слово 3 такта
		x2 -= 10;
		y2 -= 20;
		drawline(x1, x2, y1, y2);
		x1 = x2;
		y1 = y2;
		if (bit == 1)
			x2 -= 220;
		else
			x2 -= 100;
		drawline(x1, x2, y1, y2);
		x1 = x2;
		y1 = y2;
		x2 -= 10;
		y2 += 20;
		drawline(x1, x2, y1, y2);
		// обратно 3 слова 1 такт
		for (i; i > 0; i--)
		{
			x1 = x2;
			y1 = y2;
			x2 -= 10;
			y2 -= 20;
			drawline(x1, x2, y1, y2);
			x1 = x2;
			y1 = y2;
			if (bit == 1)
				x2 -= 60;
			else
				x2 -= 20;
			drawline(x1, x2, y1, y2);
			x1 = x2;
			y1 = y2;
			x2 -= 10;
			y2 += 20;
			drawline(x1, x2, y1, y2);
		}
		x1 = x2;
		y1 = y2;
		//обратно слово 3 такта
		x2 -= 10;
		y2 -= 20;
		drawline(x1, x2, y1, y2);
		x1 = x2;
		y1 = y2;
		if (bit == 1)
			x2 -= 220;
		else
			x2 -= 100;
		drawline(x1, x2, y1, y2);
		x1 = x2;
		y1 = y2;
		x2 -= 10;
		y2 += 20;
		drawline(x1, x2, y1, y2);
		break;
	case 7://4-1-4-1-4-1 20 ns
		xnach = x1;
		xbuff = 60;
		for (i = 0; i < 3; i++)
		{
			//4 takta
			y2 += 20;
			x2 += 10;
			drawline(x1, x2, y1, y2);
			lines(x2, y2, digit);
			digit++;
			y1 = y2;
			x1 = x2;
			if (bit == 1)//310
			{
				x2 += 140;
				if (i == 0 && (op == 1 || op == 3))
					ugolok(x1, x2, y1, y2, adress(k, time, bit, op) - 40);
				else
					ugolok(x1, x2, y1, y2, xnach);
				xnach = x2 + 10, x2 += 170;
			}
			else
			{
				x2 += 140;
			}
			drawline(x1, x2, y1, y2);
			x1 = x2;
			y2 -= 20;
			x2 += 10;
			binword(xnach, x2);
			xnach = x2;
			xbuff = TRDY(op, bit, x2, time, xbuff);
			drawline(x1, x2, y1, y2);
			x1 = x2;
			y1 = y2;
			//одик такт
			xnach = x1;
			y2 += 20;
			x2 += 10;
			drawline(x1, x2, y1, y2);
			lines(x2, y2, digit);
			digit++;
			y1 = y2;
			x1 = x2;
			if (bit == 1)//60
			{
				x2 += 20;
				ugolok(x1, x2, y1, y2, xnach);
				xnach = x2 + 10, x2 += 40;
			}
			else
				x2 += 20;
			drawline(x1, x2, y1, y2);
			x1 = x2;
			y2 -= 20;
			x2 += 10;
			binword(xnach, x2);
			xnach = x2;
			xbuff = TRDY(op, bit, x2, time, xbuff);
			drawline(x1, x2, y1, y2);
			x1 = x2;
			y1 = y2;
		}
		xend = x2;
		x2 = x1;
		for (i; i > 0; i--)
		{
			//1 takt
			x1 = x2;
			y1 = y2;
			x2 -= 10;
			y2 -= 20;
			drawline(x1, x2, y1, y2);
			x1 = x2;
			y1 = y2;
			if (bit == 1)
				x2 -= 60;
			else
				x2 -= 20;
			drawline(x1, x2, y1, y2);
			x1 = x2;
			y1 = y2;
			x2 -= 10;
			y2 += 20;
			drawline(x1, x2, y1, y2);
			if (i == 3)
				frame(x2);
			//4 takta
			x1 = x2;
			y1 = y2;
			x2 -= 10;
			y2 -= 20;
			drawline(x1, x2, y1, y2);
			x1 = x2;
			y1 = y2;
			if (bit == 1)
				x2 -= 310;
			else
				x2 -= 140;
			drawline(x1, x2, y1, y2);
			x1 = x2;
			y1 = y2;
			x2 -= 10;
			y2 += 20;
			drawline(x1, x2, y1, y2);
		}
		break;
	case 8://5-2-2-2-5-2 20 ns
		//5 taktov
		xnach = x1;
		xbuff = 60;
		y2 += 20;
		x2 += 10;
		drawline(x1, x2, y1, y2);
		lines(x2, y2, digit);
		digit++;
		y1 = y2;
		x1 = x2;
		if (bit == 1)//300
		{
			x2 += 180;
			if (op == 1 || op == 3)
				ugolok(x1, x2, y1, y2, adress(k, time, bit, op) - 40);
			else
				ugolok(x1, x2, y1, y2, xnach);
			xnach = x2 + 10, x2 += 120;
		}
		else
		{
			x2 += 180;
		}
		drawline(x1, x2, y1, y2);
		x1 = x2;
		y2 -= 20;
		x2 += 10;
		binword(xnach, x2);
		xnach = x2;
		xbuff = TRDY(op, bit, x2, time, xbuff);
		drawline(x1, x2, y1, y2);
		x1 = x2;
		y1 = y2;
		y2 += 20;
		x2 += 10;
		drawline(x1, x2, y1, y2);
		lines(x2, y2, digit);
		//2 takta 3 times
		for (i = 0; i < 3; i++)
		{
			digit++;
			y1 = y2;
			x1 = x2;
			if (bit == 1)
			{
				x2 += 60;
				ugolok(x1, x2, y1, y2, xnach);
				xnach = x2 + 10, x2 += 90;
				binword(xnach, x2);
				xnach = x2, x2 -= 10;
			}
			else
			{
				x2 += 70;
				binword(xnach, x2);
				xnach = x2, x2 -= 10;
			}
			drawline(x1, x2, y1, y2);
			x1 = x2, y1 = y2, y2 -= 20, x2 += 10;
			drawline(x1, x2, y1, y2);
			x1 = x2, y1 = y2, y2 += 20, x2 += 10;
			lines(x2, y2, digit);
			xbuff = TRDY(op, bit, x2, time, xbuff);
			drawline(x1, x2, y1, y2);
		}
		lines(x2, y2, digit);
		digit++;
		//5 taktov 1 times
		xnach = x1;
		y1 = y2;
		x1 = x2;
		if (bit == 1)//300
		{
			x2 += 180;
			ugolok(x1, x2, y1, y2, xnach);
			xnach = x2 + 10, x2 += 120;
		}
		else
			x2 += 180;
		drawline(x1, x2, y1, y2);
		x1 = x2;
		y2 -= 20;
		x2 += 10;
		binword(xnach, x2);
		xnach = x2;
		frame(x2);
		xbuff = TRDY(op, bit, x2, time, xbuff);
		drawline(x1, x2, y1, y2);
		x1 = x2;
		y1 = y2;
		y2 += 20;
		x2 += 10;
		drawline(x1, x2, y1, y2);
		lines(x2, y2, digit);
		//2 takta 1 times
		y1 = y2;
		x1 = x2;
		if (bit == 1)//140
		{
			x2 += 60;
			ugolok(x1, x2, y1, y2, xnach);
			xnach = x2 + 10, x2 += 80;
		}
		else
			x2 += 60;
		drawline(x1, x2, y1, y2);
		x1 = x2;
		y1 = y2;
		y2 -= 20;
		x2 += 10;
		binword(xnach, x2);
		xbuff = TRDY(op, bit, x2, time, xbuff);
		drawline(x1, x2, y1, y2);
		x1 = x2;
		y1 = y2;
		xend = x2;
		//obratno 2 takta 1 times
		x2 = x1;
		x2 -= 10;
		y2 -= 20;
		drawline(x1, x2, y1, y2);
		x1 = x2;
		y1 = y2;
		if (bit == 1)
			x2 -= 140;
		else
			x2 -= 60;
		drawline(x1, x2, y1, y2);
		x1 = x2;
		y1 = y2;
		x2 -= 10;
		y2 += 20;
		drawline(x1, x2, y1, y2);
		//obranto 5 taktov 1 times
		x1 = x2;
		y1 = y2;
		y2 -= 20;
		x2 -= 10;
		drawline(x1, x2, y1, y2);
		x1 = x2;
		y1 = y2;
		if (bit == 1)
			x2 -= 300;
		else
			x2 -= 180;
		drawline(x1, x2, y1, y2);
		x1 = x2;
		y1 = y2;
		x2 -= 10;
		y2 += 20;
		drawline(x1, x2, y1, y2);
		//obratno 2 takta 3 times
		for (i; i > 0; i--)
		{
			x1 = x2;
			y1 = y2;
			y2 -= 20;
			x2 -= 10;
			drawline(x1, x2, y1, y2);
			x1 = x2;
			y1 = y2;
			if (bit == 1)
				x2 -= 140;
			else
				x2 -= 60;
			drawline(x1, x2, y1, y2);
			x1 = x2;
			y1 = y2;
			x2 -= 10;
			y2 += 20;
			drawline(x1, x2, y1, y2);
		}
		//obratno 5 taktov 1 times
		x1 = x2;
		y1 = y2;
		y2 -= 20;
		x2 -= 10;
		drawline(x1, x2, y1, y2);
		x1 = x2;
		y1 = y2;
		if (bit == 1)
			x2 -= 300;
		else
			x2 -= 180;
		drawline(x1, x2, y1, y2);
		x1 = x2;
		y1 = y2;
		x2 -= 10;
		y2 += 20;
		drawline(x1, x2, y1, y2);
		break;
	case 9:
		//3 takta 1 time
		xnach = x1;
		xbuff = 60;
		y2 += 20;
		x2 += 10;
		drawline(x1, x2, y1, y2);
		lines(x2, y2, digit);
		digit++;
		y1 = y2;
		x1 = x2;
		if (bit == 1)
		{
			x2 += 100;
			if (op == 1 || op == 3)
				ugolok(x1, x2, y1, y2, adress(k, time, bit, op) - 40);
			else
				ugolok(x1, x2, y1, y2, xnach);
			xnach = x2 + 10, x2 += 120;
		}
		else
		{
			x2 += 100;
			if (op == 1 || op == 3)
				binword((adress(k, time, bit, op) - 40), x2);
		}
		drawline(x1, x2, y1, y2);
		x1 = x2, y1 = y2;
		y2 -= 20;
		x2 += 10;
		binword(xnach, x2);
		xnach = x2;
		xbuff = TRDY(op, bit, x2, time, xbuff);
		drawline(x1, x2, y1, y2);
		x1 = x2;
		y1 = y2;
		y2 += 20;
		x2 += 10;
		drawline(x1, x2, y1, y2);
		lines(x2, y2, digit);
		//2 takta 3 times
		for (i = 0; i < 3; i++)
		{
			digit++;
			y1 = y2;
			x1 = x2;
			if (bit == 1)
			{
				x2 += 60;
				ugolok(x1, x2, y1, y2, xnach);
				xnach = x2 + 10, x2 += 90;
				binword(xnach, x2);
				xnach = x2;
				x2 -= 10;
			}
			else
			{
				x2 += 70;
				binword(xnach, x2);
				xnach = x2;
				x2 -= 10;
			}
			drawline(x1, x2, y1, y2);
			x1 = x2;
			y1 = y2;
			y2 -= 20;
			x2 += 10;
			drawline(x1, x2, y1, y2);
			x1 = x2;
			y1 = y2;
			y2 += 20;
			x2 += 10;
			xbuff = TRDY(op, bit, x2, time, xbuff);
			drawline(x1, x2, y1, y2);
			lines(x2, y2, digit);
		}
		//3 takta 1 times
		xnach = x1;
		x1 = x2;
		y1 = y2;
		lines(x2, y2, digit);
		digit++;
		if (bit == 1)
		{
			x2 += 100,
				ugolok(x1, x2, y1, y2, xnach);
			xnach = x2 + 10, x2 += 120;
		}
		else
			x2 += 100;
		drawline(x1, x2, y1, y2);
		x1 = x2;
		y2 -= 20;
		x2 += 10;
		drawline(x1, x2, y1, y2);
		xbuff = TRDY(op, bit, x2, time, xbuff);
		binword(xnach, x2);
		frame(x2);
		x1 = x2;
		xnach = x1;
		y1 = y2;
		//2 takta 1 time
		y2 += 20;
		x2 += 10;
		drawline(x1, x2, y1, y2);
		lines(x2, y2, digit);
		digit++;
		y1 = y2;
		x1 = x2;
		if (bit == 1)
		{
			x2 += 60;
			ugolok(x1, x2, y1, y2, xnach);
			xnach = x2 + 10, x2 += 80;
		}
		else
			x2 += 60;
		drawline(x1, x2, y1, y2);
		x1 = x2;
		y1 = y2;
		y2 -= 20;
		x2 += 10;
		binword(xnach, x2);
		xbuff = TRDY(op, bit, x2, time, xbuff);
		drawline(x1, x2, y1, y2);
		x1 = x2;
		y1 = y2;
		xend = x2;
		//obratno 2 takta 1 time
		x2 = x1;
		x2 -= 10;
		y2 -= 20;
		drawline(x1, x2, y1, y2);
		x1 = x2;
		y1 = y2;
		if (bit == 1)
			x2 -= 140;
		else
			x2 -= 60;
		drawline(x1, x2, y1, y2);
		x1 = x2;
		y1 = y2;
		x2 -= 10;
		y2 += 20;
		drawline(x1, x2, y1, y2);
		//obratno 3takta 1 time
		x1 = x2;
		y1 = y2;
		x2 -= 10;
		y2 -= 20;
		drawline(x1, x2, y1, y2);
		x1 = x2;
		y1 = y2;
		if (bit == 1)
			x2 -= 220;
		else
			x2 -= 100;
		drawline(x1, x2, y1, y2);
		x1 = x2;
		y1 = y2;
		x2 -= 10;
		y2 += 20;
		drawline(x1, x2, y1, y2);
		//obratno 2 takta 3 times
		for (i; i > 0; i--)
		{
			x1 = x2;
			y1 = y2;
			y2 -= 20;
			x2 -= 10;
			drawline(x1, x2, y1, y2);
			x1 = x2;
			y1 = y2;
			if (bit == 1)
				x2 -= 140;
			else
				x2 -= 60;
			drawline(x1, x2, y1, y2);
			x1 = x2;
			y1 = y2;
			x2 -= 10;
			y2 += 20;
			drawline(x1, x2, y1, y2);
		}
		x1 = x2;
		y1 = y2;
		x2 -= 10;
		y2 -= 20;
		drawline(x1, x2, y1, y2);
		x1 = x2;
		y1 = y2;
		if (bit == 1)
			x2 -= 220;
		else
			x2 -= 100;
		drawline(x1, x2, y1, y2);
		x1 = x2;
		y1 = y2;
		x2 -= 10;
		y2 += 20;
		drawline(x1, x2, y1, y2);

		break;
	}
	return (xend);
}