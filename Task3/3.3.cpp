#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, an = 0, bn = 0;
    cout << "������� a  "; 
    cin >> a;
    cout << "������� b  "; 
    cin >> b;
    for (int i = 1;i <= a;i++)
    {
        if (a % i == 0)
            an++;
    }
    for (int t = 1;t <= b;t++)
    {
        if (b % t == 0)
            bn++;
    }

    if (an == 2 and bn == 2)
        cout << " ��� ������� �����";
    if (an > 2) 
        cout << "a �� �������� ������� ������";
    if (bn > 2)
        cout << "b �� �������� ������� ������ ";
    while (a != b)  
    {
        if (a > b) a = a - b;
        else b = b - a;
    }
    cout << "��� �����  " << a << endl;
    return 0;
}
