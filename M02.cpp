#include <iostream>
#include <cmath>
using namespace std;
int ploshad(float A, int N)
{
float S;
const double pi = 3.141592653589793;
if (N == 3)
{
    S = sqrt(3) / 4 * A * A;
    cout << "Площадь многоугольника равна: " << S;

}
else
{
    S = (A * A * N) / (4 * tan(pi/N));
    cout << "Площадь многоугольника равна: " << S;
}
return S;
}
int main()
{
setlocale(0, "RUSSIAN");
float A;
int N;
cout << "Введите длину стороны: ";
cin >> A;
while (A < 0)
{
    cout << "Введите длину стороны: ";
    cin >> A;
}
cout << endl << "Введите число сторон (МИНИМУМ 3): ";
cin >> N;
while (N < 3)
{
    cout << endl << "Введите число сторон: ";
    cin >> N;
}
ploshad(A, N);
}
