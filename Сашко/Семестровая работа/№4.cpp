#include <iostream>
using namespace std;

void input(float X[10][20], int a, int b)
{
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
			cout << "\nA[" << i << ", " << j << "] = " << X [i][j];
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
	return last_line_sum; 
}


void change (float X[10][20], int a, int b ,float S)
{

	if (S > 0) X[0][b - 1] = S;
	else 
	{
		float max = X[0][0];
		int imax, jmax;
		for (int i = 0; i < a; i++)
			for (int j = 0; j < b; j++)
			
				if (X[i][j] > max)
				{
					max = X[i][j];
					imax = i;
					jmax = j;
				}
			
		
		X[imax][jmax] = S;
	}
	
}



int main()
{
	setlocale(LC_ALL, "rus");
	float A[10][20];
	int N;
	int M;
	float last_line_sum = 0; 

	cout << "\nВведите количество строк в массиве\n";
	cin >> N;
	cout << "\nВведите количество строк в массиве\n";
	cin >> M;

	input(A,N,M);

	cout << "\nИсходный массив :\n";
	print(A, N, M);

	last_line_sum = summ(A, N, M);
	cout << "\n\nСумма последней строки = " << last_line_sum;

	change(A, N, M, last_line_sum);

	cout << "\nКонечный массив : \n"; 
	print(A, N, M); 
	return 0;
}