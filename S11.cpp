#include <iostream>
using namespace std;
int main()
{
setlocale(LC_ALL, "Russian");
for (int a = 0; a <=100; ++a ) // ������ ����, � ������� ������ ��� ����� �� 0 �� 100
if (a % 3 == 0) // ������� �������, � ������� ������ ����� ����������� �� ��������� �� 3
    cout << a << endl; // ���� ����� ������� ��� ������� �� 3, ������� ���
return 0;
}
