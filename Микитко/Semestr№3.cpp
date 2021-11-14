#include <iostream>
#include <math.h>
#include <ctime>
using namespace std;
void main()
{   
	setlocale (LC_ALL, "ru");
	int N;
	int const size = 60;
	int A[size];
	cout << "\nВведите размерность массива N" << endl;
	cin >> N;
	while (N > 60)
	{
		cout << "\n Значение N вне О.Д.З." << endl;
		cout << "\n Введите значение N" << endl;
		cin >> N;
	}
	srand(time(NULL));
	for (int i = 0; i < N; i++)
	{
		A[i] = rand() % 100;
		cout << "\nA[" << i << "]=" << A[i] << endl;


	}
	if (A[1] >= 0)
	{
		int min = A[0];
		for (int i = 1; i < N; i++)
		{
			if (A[i] < min)
			{
				min = A[i];
			}
		}
		cout << "\n min=" << min << endl;
		int min2 = pow(min, 2);
		for (int i = 0; i < N; i++)
		{
			A[i] *= min2;

		}
	}
	else
	{
		int max = A[0];
		for (int i = 1; i < N; i++)
		{
			if (A[i] > max)
				max = A[i];
			cout << "\n max=" << max << endl;
		}
		for (int i = 0; i < N; i++)
		{
			A[i] *= pow(max, 2);
		}
	}
	cout << "\nВывод измененного массива" << endl;
	for (int i = 0; i < N; i++)
	{
		cout << "\n A[" << i << "]=" << A[i] << endl;
	}
}