#include <iostream>
using namespace std; 

int main()
{
	setlocale(LC_ALL, "rus"); 
	int N, i , imin = 0 , imax = 0 ;
	float A[100] , min , max;
	cout << "\nВведите N \n>";
	cin >> N; 
	for (i = 0; i < N; i++)
	{
		cout << "\nA [" << i << "] = ";
		cin >> A[i];
	}
	// вывод исходного массива
	cout << "\nИсходный массив :"; 
	for (i = 0; i < N; i++)
	{
		cout << "\nA [" << i << "] = "<< A [i];
	}

	// поиск максимума
	
	max = A[0]; 
	for (i = 0; i < N; i++)
	{
		if (A[i] > max)
		{
			max = A[i];
			imax = i;
		}
	}

	// поиск минимума

	min = A[0];
	for (i = 0; i < N; i++)
	{
		if (A[i] < min)
		{
			min = A[i];
			imin = i;
		}
	}

	// замена элементов
	if (imax < imin)
	{
		cout << "\n\nМаксимум встретился раньше \n";
		cout << "\nЗамена A [" << 0 << "] = " << A [0] << " на " << min; 
		A[0] = min;
	}
	else if (imin < imax)
	{
		cout << "\n\nМинимум встретился раньше \n";
		cout << "\nЗамена A [" << N - 1 << "] = " << A[N - 1] << " на " << max;
		A[N - 1] = max;
	}


	// вывод конечного массива
	cout << "\n\nКонечный массив :";
	for (i = 0; i < N; i++)
	{
		cout << "\nA [" << i << "] = " << A[i];
	}

}
