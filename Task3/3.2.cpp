#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int fib[100];
	int n;
	cout << "введите n" << endl;
	cin >> n;
	fib[0] = 1;
	fib[1] = 1;
	for (int i = 2; i < n; ++i)
	{
		fib[i] = fib[i - 1] + fib[i - 2];

	}
	for (int i = 0; i < n; ++i)
	{
		cout<< fib[i]<< endl;

	}
	system("pause");
	return 0;
}