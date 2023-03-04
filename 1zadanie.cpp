#include <iostream>
using namespace std;
int main()
{
int a = 5; // переменная целого типа
float b = 2.5; // переменная с плавающей точкой
char c = 'C'; // символьная переменная
bool d = true; // логическая переменная

cout << "a = " << a << endl << "b = " << b << endl << "c = " << c << endl << "d = " << d << endl;
float e = a + b; // сложение
float f = a - b; // вычитание
float g = a * b; // умножение
float h = a / b; // деление

cout << "Slojenie ravno: " << e << endl << "vichitanie ravno: " << f << endl << "ymnojenie ravno: " << g << endl << "delenie ravno: " << h;
return 0;
}
