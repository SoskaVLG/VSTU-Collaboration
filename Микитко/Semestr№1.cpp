#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");

	float z, x, c, y, b;
	cout << "\nВведите x,y" << endl;
	cin >> x >> y;
	if (y != 0)
	{
		z = pow(x, 2) - 5 * x * y + tan(y);
	}
	else cout << "\ny=" << y;
	if (z < 10)
	{
		b = 12 * y + 2.72 + 5;
		cout << "\nb=" << b;
	}
	else

		c = pow(x, 2) + pow(y, 2) - 17.5;
	cout << "\nc=" << c;





}
