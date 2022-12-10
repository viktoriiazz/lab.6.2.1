#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void PrintArraySum(int* a, const int size, int i, int sum)
{
	if (a[i] % 2 != 0)
	{
		sum += a[i];
	}

	if (i < size - 1)
		PrintArraySum(a, size, i + 1, sum);
	else {
		cout << endl;
		cout << "Sum = " << sum << endl;
	}

}
void change(int* arr, const int size)
{
	int change = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 != 0)
		{
			change += arr[i];

		}
	}
}
void Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}


void SetOddValuesArray(int* arr, int* newArray, const int size, int i) {
	int k = 1;

	for (i = 0; i < size; i++)
	{
		if ((arr[i] % 2) == 1)
		{
			k = k * arr[i];
		}
	}
}

void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << "a[" << setw(2) << i << " ] = " << setw(4) << a[i] << endl;
	cout << endl;
}

int main()
{
	srand((unsigned)time(NULL));
	const int n = 5;
	int a[n];
	int i = 0;
	int size = 0;
	int sum = 0;
	int Low = -10;
	int High = 10;
	Create(a, n, Low, High);
	Print(a, n);
	PrintArraySum(a, n, i, sum);
	SetOddValuesArray(a, n, i, size);
	return 0;
}


