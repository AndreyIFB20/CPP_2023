#include <iostream>
#include <math.h>
using namespace std;

int solve_square_equation(float a, float b, float c)
{
    float d, x1, x2, kvadrat;
    kvadrat = pow(b, 2);
    d = kvadrat - (4 * a * c);
    if (d < 0)
    {
        cout << "Корней в пространстве рациональных чисел нет";
    }
    else if (d == 0)
    {
        x1 = (-b)/(2 * a);
        cout << "Корень уравнения: " << x1;
    }
    else
    {
        float koren = sqrt(d);
        x1 = (-b + koren)/(2 * a);
        x2 = (-b - koren)/(2 * a);
        cout << "Первый корень уравнения: " << x1 << endl << "Второй корень уравнения: " << x2;
    }
    return x1, x2;
}
int main()
{
setlocale(LC_ALL, "Russian");
float a, b, c;
cout << "Введите коэффициент a = ";
cin >> a;
while (a == 0)
{
    cout << "Введите коэффициент (Не равен нулю) a = ";
    cin >> a;
}
cout << "Введите коэффициент b = ";
cin >> b;
while (b == 0)
{
    cout << "Введите коэффициент (Не равен нулю) b = ";
    cin >> b;
}
cout << "Введите коэффициент c = ";
cin >> c;
solve_square_equation(a, b, c);
return 0;
}
