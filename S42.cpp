#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
setlocale(LC_ALL, "Russian");
int SIZE = 10; // Размер массива
int a[SIZE] = { 1, 7, 3, 6, 5, 4, 9, 2, 8, 12 }; // массив
cout << "Исходный массив: " << endl;
for ( int i = 0; i < SIZE; ++i )
    {
    cout << a[i] << " ";
    }
cout << endl << "Отсортированный массив: " << endl;
for (int j = 0; j < SIZE; j++) // цикл для первого числа
{
    for (int h = 0; h < SIZE - 1; h++) // цикл для второго числа
    {
        if(a[h] < a[h + 1]) // создаем условие, в котором, если второе число больше первого, то числа меняются местами
        {
            swap(a[h], a[h+1]);
        }
    }
}
for (int b = 0; b < SIZE; b++)
{
    cout <<  a[b] << " ";
}
return 0;
}
