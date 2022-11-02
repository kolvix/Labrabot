#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	int n = 1;
	cout << "введите длину стороны квадрата n" << endl;
	cout << "0-exit" << endl;
	while (n != 0)
	{
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i != 0 && i != n - 1 && j != 0 && j != n - 1)
				{
					cout << "  ";
				}
				else
				{
					cout << " *";
				}
			}
			cout << endl;
		}
	}
}