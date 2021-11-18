#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int N, M, i, j, negative_counter = 0, negative_i = 0, negative_j = 0, imin = 0, jmin = 0 , current_j;
	float A[50][50], min, second_negative_number;
	cout << "\n Введите количество строк в массиве\n> ";
	cin >> N;
	cout << "\n Введите количество столбцов в массиве\n> ";
	cin >> M;

	// ввод матрицы
	for (j = 0; j < M; j++)
	{
		for (i = 0; i < N; i++)
		{
			cout << "A [ " << i << "," << j << "] = ";
			cin >> A[i][j];
		}
	}
	system("cls");
	// вывод исходной матрицы
	cout << "\n\nИсходная матрица : \n";
	for (j = 0; j < M; j++)
	{
		for (i = 0; i < N; i++)
		{
			cout << "\nA [ " << i << "," << j << "] = " << A[i][j];
		}
	}
	// общий внешний цикл по столбцам
	for (j = 0; j < M; j++)
	{ 
		min = A[0][j];
		negative_counter = 0;

		// внутренний цикл по сторокам для поиска минимума в стобце
		for (i = 0; i < N; i++)
		{

			if (A[i][j] < min)
			{
				min = A[i][j];
				imin = i;
			}
		}
		min = A[imin][j];
		jmin = j; 
		
		// внутренний цикл по строкам для поиска второго отрицательного числа в столбце
		for (i = 0; i < N; i++)
		{
			if (A[i][j] < 0)
			{
				negative_counter += 1;
				if (negative_counter == 2)
				{
					negative_i = i;
					negative_j = j;

					second_negative_number = A[negative_i][negative_j];
					A[imin][jmin] = second_negative_number;
					A[negative_i][negative_j] = min;
				}
			}
		}
	}

	// вывод конечной матрицы
	cout << "\n\nКонечная матрица : \n";
	for (j = 0; j < M; j++)
	{
		for (i = 0; i < N; i++)
		{
			cout << "\nA [ " << i << "," << j << "] = " << A[i][j];
		}
	}

	return 0;
}