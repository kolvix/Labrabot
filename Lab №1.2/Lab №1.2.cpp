#include <iostream>
#include <windows.h>
using namespace std;

void main()
{
    short n, m;

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "\n Введите n и m " << endl;
    cin >> n >> m;
    cout << "Значение выражения n + ++m = " << n + ++m << endl;
    cout << "Значение выражения m-- > n = " << (m-- > n) << endl;
    cout << "Значение выражения n-- > m = " << (n-- > m) << endl;
}