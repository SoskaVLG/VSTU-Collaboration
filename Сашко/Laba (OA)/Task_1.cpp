#include <iostream>
#include <math.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    float L, A, B, C;
    float x, y;
    int k;

    cout << "Введите x \n> ";
    cin >> x;
    cout << "Введите y \n> ";
    cin >> y;
    cout << "Введите k \n> ";
    cin >> k;

    A = (x + 2 * y <= 2);
    B = (5 % k == 0);
    C = pow(2.71, 2 * 3.14 * k);
    L = (!(A == (!B)) && C) || (B && B);

    if (L == 0)cout << "FALSE (0)";
    else cout << "TRUE (1)";
    return 0;
}