#include <iostream>
using namespace std;
int main()
{
setlocale(LC_ALL, "Russian");
double a, b, c;
cout << "Введите первое число: ";
cin >> a;
cout << "Введите второе число: ";
cin >> b;
c = (a + b)*(a+b);
cout << "Квадрат суммы чисел равен: " << c;
return 0;
}
