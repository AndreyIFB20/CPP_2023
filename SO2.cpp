#include <iostream>
using namespace std;
int main()
{
setlocale(LC_ALL, "Russian");
int a = 13, b = 3; // ������ ����������
cout << "a = " << a << endl << "b = " << b << endl;
int c = a / b; // ����� ������
int d = a % b; // ������� ������� �� �������
cout << "��������� ������� ������: " << c << endl << "������� �� �������: " << d;
return 0;
}
