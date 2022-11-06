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

void AddArray(int*& arr1, int& size, const int m)
{
	size += 1;
	int* newArray = new int[size];
	for (int i = 0; i < m; i++)
	{
		newArray[i] = arr1[i];
	}

	newArray[m - 1] = rand() % 10;

	for (int i = m; i < size; i++)
	{
		newArray[i] = arr1[i - 1];
	}
	delete[] arr1;
	arr1 = newArray;
}

void CleanArray(int*& arr1, int& size, const int k)
{
	size -= 1;
	int* newArray = new int[size];
	for (int i = 0; i < k - 1; i++)
	{
		newArray[i] = arr1[i];
	}
	for (int i = k - 1; i < size; i++)
	{
		newArray[i] = arr1[i + 1];
	}
	delete[] arr1;
	arr1 = newArray;
}

int main()
{
	srand(time(NULL));
	int size, m, k;
	cout << "enter size array:";
	cin >> size;
	int* arr1 = new int[size];

	FillArray(arr1, size);
	ShowArray(arr1, size);

	cout << "enter the number under which you want to delete the item:";
	do
	{
		cin >> k;
		if (k <= size)
		{
			CleanArray(arr1, size, k);
			ShowArray(arr1, size);

			cout << "enter the number under which you want to add the item:";
			do
			{
				cin >> m;
				if (m <= size + 1)
				{
					AddArray(arr1, size, m);
					ShowArray(arr1, size);

					delete[]arr1;
				}
				else
					cout << "error. entered number > " << size + 1 << endl;

			} while (m > size + 1);
		}
		else
			cout << "error. entered number > " << size << endl;
	} while (k > size);
}