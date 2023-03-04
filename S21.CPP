#include <iostream>
#include <fstream>
using namespace std;
int main()
{
setlocale(LC_ALL, "Russian");
int A, B, C;
cout << "¬ведите число A = ";
cin >> A;
cout << "„исло B должно быть больше числа A" << endl << "¬ведите число B = ";
cin  >> B;
while (B < A)
{
    cout << "„исло B должно быть больше числа A" << endl;
    cin >> B;
}
ofstream output("output.txt");
for (int i = A; i <= B; i++)
    output << i * 3 << endl;
return 0;
}
