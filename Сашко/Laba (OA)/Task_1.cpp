#include <iostream>
#include <math.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    float L, A, B, C;
    float x, y;
    int k;
<<<<<<< HEAD

    cout << "Введите x \n> ";
    cin >> x;
    cout << "\nВведите y \n> ";
    cin >> y;
    cout << "\nВведите k \n> ";
=======
    float pi = 3.14;

    cout << "Введите x \n> ";
    cin >> x;
    cout << "Введите y \n> ";
    cin >> y;
    cout << "Введите k \n> ";
>>>>>>> 7a832e885eeb00d74a975503c707805925bba2d7
    cin >> k;
    if (k == 0) 
    {
        cout << "\nk = 0 , на ноль делить нельзя\n";
        system("pause"); 
        return 0; 
    }

    A = (x + 2 * y <= 2);
    B = (5 % k == 0);
<<<<<<< HEAD
    C = pow(2.71, 2 * 3.14 * k);
    L = (!(A == (!B)) && C) || (B && B);

    if (L==0)cout << "FALSE (0)";
=======
    C = pow(2.71, 2 * pi * k);
    L = (!(A == (!B)) && C) || (B && B);

    if (L == 0)cout << "FALSE (0)";
>>>>>>> 7a832e885eeb00d74a975503c707805925bba2d7
    else cout << "TRUE (1)";
    return 0;
}