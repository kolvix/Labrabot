#include <fstream>
#include <string>
#include <iostream>
using namespace std;

void word(int n, int m, char** arr)
{
	for (int i = 0; i < n; i++)
	{
		cout << "(";
		for (int j = 0; j < m; j++)
		{
			if ((arr[i][j] == '0') && (j == m - 1))
				cout << ")";
			if ((arr[i][j] == '0') && (j != m - 1))
				cout << ",";
			if ((arr[i][j] != '0') && (j != m - 1))
				cout << arr[i][j];
		}
		cout << endl;
	}
}
int main()
{
	int n = 3, m = 15; //как в примере лабораторной работы (на вход:123023402303450234450234567010234455677670450)
	char** a = new char* [n];
	for (int i = 0; i < n; i++)
		a[i] = new char[m];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
	cout << endl;
	word(n, m, a);
}