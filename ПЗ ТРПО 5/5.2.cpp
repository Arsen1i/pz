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

double foo(double x, double d, double s, double c)

{
	return  c = (char)(d + 48);
	return  x = x / 10;
	return  s = c + s;
}

int main()
{
	foo();

	system("pause");
	return 0;
}
