#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "������� ����� ������" << endl;
	cin >> a;
	switch (a)
	{
	case 1-2:
		cout << " ��� ����" << endl;
		break;
	case 3-5:
		cout << " ��� �����" << endl;
		break;
	case 6-8:
		cout << " ��� ����" << endl;
		break;
	case 9-11:
		cout << " ��� �����" << endl;
		break;
	case 12:
		cout << " ��� ����" << endl;
		break;
	default:
		cout << " ������ ������ �� ����������" << endl;
	}
	system("pause");
	return 0;
}