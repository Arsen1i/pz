#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main()
{
	srand(time(0));
	setlocale(0, "rus");
	int k, l, m, n;
	cout << "Введите число строк первой матрицы:  ";       cin >> n;

	cout << "Введите число столбцов первой матрицы:  ";    cin >> k;

	cout << "Введите число строк второй матрицы:  ";       cin >> m;

	cout << "Введите число столбцов первой матрицы:  ";    cin >> l;
	if (m != k)
	{
		cout << "Ошибка";
		return 0;
	}

	cout << "Первая матрица: " << endl;

	int** matrix1 = new int* [n];
	for (int i = 0; i < n; i++)
	{
		matrix1[i] = new int[k];
		for (int j = 0; j < k; j++) {
			matrix1[i][j] = rand() % 101 - 50;
			cout << matrix1[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Вторая матрица: " << endl;
	int** matrix2 = new int* [m];
	for (int i = 0; i < m; i++)
	{
		matrix2[i] = new int[l];
		for (int j = 0; j < l; j++)
		{
			matrix2[i][j] = rand() % 101 - 50;
			cout << matrix2[i][j] << " ";
		}
		cout << endl;
	}
	int** multiplication = new int* [n];
	cout << "Перемноженная матрица: " << endl;
	for (int i = 0; i < n; i++)
	{
		multiplication[i] = new int[l];
		for (int j = 0; j < l; j++)
		{
			multiplication[i][j] = 0;
			for (int l = 0; l < k; l++)
			{
				multiplication[i][j] += matrix1[i][l] * matrix2[l][j];
			}
			cout << multiplication[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		delete[] matrix1[i];
	}
	delete[] matrix1;

	for (int i = 0; i < k; i++)
	{
		delete[] matrix2[i];
	}
	delete[] matrix2;

	for (int i = 0; i < n; i++)
	{
		delete[] multiplication[i];
	}
	delete[] multiplication;
	return 0;
}
