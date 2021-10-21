
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	float A[100];
	int part, n;
	int imin = 0;

	cout << "\n Введите количество элементов в массиве\n> ";
	cin >> n;
	if (n % 2 == 0)
	{
		part = n / 2;
		for (int i = 0; i < n; i++)
		{
			cout << "\n A [" << i << "] = ";
			cin >> A[i];
		}
		cout << "\nИсходный массив : ";
		for (int i = 0; i < n; i++) cout << "\nA [" << i << "] = " << A[i];
	}

	else
	{
		cout << "\nВ массиве нечетное количество элементов\n";
		system("pause");
		return 0;
	}

	int min, max, prod;
	min = A[0];

	for (int i = 1; i < part; i++)
	{
		if (A[i] < min)
		{
			min = A[i];
			imin = i;
		}
	}
	max = A[part];
	for (int i = part + 1; i < part * 2; i++)
	{
		if (A[i] > max) max = A[i];
	}
	if (imin > 0)
	{
		prod = min * max;
		A[imin - 1] = prod;
	}

	else cout << "\nОшибка , невозможно заменить элемент\n";

	cout << "\nКонечный массив :";
	for (int i = 0; i < n; i++) cout << "\nA [" << i << "] = " << A[i];

	return 0;


}
