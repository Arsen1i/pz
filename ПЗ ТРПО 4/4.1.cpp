#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	int n, k, sum = 0;

	cout << "������� ���������� �����: " << endl;

	cin >> n;

	cout << "������� ���������� ��������: " << endl;

	cin >> k;

	int** dynamicArray = new int* [n];

	for (int i = 0; i < n; i++)
	{
		dynamicArray[i] = new int[k];

		for (int j = 0; j < k; j++)
		{
			dynamicArray[i][j] = rand() % 10;

			cout << dynamicArray[i][j] << " ";
			if (j == k - 1)
			{
				cout << endl;
			}

			sum += dynamicArray[i][j];
		}


	}
	double average_value = (double)sum / (n * k);

	cout << "����� �����: " << sum << endl;

	cout << "������� �������� " << average_value << endl;

	for (int i = 0; i < n; ++i)
	{
		delete[] dynamicArray[i];
	}
	delete[] dynamicArray;

	system("pause");
	return 0;
}