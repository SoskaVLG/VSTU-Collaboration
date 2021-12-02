#include <iostream>
using namespace std;

void input(float X[100][100], int a)
{
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			cout << "\nA[" << i << ", " << j << "] = ";
			cin >> X[i][j];
		}
	}
}
void print(float X[100][100], int a)
{
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			cout << "\nA[" << i << ", " << j << "] = " << X [i][j];
		}
	}
}

float matrix_track(float X[100][100], int a)
{
	float S = 0;
	for (int i = 0; i < a; i++)
	{
		S += X[i][i];
	}
	return S; 
}

void change(float X[100][100], int a , float Z)
{
	int i, j;
	for (i = 0; i < a - 1; i++)
	{
		for (j = i + 1; j < a  + 1; j++)
		{
			if (X[i][j] == 0) X[i][j] = Z; 
		}
	}

}

int main()
{
	setlocale(LC_ALL, "rus");
	float X_1[100][100], X_2[100][100],X_3[100][100]; 
	int N_1 , N_2 , N_3;
	float b_1, b_2, b_3;
	float y , z; 
	
	//ввод матриц
	cout << "\nВведите количество строк и столбцов в матрице X_1 \n>";
	cin >> N_1; 
	input(X_1,N_1);
	cout << "\nВведите количество строк и столбцов в матрице X_2 \n>";
	cin >> N_2;
	input(X_2, N_2);
	cout << "\nВведите количество строк и столбцов в матрице X_3 \n>";
	cin >> N_3;
	input(X_3, N_3); 
	
	//вычисление следов матриц
	b_1 = matrix_track(X_1 , N_1);
	cout << "\n След матрицы X_1 = " << b_1 << endl; 
	b_2 = matrix_track(X_2 , N_2);
	cout << "\n След матрицы X_2 = " << b_2 << endl;
	b_3 = matrix_track(X_3 , N_3);
	cout << "\n След матрицы X_3 = " << b_3 << endl;
	cout << "\nВведите y \n>";
	cin >> y;
	z = b_1 * y * y + b_2 * y + b_3; 
	cout << "Значение z = " << z; 

	//замена элементов матриц
	change(X_1 , N_1 ,z); 
	change(X_2, N_2, z);
	change(X_3, N_3, z);
	
	// вывод иcходных матриц
	cout << "\nИсходная матрица X_1 :\n";
	print(X_1, N_1);
	cout << "\n\nИсходная матрица X_2 :\n";
	print(X_2, N_2);
	cout << "\n\nИсходная матрица X_3 :\n";
	print(X_3, N_3);

	return 0;
}