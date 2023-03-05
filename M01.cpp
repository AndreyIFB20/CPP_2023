#include <iostream>
using namespace std;
int main()
{
setlocale(LC_ALL, "Russian");
int a[10][10];// задаем двумерный массив a 10 строк, 10 столбцов
for(int i = 1; i < 10; i++) // цикл по строкам
{
    for(int j = 1; j <= 10; j++) // цикл по столбцам
    {
        a[i][j] = i * j; //i - индекс строки, j – индекс столбца
        cout << a[i][j] << " ";
    }
    cout << endl;
}
return 0;
}
