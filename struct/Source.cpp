#include <iostream>
#include <string>
using namespace std;

struct worker
{
	string Surname;
	int Experience;
	double HourlySalary;
	int  HoursWorked;
};


void DataEntry(worker &data)
{
	cout << "������� ������� ���������: ";
	cin >> data.Surname;
	cout << "������� ���� ������ (����-�� ���): ";
	cin >> data.Experience;
	cout << "������� ������� �� ���������: ";
	cin >> data.HourlySalary;
	cout << "������� ����-�� ������������ �����: ";
	cin >> data.HoursWorked;
}


void SalaryCalculation(worker &data)
{
	double prize;
	if (data.Experience < 1)
	{
		prize = 0;
	}
	else if (data.Experience >= 1 && data.Experience < 3)
	{
		prize = 0.05;
	}
	else if (data.Experience >= 3 && data.Experience < 5)
	{
		prize = 0.08;
	}
	else if (data.Experience >= 5)
	{
		prize = 0.15;
	}

	cout << "�� �� ������������ �����: " << data.HourlySalary * data.HourlySalary;
	cout << "\n��������� ������ �� ���� ������: " << prize * data.HourlySalary;
}


void PrintWorkerInfo(worker& data)
{
	cout << "������� ���������: " << data.Surname;
	cout << "\n���� ������ (����-�� ���): " << data.Experience;
	cout << "\n������� �� ���������: " << data.HourlySalary;
	cout << "\n����-�� ������������ �����: " << data.HoursWorked << '\n';
	SalaryCalculation(data);
}


int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	
	worker h1;
	DataEntry(h1);
	PrintWorkerInfo(h1);

	
	
	
	return 0;
}