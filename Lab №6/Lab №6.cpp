#include <iostream>
#include <windows.h>
#include <string.h>
using namespace std;
bool palindrom(char s[]) {
    int n = strlen(s);
    for (int i = 0; i < n / 2; i++)
        if (s[i] != s[n - 1 - i])
            return false;
    return true;
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char s[255];
    cout << "������� ������" << endl;
    gets_s(s);
    if (palindrom(s))
        cout << "��������� " << endl;
    else
        cout << "�� ���������" << endl;
    return 0;
}