#include <iostream>
#include <cmath>
using namespace std;
int main()
{
setlocale(LC_ALL, "Russian");
int N;
float A, S;
const double pi = 3.141592653589793;
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
return 0;
}
