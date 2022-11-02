#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	int n = 1;
	cout << "введите длину катета n" << endl;
	cout << "0-exit" << endl;
	while (n != 0)
	{
		cin >> n;
		int k = n - 2;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (j > k)
				{
					cout << " *";
				}
				else
				{
					cout << "  ";
				}
			}
			cout << endl;
			k--;
		}
	}
}