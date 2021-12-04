#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	double x, y, c = 0;
	//ввод y и x с клавиатуры
	cout << "\nВведите x\n> ";
	cin >> x;
	cout << "\nВведите y\n> ";
	cin >> y;
	//вычисление C согласно уловию задачи
	if (x - y == 0) c = pow(x, 2) + pow(y, 2) + sin(x);
	else if (x - y > 0) c = pow(x - y, 2) + cos(x);
	else if (x - y < 0) c = pow(y - x, 2) + tan(x);
	cout << "\nC = " << c << "\n";
}