#include <iostream>
#include <math.h>
using namespace std;
void arrayinput(int array[100][150], int a, int b)
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
void arrayoutput(int array[100][150], int a, int b, int minX)
{
	setlocale(LC_ALL, "ru");
	for (int i = 0; i < a; i++)
	{
		cout << "\n";
		for (int j = 0; j < b; j++)
			cout << "\t" << array[i][j];
	}
	cout << "\n minX=" << minX << endl;
}
int searchmin(int array[100][150], int& a, int& b, int& min)
{
	min = array[0][0];
	for (int i = 0; i < a; i++)
		for (int j = 0; j < b; j++)
		{
			if (array[i][j] < min)
			{
				min = array[i][j];
				
			}
		}
	return min;
}
void change(int array[100][150], int mutablearray[100][150], int& a, int& b)
{
	int buffer[100][100];
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < b; j++)
		{
			buffer[i][j] = array[i][j];
		}
	}
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < b; j++)
		{
			mutablearray[i][j] = buffer[i][j];
		}
	}

}
void main()
{
	setlocale(LC_ALL, "ru");
	int X1[100][150];
	int X2[100][150];
	int N, M;
	int minX1;
	int minX2;
	cout << "\nВведите размерность матриц NxM\n";
	cin >> N >> M;
	while (N > 100 || M > 150)
	{
		cout << "\nРазмерность матриц превышает О.Д.З. N<101, M<151\nВведите размерность матриц NxM\n";
		cin >> N >> M;
	}
	cout << "\nВвод матрицы X1";
	arrayinput(X1, N, M);
	cout << "\nВвод матрицы X2";
	arrayinput(X2, N, M);
	searchmin(X1, N, M, minX1);
	searchmin(X2, N, M, minX2);
	cout << "\nВывод массива X1:\n";
	arrayoutput(X1, N, M, minX1);
	cout << "\nВывод массива X2:\n";
	arrayoutput(X2, N, M, minX2);
	if (minX1 > minX2)
	{
		change(X2, X1, N, M);
	}
	else
	{
		change(X1, X2, N, M);
	}
	cout << "\nВывод преобразованных массивов\n";
	cout << "\nВывод массива X1:\n";
	arrayoutput(X1, N, M, minX1);
	cout << "\nВывод массива X2:\n";
	arrayoutput(X2, N, M, minX2);
}