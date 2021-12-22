#include <iostream>
#include <windows.h>
#include <string>
#include <iomanip>
using namespace std;

struct Students {
	string first_name;
	string surname;
	string patronomic;
	struct {
		int day;
		int mounth;
		int year;
	}birth_date;
	double average_grade;
	string faculty;
	string speciality;
}stud[100];

struct Students buff;

enum myChoice {
	ENTER = 1,
	PRINT = 2,
	SORT = 3,
	MOSTCOMMON = 4,
	AVGAGE = 5,
	EXIT = 6
};
void printStruct();
void enterStruct();
void sortStruct();
void findTheMostCommonName();
void findAverageAge();
int countAge();
int InputInt();
double InputDouble();
int menu();

int counter;

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	counter = 0;
	while (true) {
		switch (menu())
		{
		case ENTER:
			enterStruct();
			break;
		case PRINT:
			printStruct();
			break;
		case SORT:
			sortStruct();
			break;
		case MOSTCOMMON:
			findTheMostCommonName();
			break;
		case AVGAGE:
			findAverageAge();
			break;
		case EXIT:
			return 0;
		default:
			cout << "ERROR" << endl;
			break;
		}
	}
}

int menu() {
	cout << "1)���� ������" << endl;
	cout << "2)����� ������" << endl;
	cout << "3)����������" << endl;
	cout << "4)����� ������ ���������������� �����" << endl;
	cout << "5)������� �������" << endl;
	cout << "6)�����" << endl;
	int choice = InputInt();
	return choice;
}

int InputInt() {
	int a;
	while (!(cin >> a) || (cin.peek() != '\n'))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "������!" << endl;
	}
	return a;
}

double InputDouble() {
	double a;
	while (!(cin >> a) || (cin.peek() != '\n'))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "������!" << endl;
	}
	return a;
}

void enterStruct() {
	cout << "������� �� ������� ������ ���������?" << endl;
	int x = InputInt();
	for (int i = counter; x > 0; i++, x--)
	{
		system("cls");
		cout << "������� �������" << endl;
		cin >> stud[i].surname;
		system("cls");
		cout << "������� ���" << endl;
		cin >> stud[i].first_name;
		system("cls");
		cout << "������� ��������" << endl;
		cin >> stud[i].patronomic;
		system("cls");
		cout << "������� ���������" << endl;
		rewind(stdin);
		getline(cin, stud[i].faculty);//���� ������ ����� ����������� ������ � ���������(���� ������������ ������ cin � ������ ������ � ���������, �� ��������� ������ ����� ����� �� �������) 
		system("cls");
		cout << "������� �������������" << endl;
		rewind(stdin);
		getline(cin, stud[i].speciality);
		system("cls");
		cout << "������� ������� ���� ��������" << endl;
		rewind(stdin);
		stud[i].average_grade = InputDouble();
		system("cls");
		cout << "������� ���� ��� ��������" << endl;
		cout << "���: ";
		stud[i].birth_date.year = InputInt();
		cout << "�����: ";
		stud[i].birth_date.mounth = InputInt();
		cout << "����: ";
		stud[i].birth_date.day = InputInt();
		counter++;
		system("cls");
		int choice = 0;
		cout << "���������� ����?(1-��||2-���)" << endl;
		while (choice != 1 && choice != 2) {
			choice = InputInt();
		}
		if (choice == 2) {
			x = 0;
		}
		system("cls");
	}
}

void sortStruct()
{
	cout << "���������� ��������� �� �������" << endl;
	for (int i = 0; i < counter; i++) {
		for (int j = 0; j < counter - 1; j++) {
			if (stud[j].average_grade > stud[j + 1].average_grade) {
				buff = stud[j]; // ������� �������������� ����������
				stud[j] = stud[j + 1]; // ������ �������
				stud[j + 1] = buff; // �������� ���������
			}
		}
	}
}

void findTheMostCommonName()
{
	string buff, mostCommon;
	int maxCount = 0, count = 0;
	for (int i = 0; i < counter; i++)
	{
		buff = stud[i].first_name;
		for (int j = i; j < counter; j++)
		{
			if (stud[i].first_name == stud[j].first_name) {
				count++;
				if (count > maxCount) {
					mostCommon = buff;
				}
			}
		}
	}
	cout << "����� ���������������� ���: " << mostCommon << endl;
	system("pause");
}


void findAverageAge()
{
	double AvgAge = 0;
	for (int i = 0; i < counter; i++)
	{
		//AvgAge+=countAge(stud[i].birth_date.year, stud[i].birth_date.mounth, stud[i].birth_date.day);
		AvgAge += (2021 - stud[i].birth_date.year);
	}
	AvgAge /= counter;
	cout << "������� ������� ���������: " << AvgAge << endl;
	system("pause");
}

int countAge(int year, int mounth, int day) {
	return 0;
}

void printStruct() {
	if (counter)
	{
		for (int i = 0; i < counter; i++)
		{
			cout << stud[i].surname << " " << stud[i].first_name[0] << ". " << stud[i].patronomic[0] << "." << stud[i].birth_date.year << "." << stud[i].birth_date.mounth << "." << stud[i].birth_date.day << ", " << stud[i].faculty << ", " << stud[i].speciality << ", " << stud[i].average_grade << endl;
		}
	}
	else
	{
		cout << "��������� ���." << endl;
	}
	system("pause");
}