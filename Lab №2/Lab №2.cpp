#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	int n, s = 0;
	for (n = 3; n < 200; n += 3) {
		s += n;
	}
	cout << "Сумма чисел = " << s;
}