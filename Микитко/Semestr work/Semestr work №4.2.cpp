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
	for (int i = 0; i < a; i++)
	{
		cout << "\n";
		for (int j = 0; j < b; j++)
			cout << "\t" << array[i][j];
	}
}
int sum(float array[100][100], int& a, int& b)
{
	int s = 0;
	int i = 0, j;
	for ( i; i < a; i++)
	{
		s += array[i][j = i];
	}
	return s;
}
void change(float array[100][100], int a, int b, int s)
{
	if (s > 10)
	{
		for (int i=0; i<a; i++)
			for (int j = 0; j < b; j++)
			{
				array[i][j] += 3.5;
			}
	}
	else
	{
		for (int i = 0; i < a; i++)
			for (int j = 0; j < b; j++)
			{
				array[i][j] -= 3.5;
			}
	}
}
void main()
{
	setlocale(LC_ALL, "ru");
	int M;
	int const size = 100;
	float B[size][size];
	cout << "\nВведите размерность массива M\n";
	cin >> M;
	while (M > 18)
	{
		cout << "\n Размерность массива превышает О.Д.З. M<=18\n Введите размерность массива M\n";
		cin >> M;
	}
	cout << "Введите массив\n";
	arrayinput(B, M, M);
	cout << "\n Вывод исходного массива\n";
	arrayoutput(B, M, M);
	cout << "\n Вывод суммы элементов главной диагонали";
	int s = sum(B, M, M);
	cout << "\n s=" << s;
	change(B, M, M, s);
	cout << "\n Вывод измененного массива" << endl;
	arrayoutput(B, M, M);
}