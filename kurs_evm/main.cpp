#include "includes.h"

int main()
{
	int k, time, bit, op;
	setlocale(LC_ALL, "Russian");
	int choose;
	do {
		system("cls");
		cout << "¬ведите номер задани€" << endl;
		cin >> choose;
		switch (choose)
		{
		case 1:
			system("cls");
			int amnt;
			cout << "¬ведите количество данных";
			cin >> amnt;
			system("cls");
			task1(amnt);
			_getch();
			break;
		case 2:
			system("cls");
			task2();
			break;
		case 3:
			system("cls");
			menufor3task(1);
			cin >> op;
			system("cls");
			menufor3task(2);
			cin >> k;
			system("cls");
			menufor3task(3);
			cin >> bit;
			system("cls");
			menufor3task(4);
			cin >> time;
			system("cls");
			cout << "\n" << "CLK";
			cout << "\n\n" << "frame";
			cout << "\n\n" << "AD";
			cout << "\n\n\n" << "C/BE#";
			cout << "\n\n" << "IRDY#";
			cout << "\n\n\n" << "TRDY#";
			cout << "\n\n" << "Devsel";
			clk();
			int x1 = 63, y1 = 0;
			drawline(x1, x1, y1, y1 + 600);
			task3(k, time, bit, op);
			_getch();
			system("cls");
			break;
		}
	} while (choose != 0);
	system("cls");
	return 0;
}
