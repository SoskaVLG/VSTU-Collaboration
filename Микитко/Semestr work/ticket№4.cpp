#include <iostream>
#include <math.h>
#include <ctime>
using namespace std;
void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "ru");
	int M;
	int const size = 18;
	float B[size][size];
	cout << "\nВведите размерность массива MxM" << endl;
	cin >> M;
	while (M > 18)
	{
		cout << "\nРазмерность массива превышает О.Д.З. ( M<=18 )" << endl;
		cout << "\nВведите размерность массива MxM" << endl;
		cin >> M;
	}
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < M; j++)
		{
			B[i][j] = rand() % 10;
		}
	}
	cout << "\nВывод исходного массива" << endl;
	for (int i = 0; i < M; i++)
	{
		cout << "\n";
		for (int j = 0; j < M; j++)
		{
			cout << B[i][j] << "\t";
		}
	}
	int sum = 0;
	for (int i = 0; i < M; i++)
	{
		int j = i;
		sum += B[i][j];
	}   
	if (sum > 10)
	{
		for (int i = 0; i < M; i++)
		{
			for (int j = 0; j < M; j++)
			{
				B[i][j] += 3.5;
			}
		}
	}
	else
		for (int i = 0; i < M; i++)
		{
			for (int j = 0; j < M; j++)
			{
				B[i][j] -= 3.5;
			}
		}
	cout << "\nВывод измененного массива и суммы" << endl;
	for (int i = 0; i < M; i++)
	{
		cout << "\n";
		for (int j = 0; j < M; j++)
		{
			cout << B[i][j] << "\t";
		}
	}
	cout << "\nСумма=" << sum;
}