#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	float x, y, f;
	cout << "Введите координату x, y" << endl;
	cin >> x >> y;
	float R;
	cout << "Введите радиус R\n";
	cin >> R;
	f = pow(x, 2) + 4 * pow(R, 2);
	if (y > f && x > 0 && y > 0) cout << "\nТочка M не принадлежит заштрихованной области.\n";
	else if (y < f && x > 0 && y > 0) cout << "\n Точка M принадлежит заштрихованной области.\n";
	else if (y < f && x < 0 && y>0) cout << "\nТочка M не принадлежит заштрихованной области.\n ";
	else if (y > f && x < 0 && y>0) cout << "\n Точка M принадлежит заштрихованной области.\n";
	else if (x<0 && y>f && y < 0) cout << "\nТочка M не принадлежит заштрихованной области.\n ";
	else if (y < f && y < 0 && x<0 && x * x + y * y>-3 * R * R && x < 0) cout << "\n Точка M принадлежит заштрихованной области.\n";
	else if (x > 0 && y<f && x * x + y * y>-3 * R * R) cout << "\nТочка M не принадлежит заштрихованной области.\n ";
	else if (x > 0 && x * x + y * y < -3 * R * R && y < 0) cout << "\n Точка M принадлежит заштрихованной области.\n";
	else if (x > 0 && y > f && y < 0) cout << "\nТочка M не принадлежит заштрихованной области.\n ";
	else if (x < 0 && y < 0 && y < f && x * x + y * y < -3 * R * R) cout << "\nТочка M не принадлежит заштрихованной области.\n ";
    return 0;
}