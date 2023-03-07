#include <iostream>
#include <math.h>
using namespace std;

double sinus(double x)
{
    double rez = 0.0;
    double znach = x;

    for (int i = 1; i <= 10; i++)
    {
        rez += znach;
        znach *= (-1) * x * x / ((2 * i) * (2 * i + 1));
    }
    return rez;
}

int main()
{
    setlocale(LC_ALL, "russian");
    double x;
    cout << "Введите значение x = ";
    cin >> x;
    x = x / 180 * 3.1415926535;
    double sinusX = sinus(x);
    double sinX = sin(x);

    cout << "Результат решения написанной функцией = " << sinusX << "\n";
    cout << "Результат решения готовой функцией = " << sinX << "\n";
    return 0;
}
