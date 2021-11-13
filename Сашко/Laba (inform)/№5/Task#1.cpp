#include <iostream>
#include <math.h>

using namespace std; 

int main () 
{
	setlocale(LC_ALL, "rus");
	int N, M , i , j  , imax = 0  , jmax = 0 , imin = 0 , jmin = 0;
	float A[50][50] , max , min;
	cout << "\n Введите количество строк в массиве\n> ";
	cin >> N;
	cout << "\n Введите количество столбцов в массиве\n> ";
	cin >> M;
	
	// ввод матрицы
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			cout << "A [ " << i << "," << j << "] = ";
			cin >> A[i][j];
		}
	}
	// поиск максимума 
	max = A[0][0];
	for (j = 0; j < M; j++)
	{
		
		for (i = 0; i < N; i++)
		{
			if (A[i][j] > max) 
			{
				max = A[i][j];
				imax = i;
				jmax = j;
			}
		}
	}
	cout << "\nmax = " << max << "\nС индексом [" << imax << "," << jmax << "]";

	// поиск минимума, левее столбца, содержащего максимум
	if (jmax != 0)
	{
		j = jmax - 1;
		min = A[0][j];
	
		for (j; j >= 0 ; j--)
		{
			for (i = 0; i < N ; i++)
			{
				if (A[i][j] < min)
				{
					min = A[i][j];
					imin = i;
					jmin = j;
				}
			}
		}
		cout << "\nmin = " << min << "\nС индексом [" << imin << "," << jmin << "]";
	}
	else cout << "\nНевозможно найти минимум, т.к максимум находится в первом столбце ( по индексу 0 )\n";
	return 0; 
}