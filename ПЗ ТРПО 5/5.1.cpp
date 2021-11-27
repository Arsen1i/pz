#include <iostream>
#include <ctime>
using namespace std;

void foo()
{
	int d, x = 123;
	string s = "";
	char c = 0;
	while (x != 0)
	{
		d = x % 10;
		x = x / 10;
		c = (char)(d + 48);
		s = c + s;

	}
	cout << s << endl;
}

int main()
{
	foo();

	system("pause");
	return 0;
}