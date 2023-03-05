#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
setlocale(LC_ALL, "Russian");
cout << "Введите слово: ";
char* s;
cin >> s;
int l;
l = strlen(s);
for (int i = 0; i < l; i++)
{
    s[i]++;
}
cout << s << endl;
return 0;
}
