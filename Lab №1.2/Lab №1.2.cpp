#include <iostream>
#include <windows.h>
using namespace std;

void main()
{
    short n, m;

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "\n ������� n � m " << endl;
    cin >> n >> m;
    cout << "�������� ��������� n + ++m = " << n + ++m << endl;
    cout << "�������� ��������� m-- > n = " << (m-- > n) << endl;
    cout << "�������� ��������� n-- > m = " << (n-- > m) << endl;
}