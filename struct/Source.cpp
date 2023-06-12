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
	cout << "Введите Фамилию работника: ";
	cin >> data.Surname;
	cout << "Введите стаж работы (колл-во лет): ";
	cin >> data.Experience;
	cout << "Введите часовую ЗП работника: ";
	cin >> data.HourlySalary;
	cout << "Введите колл-во отработанных часов: ";
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

	cout << "ЗП за отработанное время: " << data.HourlySalary * data.HourlySalary;
	cout << "\nПочасовая премия за стаж работы: " << prize * data.HourlySalary;
}


void PrintWorkerInfo(worker& data)
{
	cout << "Фамилия работника: " << data.Surname;
	cout << "\nСтаж работы (колл-во лет): " << data.Experience;
	cout << "\nЧасовая ЗП работника: " << data.HourlySalary;
	cout << "\nКолл-во отработанных часов: " << data.HoursWorked << '\n';
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