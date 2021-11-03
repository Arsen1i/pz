#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "¬ведите номер мес€ца" << endl;
	cin >> a;
	switch (a)
	{
	case 1-2:
		cout << " Ёто зима" << endl;
		break;
	case 3-5:
		cout << " Ёто весна" << endl;
		break;
	case 6-8:
		cout << " Ёто лето" << endl;
		break;
	case 9-11:
		cout << " Ёто осень" << endl;
		break;
	case 12:
		cout << " Ёто зима" << endl;
		break;
	default:
		cout << " “акого мес€ца не существует" << endl;
	}
	system("pause");
	return 0;
}