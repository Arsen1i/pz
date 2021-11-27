#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int m[] = { 1, 1 ,6 ,8 ,9 };
	int n = 5;
	int m2[5];
	int count = 0;
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