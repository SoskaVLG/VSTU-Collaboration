#include <iostream>


using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int N, M, i, j, imax = 0, jmax = 0, imin = 0, jmin = 0;
	float A[50][50], max, min;
	cout << "\n Введите количество строк в массиве\n> ";
	cin >> N;
	cout << "\n Введите количество столбцов в массиве\n> ";
	cin >> M;

	// ввод массива
	for (j = 0; j < M; j++)
	{
		for (i = 0; i < N; i++)
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
	cout << "\n\nmax = " << max << "\nС индексом [" << imax << "," << jmax << "]";

	// поиск минимума, левее столбца, содержащего максимум,замена элементов 
	if (jmax != 0)
	{
		j = jmax - 1;
		min = A[0][j];

		for (j; j >= 0; j--)
		{
			for (i = 0; i < N; i++)
			{
				if (A[i][j] < min)
				{
					min = A[i][j];
					imin = i;
					jmin = j;
				}
			}
		}

		cout << "\n\nmin = " << min << "\nС индексом [" << imin << "," << jmin << "]";

		A[imax][jmax] = min;
		cout << "\n\nЗамена A [" << imax << "," << imax << "] = " << max << "  на " << min;
	}

	else cout << "\n\nНевозможно найти минимум, т.к максимум находится в первом столбце ( по индексу 0 )\n";

	// вывод конечного массива
	cout << "\n\nКонечный массив :\n";
	for (j = 0; j < M; j++)
	{
		for (i = 0; i < N; i++)
		{
			cout << "\nA [" << i << "," << j << "] = " << A[i][j];
		}
	}
	return 0;
}
