#include <iostream>
#include <ctime>
#include <algorithm>
#include <vector>

using namespace std;


void print_array(vector<int>& array)
{
	for (int num : array)
		cout << num << " ";
	cout << endl << endl;
}

void remove_repotitions(vector<int>& array)
{
	for (int i = 0; i < array.size(); i++)
	{
		for (int j = i + 1; j < array.size(); j++)
		{
			if (array[i] == array[j])
			{
				array.erase(array.begin() + j);
				j--;
			}
		}
	}
}
double array_median(vector<int>& array)
{
	sort(array.begin(), array.end());
	if (array.size() % 2 == 0)
	{
		return (double)((long long)array[array.size() / 2] + array[array.size() / 2]);
	}
	else
	{
		return array[array.size() / 2];

	}
}
int main()
{
	setlocale(LC_ALL, "RUS");
	int length;
	cout << " ¬ведите длину:" << endl;
	cin >> length;
	vector<int> arr(length);
	srand(time(nullptr));
	for (int i = 0; i < length; i++)
	{
		arr[i] = rand() % 21 - 10;
	}
	print_array(arr);
	remove_repotitions(arr);
	print_array(arr);
	cout << array_median(arr);

}
