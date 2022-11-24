#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a, min, c = 1, n = 0, b = 0;
	while (b == 0)
	{
		cout << "\nenter a" << endl;
		cin >> a;
		if (a == 0)
		{
			cout << "\nthe first element must be non-zero";
			n++;
		}
		else
		{
			min = a;
			while (a != 0)
			{
				cout << "enter a" << endl;
				cin >> a;
				if (a != 0 && a < min)
				{
					min = a;
					c = 0;
				}
				if (a != 0 && a == min)
					c++;
			}
			cout << "min = " << min << endl << "number of minimum elements = " << c << endl;
			n = 0;
		}
		if (n == 3)
		{
			cout << ",programm stoped" << endl;
			b = 1;
		}
	}
	return 0;
}