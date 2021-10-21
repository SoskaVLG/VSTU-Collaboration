#include <iostream>
using namespace std; 

int main()
{
	setlocale(LC_ALL, "rus"); 

	float B[100] ; 
	int n , i , index_min;
	float min;
	
	cout << "\n Введите количество элементов массива\n> ";
	cin >> n ;

	if (n < 5) 
	{
	cout << "Данная длина массива не подходит\n";
	system("pause"); 
	return 0;
	}
	
	for (i = 0; i < n; i++)
	{
		cout << "\n B [" << i << "] = ";
		cin >> B[i]; 
	}

	min = B[0]; 
	for (i = 1; i < n; i++)
	{
		if (B[i] < min && B[i] >= -5 && B[i] <= 5) min = B[i];
	}

	if (min > 0) for (i = 0; i < 5; i++) B [i] = min;
	
	system("cls");

	for (i = 0; i < n; i++) cout << "\nB [" << i << "] = " << B[i]; 

	return 0; 
}