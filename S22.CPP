#include <iostream>
#include <fstream>
using namespace std;
int main()
{
setlocale(LC_ALL, "Russian");
ifstream ifs("output.txt"); // открываем файл с данными
int n = 1, a; // задаем значение порядкового номера числа и само число
while (ifs >> a) // выполняем цикл, пока оператор >> не найдет символ, отличающий от числа
    cout << n++ << ". " << a << endl;
    n++;
return 0;
}
