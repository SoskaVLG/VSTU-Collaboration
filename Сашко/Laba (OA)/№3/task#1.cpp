#include <iostream>
using namespace std; 

int main()
{
	setlocale(LC_ALL, "rus"); 
	int N, i , num;
	int A[100];
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
		cout << "\nA [" << i << "] = " << A [i];
	}

	// замена элементов 
	for (i = 2; i < N; i += 3)
	{
		num = A[i] % 2;
		A[i] = num; 
	}

	// вывод конечного массива
	cout << "\n\nКонечный массив :";
	for (i = 0; i < N; i++)
	{
		cout << "\nA [" << i << "] = " << A[i];
	}

}