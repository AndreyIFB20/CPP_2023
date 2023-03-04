#include <iostream>
using namespace std;
int main()
{
setlocale(LC_ALL, "Russian");
int a = 13, b = 3; // Çàäàåì ïåðåìåííûå
cout << "a = " << a << endl << "b = " << b << endl;
int c = a / b; // Äåëèì íàöåëî
int d = a % b; // Íàõîäèì îñòàòîê îò äåëåíèÿ
cout << "Ðåçóëüòàò äåëåíèÿ íàöåëî: " << c << endl << "Îñòàòîê îò äåëåíèÿ: " << d;
return 0;
}
