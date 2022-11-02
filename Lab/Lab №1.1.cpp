#include <iostream> 
#include <math.h> 
#include <windows.h> 
using namespace std;

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float af = 1000, bf = 0.0001, Af, Bf, ABf, AB2f, s1f, Sf;
	Af = pow(af, 2);
	Bf = pow(bf, 2);
	ABf = pow(af + bf, 2);
	AB2f = 2 * af * bf;
	s1f = ABf - (Af + AB2f);
	Sf = s1f / Bf;
	cout << "результат для данных типа float равен:" << Sf << endl << endl;
	double ad = 1000, bd = 0.0001, Ad, Bd, ABd, AB2d, s1d, Sd;
	Ad = pow(ad, 2);
	Bd = pow(bd, 2);
	ABd = pow(ad + bd, 2);
	AB2d = 2 * ad * bd;
	s1d = ABd - (Ad + AB2d);
	Sd = s1d / Bd;
	cout << "результат для данных типа double равен:" << Sd << endl << endl;
}