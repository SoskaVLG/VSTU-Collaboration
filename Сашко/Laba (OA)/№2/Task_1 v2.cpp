#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	double elements[100];		// массив для элементов последовательности 
	elements[0] = 0;
	elements[1] = 0;
	elements[2] = 1;
	elements[3] = 2;
	int n, i;				// n - кол-во элементов последовательности, i - переменная цикла
	double ai = 0;				// элемент , вычисляющийся на каждой итерации цикла
	double sum = 0;				// сумма элеметов 

	cout << "Введите n \n> ";
	cin >> n;

	for (i = 4; i <= n; i++)
	{
		ai = elements[i - 2] + i * sqrt(elements[i - 1]) + 2 * elements[i - 3];
		elements[i] = ai;
	}
	for (i = 1; i <= n; i++)
	{
		sum += elements[i];
	}
	cout << "\nСумма равна : " << sum;
	return 0; 
}