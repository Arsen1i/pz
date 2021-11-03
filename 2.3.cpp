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
	case 1:
		cout << " Ёто €нварь" << endl;
		break;
	case 2:
		cout << " Ёто февраль" << endl;
		break;
	case 3:
		cout << " Ёто март" << endl;
		break;
	case 4:
		cout << " Ёто апрель" << endl;
		break;
	case 5:
		cout << " Ёто май" << endl;
		break;
	case 6:
		cout << " Ёто июнь" << endl;
		break;
	case 7:
		cout << " Ёто июль" << endl;
		break;
	case 8:
		cout << " Ёто август" << endl;
		break;
	case 9:
		cout << " Ёто сент€брь" << endl;
		break;
	case 10:
		cout << " Ёто окт€брь" << endl;
		break;
	case 11:
		cout << " Ёто но€брь" << endl;
		break;
	case 12:
		cout << " Ёто декабрь" << endl;
		break;
	default:
		cout << " “акого мес€ца не существует" << endl;
	}
	system("pause");
	return 0;
}