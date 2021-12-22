#include <iostream>
#include <ctime>
using namespace std;

void exercise_one(int number1 = 456, int number2 = 456, string text = " ", char solution = 0)
{

	while (number2 != 0)
	{

		number1 = number2 % 10;
		number2 = number2 / 10;
		solution = (char)(number1 + 48);
		text = solution + text;

	}
	std::cout << text << endl;
}

double exercise_one(double number1, double number2, double text, double solution)

{
	return  solution = (char)(number1 + 48);
	return  number2 = number2 / 10;
	return  text = solution + text;

}


void exercise_two()
{
	setlocale(LC_ALL, "RUS");

	int massive[] = { 1, 1 ,6 ,8 ,9 };
	int size = 5;
	int massive2[5];
	int count = 0;

	for (int i = 0; i < size; i++)
	{

		for (int j = 0; j < size; j++)
		{
			if (i != j)
			{
				if (massive[i] == massive[j])
				{
					count = 1;

				}
			}
		}

		if (count == 1)
		{
			cout << massive[i] << " (Встречается два раза)     ";
		}
		else
		{
			cout << massive[i] << " ";
		}
		count = 0;
	}

	for (int i = 0; i < size; i++)
	{
		massive2[i] = massive[i];
	}

	cout << endl;

	for (int i = 0; i < size; i++)
	{
		//cout << m2[i] << " ";
	}
}

double exercise_two(double massive[], double size, double massive2, double count)

{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i != j)
			{
				if (massive[i] == massive[j])
				{
					return	count = 1;
				}
			}
		}
	}
}


int main()
{
	exercise_one();
	exercise_two();
	system("pause");
	return 0;
}