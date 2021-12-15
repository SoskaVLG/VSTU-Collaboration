#include <iostream>
using namespace std;

void input(float X[10][20], int &a, int &b)
{
	cout << "\nВведите количество строк в массиве\n> ";
	cin >> a;
	while (a > 10)
	{
		cout << "\nM > 10,введите количество строк в массиве\n> ";
		cin >> a;
	}
	cout << "\nВведите количество столбцов в массиве\n> ";
	cin >> b;
	while (b > 20)
	{
		cout << "\nN > 20,введите количество столбцов в массиве\n> ";
		cin >> b;
	}
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			cout << "\nA[" << i << ", " << j << "] = ";
			cin >> X[i][j];
		}
	}
}
void print(float X[10][20], int a, int b)
{
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			cout << "\nA[" << i << ", " << j << "] = " << X[i][j];
		}
	}
}
float summ(float X[10][20], int a, int b)
{
	int i = a - 1;
	float last_line_sum = 0;
	for (int j = 0; j < b; j++)
	{
		last_line_sum += X[i][j];
	}
	cout << "\n\nСумма последней строки = " << last_line_sum;
	return last_line_sum;
}


void change(float X[10][20], int a, int b, float S)
{

	if (S > 0) X[0][b - 1] = S;
	else
	{
		float max = X[0][0];
		int imax= 0 , jmax = 0;
		for (int i = 0; i < a; i++)
			for (int j = 0; j < b; j++)

				if (X[i][j] > max)
				{
					max = X[i][j];
					imax = i;
					jmax = j;
				}

		cout << "\nmax = " << max; 
		X[imax][jmax] = S;
	}

}

int main()
{
	setlocale(LC_ALL, "rus");
	float A[10][20];
	int M;
	int N;
	float last_sum = 0;
	input(A, M, N);
	cout << "\nИсходный массив :\n";
	print(A, M, N);
	last_sum = summ(A, M, N);
	change(A, M, N, last_sum);
	cout << "\nКонечный массив : \n";
	print(A, M, N);
	return 0;
}