#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, an = 0, bn = 0;
    cout << "Введите a  "; 
    cin >> a;
    cout << "Введите b  "; 
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
        cout << " Это простые числа";
    if (an > 2) 
        cout << "a не является простым числом";
    if (bn > 2)
        cout << "b не является простым числом ";
    while (a != b)  
    {
        if (a > b) a = a - b;
        else b = b - a;
    }
    cout << "НОД равен  " << a << endl;
    return 0;
}
