#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int n, a = 2;
    cin >> n;
    while (n > 0)
    {
        cout << n % a ;
        n /= a;

    }
    system("pause");
    return 0;
}