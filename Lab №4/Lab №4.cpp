#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	const int L_MAX = 200;
	int M[L_MAX];
	int second_M[L_MAX];
	int L;
	int K;
	cout << "| enter massif leight (L_MAX = 200): ";
	cin >> L;
	cout << "| enter number K:";
	cin >> K;
	for (int i = 0; i <= L; i++) {
		M[i] = rand() % 10;
	}
	cout << "\n|  first massif: ";
	for (int i = 0; i < L; i++) {
		cout << M[i] << " ";
	}
	for (int i = 0; i < L; i++) {
		if (i == K) {
			for (int del = i; del <= L; del++) {
				M[del] = M[del + 1];
			}
		}
	}
	int chet = 0;
	for (int i = 0; i < L; i++) {
		second_M[chet] = M[i];
		if (M[i] % 2 == 0) {
			chet++;
			second_M[chet] = 0;
		}
		chet++;
	}

	cout << "\n| second massif: ";
	for (int i = 0; i < L; i++) {
		cout << second_M[i] << " ";
	}
}