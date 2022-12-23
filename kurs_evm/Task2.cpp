#include "includes.h"

void task2()
{
	int choose = 0;
	int c[10];
	int min = INT_MAX;
	int max = -INT_MAX;
	int i, j, tmp, cnt = 0;
	cout << "Введите исходный массив чисел\n";
	for (i = 0; i < 10; i++)
		cin >> c[i];
	auto t1 = chrono::high_resolution_clock::now();
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (c[j] > c[j + 1])
			{
				tmp = c[j];
				c[j] = c[j + 1];
				c[j + 1] = tmp;
			}
		}
	}
	cout << "\nИтоговый массив имеет вид:\n";
	for (i = 0; i < 10; i++)
	{
		cout << c[i] << " ";
	}
	cout << "\nКоличество обработанных данных\n" << sizeof c[10] << " байт\n";
	auto t2 = chrono::high_resolution_clock::now();
	auto duration = chrono::duration_cast<chrono::microseconds>(t2 - t1).count();
	cout.precision(2);
	cout << "Данная операция заняла " << duration << " микросекунд" << endl;
	_getch();
}