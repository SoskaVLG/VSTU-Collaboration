#include <iostream>
#include <math.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");
	int const size = 100;
	int A[size];
	int n, i;
	cout << "\nВведите размерность массива n" << endl;
	cin >> n;
	while (n > 100)
	{
		cout << "Размерность массива превышает 100\nВведите значение n" << endl;
		cin >> n;
	}
	for (i = 0; i < n; i++)
	{
		cout << "A[" << i << "]=";
		cin >> A[i];
		cout << "\n";
	}
	cout << "Вывод исходного массива" << endl;
	for (i = 0; i < n; i++)
	{
		cout << A[i] << "\t";
	}
	for (i = 0; i < n; i++)
	{
		if (A[i] < -2 || A[i]>8)
		{
			A[i] += 10;
		}
	}
	cout << "\nВывод измененного массива" << endl;
	for (i = 0; i < n; i++)
	{
		cout << A[i] << "\t";
	}





}