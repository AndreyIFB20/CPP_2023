#include <iostream>
using namespace std;
int main()
{
setlocale(LC_ALL, "Russian");
int a = 5; // ���������� ������ ����
float b = 2.5; // ���������� � ��������� ������
char c = 'C'; // ���������� ����������
bool d = true; // ���������� ����������

cout << "a = " << a << endl << "b = " << b << endl << "c = " << c << endl << "d = " << d << endl;
float e = a + b; // ��������
float f = a - b; // ���������
float g = a * b; // ���������
float h = a / b; // �������

cout << "��������� �������� �����: " << e << endl << "��������� ��������� �����: " << f << endl << "��������� ��������� �����: " << g << endl << "��������� ������� �����: " << h;
return 0;
}
