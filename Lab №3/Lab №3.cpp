#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	long double a = 0.1, b = 1, k = 10, shag, y, x, n = 10, SN = 1, SE = 1, EL1, EL2;
	const double E = 0.0001;
	x = a;
	shag = (b - a) / k;
	while (x < b) {
		y = pow(3, x);
		for (int i = 1; i <= n; i++) {
			SN += pow(log(3), i) * pow(x, i) / i;
		}
		int h = 1;
		EL1 = 1;
		EL2 = pow(log(3), h) * pow(x, h) / h;
		while (abs(EL2 - EL1) > E) {
			EL1 = EL2;
			SE += EL1;
			h++;
			EL2 = pow(log(3), h) * pow(x, h) / h;
		}
		x += shag;
		cout << "X = " << x;
		cout << "\tSN = " << SN;
		cout << "\tSE = " << SE;
		cout << "\tY = " << y << endl;
	}
	return 0;
}