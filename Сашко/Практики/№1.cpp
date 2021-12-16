#include <iostream>
#include <string.h>
using namespace std; 
void input(float A[50][50], int& a ,string name)
{
	cout << "\nВведите количество строк и столбцов в матрице\n> ";
	cin >> a; 
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			cout << name << "[" << i << "," << j << "]= ";
			cin >> A[i][j]; 
		}
	}
}
void print(float A[50][50], int& a, string name)
{
	cout << name <<"\n\n";
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			cout << A[i][j] << "  "; 
		}
		cout << "\n";
	}
	cout << "\n"; 
}
float average(float A[50][50], int& a, string name)
{
	float S_a = 0;
	int counter = 0;
	for (int i = 1; i < a; i++)
	{
		for (int j = 0; j < i; j++)
		{
			S_a += A[i][j];
			counter++; 
		}
	}
	S_a /= counter; 
	cout << "\nСреднее арифметическое матрицы " << name << "= " << S_a;
	return S_a; 
}
void change(float A[50][50], int a, float S_opp)
{
	for (int i = 0; i < a; i++)
	{
		A[i][a -i - 1] = S_opp; 
	}
}

int main ()
{
	setlocale(LC_ALL, "rus"); 
	float X_1[50][50], X_2[50][50];
	int N_1, N_2; 
	float Sa_1, Sa_2; 
	//ввод матриц
	input(X_1, N_1, "X_1");
	input(X_2, N_2, "X_2");
	//вывод исходных матриц 
	cout << "\nИсходные матрицы :\n";
	print (X_1, N_1, "X_1");
	print (X_2, N_2, "X_2");
	//поиск среднего арифметического
	Sa_1 = average(X_1, N_1, "X_1");
	Sa_2 = average(X_2, N_2, "X_2");
	//замена элементов
	change(X_1 , N_1 ,Sa_2);
	change(X_2, N_2, Sa_1);
	//вывод конечных матриц
	cout << "\nКонечные матрицы : \n"; 
	print(X_1, N_1, "X_1");
	print(X_2, N_2, "X_2");
	return 0;
}