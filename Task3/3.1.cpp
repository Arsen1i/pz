#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c, d;
	cout << "������� ����� ������� a " << endl;
	cin >> a;
	cout << "������� ����� ������� b " << endl;
	cin >> b;
	c = a * b;
	d = a + b;
	cout << "������� �����" << c << endl;
	cout << "������� �����" << d << endl;
	for (int i = 0; i < a; ++i) 
	{
		for (int j = 0; j < b; ++j)
		{
			if (i == 0 || i == a - 1) 
				cout << "*";
			else if (j == 0 || j == b - 1) 
				cout << "*";
			else cout << " ";
		}
		cout << endl;
	}
	return 0;
}
