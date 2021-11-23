#include <iostream>
#include <math.h>
#include <ctime>
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	int const size = 100;
	int A[size];
	int n;
<<<<<<< HEAD
	int i, k = 1, counter;
=======
	int i, k = 1, counter; 
>>>>>>> 0a3795124c0a27b62d566167e7fae3a58b5a699c
	srand(time(NULL));
	cout << "\nВведите значение n" << endl;
	cin >> n;
	while (n > 100)
	{
		cout << "\nРазмерность массива превышает 100\nВведите значение n" << endl;
		cin >> n;
	}
	cout << "\nВывод введенного массива" << endl;
	for (i = 0; i < n; i++)
	{
		A[i] = rand() % 10;
		cout << A[i] << "\t";
	}
	cout << "\nПоиск первого четного элемента" << endl;
	for (i = 0; i < n; i++)
	{
		if (A[i] % 2 == 0)
		{
			k = A[i];
			counter = i;
			i = n; // тута ошибка была
		}
	}
<<<<<<< HEAD
	cout << "counter = " << counter;
	cout << "\n Вывод измененного массива" << endl;
	for (i = n - counter - 1; i < n; i++)			// n-counter-1 - первый элемент,который умножается на k 
=======
	cout << "counter = " << counter; 
	cout << "\n Вывод измененного массива" << endl;
	for (i = n-counter-1; i < n; i++)			// n-counter-1 - первый элемент,который умножается на k 
>>>>>>> 0a3795124c0a27b62d566167e7fae3a58b5a699c
	{
		A[i] *= k;

	}
	for (i = 0; i < n; i++)
	{
		cout << A[i] << "\t";
	}


}
<<<<<<< HEAD

}
=======
>>>>>>> 0a3795124c0a27b62d566167e7fae3a58b5a699c
