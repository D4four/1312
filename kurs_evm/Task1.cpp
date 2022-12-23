#include "includes.h"

void task1(int amnt) {
	pcisim(1, 1, 1, amnt);
	pcisim(1, 1, 2, amnt);
	pcisim(1, 1, 3, amnt);
	pcisim(1, 1, 4, amnt);
	cout << "\n\n";
	cout << "__________________________________________________\n" << endl;
	pcisim(2, 2, 1, amnt);
	pcisim(2, 2, 2, amnt);
	pcisim(2, 2, 3, amnt);
	pcisim(2, 2, 4, amnt);

	cout << "\n\n";
	cout << "__________________________________________________\n" << endl;
	pcisim(3, 3, 1, amnt);
	pcisim(3, 3, 2, amnt);
	pcisim(3, 3, 3, amnt);
	pcisim(3, 3, 4, amnt);
}