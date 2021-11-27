#include <iostream>
#include <ctime>
using namespace std;

void foo()
{
	int d, x = 123;
	string s = " ";
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

void foo1()
{


	int a, x = 456;
	string s = " ";
	char c = 0;

	while (x != 0)
	{
		a = x % 10;
		x = x / 10;
		c = (char)(a + 48);
		s = c + s;
	}

	cout << s << endl;
}

double foo1(double x, double a, double s, double c)

{
	return  c = (char)(a + 48);
	return  x = x / 10;
	return  s = c + s;
}


int main()
{
	setlocale(LC_ALL, "RUS");
	int m[] = { 1, 1 ,6 ,8 ,9 };
	int n = 5;
	int m2[5];
	int count = 0;

	foo();
	foo1();


	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j < n; j++)
		{
			if (i != j)
			{
				if (m[i] == m[j])
				{
					count = 1;

				}
			}
		}

		if (count == 1)
		{
			cout << m[i] << " (Встречается два раза)     ";
		}
		else
		{
			cout << m[i] << " ";
		}
		count = 0;
	}

	for (int i = 0; i < n; i++)
	{
		m2[i] = m[i];
	}

	cout << endl;

	for (int i = 0; i < n; i++)
	{
		//cout << m2[i] << " ";
	}
}