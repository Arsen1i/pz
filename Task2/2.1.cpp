
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int a, b, c, d;
	cout << " ������� ����������� �����:" << endl;
	cin >> d;

	if (d % 2 == 0)
	{
		cout << " ������ �����: " << endl;
	}

	else
	{
		cout << " �������� �����: " << endl;
	}
	a = d % 10;
	b = d / 10 % 10;
	c = d / 100;
	cout << (a + b + c) / 3 << endl;

	system("pause");
	return 0;
}