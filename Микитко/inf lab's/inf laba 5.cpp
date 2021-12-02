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
int searchmax(float array[100][100], int& a, int& b, int& max, int &iindex, int &jindex)
{
	iindex = 0;
	jindex = 0;
	max = array[0][0];
	for (int i=0; i<a; i++)
		for (int j = 0; j < b; j++)
		{
			if (array[i][j] > max)
			{
				max = array[i][j];
				iindex = i;
				jindex = j;
			}
		}
	return max, iindex, jindex;
}
int searchmin(float array[100][100], int& a, int& b, int& min, int& iindex, int& jindex)
{
	iindex = 0;
	jindex = 0;
	min = array[0][0];
	for (int i = 0; i < a; i++)
		for (int j = 0; j < b; j++)
		{
			if (array[i][j] < min)
			{
				min = array[i][j];
				iindex = i;
				jindex = j;
			}
		}
	return min, iindex, jindex;
}
int searchpositive(float array[100][100], int& a, int& b, int &kplus)
{
	kplus = 0;
	int i = a;
	for (int j = 0; j < b; j++)
		{
			if (array[i][j] > 0)
			{
				kplus++;
   		    }
		}
	return kplus;
}
void change(float array[100][100], int& a, int& b)
{
		for (int j = 0; j < b; j++)
		{
			if (array[a][j] > 0)
			{
				array[a][j] = pow(array[a][j], 2);
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
	searchmax(A, N, M, max, iindexmax, jindexmax);
	searchmin(A, N, M, min, iindexmin, jindexmin);
	searchpositive(A, iindexmax, M, kplusmax);
	searchpositive(A, iindexmin, M, kplusmin);
	if (kplusmax > kplusmin)
	{
		change(A, iindexmax, M);
		arrayoutput(A, N, M);
	}
	else if (kplusmin > kplusmax)
	{
		change(A, iindexmin, M);
		arrayoutput(A, N, M);
	}
	else if (kplusmin == kplusmax)
	{
		cout << "\nКоличество положительных элементов в строке с max и строке с min равны. Преобразование невозможно.\n";
	}
}