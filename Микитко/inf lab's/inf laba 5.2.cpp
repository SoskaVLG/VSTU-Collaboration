#include <iostream>
#include <math.h>
using namespace std;
void arrayinput(float array[100][100], int a, int b)
{
	setlocale(LC_ALL, "ru");
	for (int i = 0; i < a; i++)
	{
		cout << "\n";
		for (int j = 0; j < b; j++)
		{
			cout << "\tarray[" << i << "][" << j << "]=";
			cin >> array[i][j];
		}
	}
}
void arrayoutput(float array[100][100], int a, int b)
{
	setlocale(LC_ALL, "ru");
	cout << "\nВывод массива\n";
	for (int i = 0; i < a; i++)
	{
		cout << "\n";
		for (int j = 0; j < b; j++)
			cout << "\t" << array[i][j];
	}
}
void searchandchange(float array[100][100], int a, int b)
{
	for (int j=0; j<b; j++)
	for (int i = 1; i < a; i++)
	{
		if (array[i][j] > array[i - 1][j])
		{
			array[a - 1][j] = -1;
			i = a;
		}

	}
}
void main()
{
	setlocale(LC_ALL, "ru");
	float A[100][100];
	int N, M, kplusmax, max, min, iindexmax, jindexmax, iindexmin, jindexmin, kplusmin;
	cout << "\n Введите размерность матрицы N, M\n";
	cin >> N >> M;
	while (N > 100 || M > 100)
	{
		cout << "\nРазмерность матрицы превышает 100x100\nВведите размерность матрицы N, M\n";
		cin >> N >> M;
	}
	arrayinput(A, N, M);
	arrayoutput(A, N, M);
	searchandchange(A, N, M);
	arrayoutput(A, N, M);
}

