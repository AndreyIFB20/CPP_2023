#include <iostream>
using namespace std;
int main()
{
int a = 5; // ���������� ������ ����
float b = 2.5; // ���������� � ��������� ������
char c = 'C'; // ���������� ����������
bool d = true; // ���������� ����������

cout << "a = " << a << endl << "b = " << b << endl << "c = " << c << endl << "d = " << d << endl;
float e = a + b; // ��������
float f = a - b; // ���������
float g = a * b; // ���������
float h = a / b; // �������

cout << "Slojenie ravno: " << e << endl << "vichitanie ravno: " << f << endl << "ymnojenie ravno: " << g << endl << "delenie ravno: " << h;
return 0;
}
