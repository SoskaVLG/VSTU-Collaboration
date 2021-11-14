#include <iostream>
#include <math.h>
using namespace std;
void main()
{
	float F, x;
	for (float x = 0.1; x < 8.1; x += 0.5)
	{
		F = 7.14 * pow(tan(2 * x), 2);
		cout << "\nF=" << F << "\tx=" << x << endl;
	
	}
}