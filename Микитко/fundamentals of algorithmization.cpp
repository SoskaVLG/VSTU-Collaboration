#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	
	float k;
	float x;
	float PI = 3.14;
	float e = 2.71;
	cout << "\nВведите x, k" << endl;
	cin >> x >> k;
	float L, A, B, C;
	A = (sin(x) <= 0.5);
	B = (int(k / 2) > 2);
	C = (pow(e, 2 * PI * k) > 1);
	L = (!(A || (!B)) == C) && (A && B);
	if (L == false) cout << "\nL is false" << endl;
	else cout << "\nL is true" << endl;
	return 0;
}