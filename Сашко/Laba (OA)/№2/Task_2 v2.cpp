#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	float numbers[15]; 
	int i;
	float max;
	int count = 0;
	for (i = 0; i < 15; i++)
	{
		cout << "\nВведите число\n> ";
		cin >> numbers[i]; 
		system("cls"); 	
	}
	max = numbers[0];
	for (i = 0; i < 15; i++)
	{
		if (numbers[i] >= max) max = numbers[i]; 
	}
	cout << "\nМаксимум равен : " << max; 

	for (i = 0; i < 15; i++)
	{
		if (numbers[i] == max)
		{
			count += 1;
		}
	}
	cout << "\nКоличество максимумов : " << count; 
}