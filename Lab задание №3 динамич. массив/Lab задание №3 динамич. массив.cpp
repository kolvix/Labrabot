#include <iostream>
using namespace std;

void FillArray(int* const arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}

void ShowArray(const int* const arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void AddArray(int*& arr1, int& size, const int m, const int k)
{
	int* newArray = new int[size + m];
	for (int i = 0; i < k; i++)
	{
		newArray[i] = arr1[i];
	}
	for (int i = k; i < k + m; i++)
	{
		newArray[i] = rand() % 10;
	}
	for (int i = k + m; i < size + m; i++)
	{
		newArray[i] = arr1[i - m];
	}
	size += m;
	delete[] arr1;
	arr1 = newArray;
}

void main()
{
	srand(time(NULL));
	int size, m, k;
	cout << "enter size array:";
	cin >> size;
	int* arr1 = new int[size];

	FillArray(arr1, size);

	ShowArray(arr1, size);

	cout << "enter from which number to add new items " << "(from 1 " << "to " << size << ") :";
	do
	{
		cin >> k;
		if (k <= size)
		{
			cout << "enter how many items you need to add:";
			cin >> m;

			AddArray(arr1, size, m, k);

			ShowArray(arr1, size);

			delete[]arr1;
		}
		else
			cout << "error. entered number > " << size << endl;
	} while (k > size);
}