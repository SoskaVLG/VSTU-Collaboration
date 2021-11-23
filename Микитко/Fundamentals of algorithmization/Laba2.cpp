#include <iostream>
#include <math.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");
	int const size = 100;
	int A[size];
	int n, i, counter, k;
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
		if (A[i] % 2 == 0)
		{
			k = A[i];
			counter = i;
			i = n;

		}
	}
	for (i = n - counter -1 ; i < n; i++)
	{
		A[i] *= k;
	}
	cout << "\nВывод измененного массива\n";
	for (i = 0; i < n; i++)
	{
		cout << A[i] << "\t";
	}
}
