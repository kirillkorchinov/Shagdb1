#pragma once
#ifndef SHAGDBFUNC
#define SHAGDBFUNC

#include "ShagDBstruct.h"
#include <iostream>

using namespace std;




void InputStudentInfo(Student *stud)
{
	cout << "Введите фамилию студента: " << endl;
	cin >> stud->people.family;
	cout << endl;
	cout << "Введите имя студента: " << endl;
	cin >> stud->people.name;
	cout << endl;
	cout << "Введите адрес студента: " << endl;
	cin >> stud->people.contact.address;
	cout << endl;
	cout << "Введите телефон студента: " << endl;
	cin >> stud->people.contact.tel;
	cout << endl;
}
void InputStudentVisit(Student *stud, int n)
{
	for (int j = 0; j < n; j++)
	{
		cout << "Введите дату посещения занятия студентом: " << endl;
		cout << "День: " << endl;
		cin >> stud->visit[j].date.day;
		cout << endl;
		cout << "Месяц: " << endl;
		cin >> stud->visit[j].date.month;
		cout << endl;
		cout << "Год: " << endl;
		cin >> stud->visit[j].date.year;
		cout << endl;

		do
		{
			cout << "Введите статус посещения студента (0 - отсутствовал, 1 - присутствовал, 2 - болел): " << endl;
			cin >> stud->visit[j].status;
			cout << endl;
		} while (stud->visit[j].status < 0 || stud->visit[j].status > 2);

	}
}
void InputStudentAc(Student *stud, int n)
{
	for (int j = 0; j < n; j++)
	{
		cout << "Введите дату полученной оценки за работу в классе студента: " << endl;
		cout << "День: " << endl;
		cin >> stud->ac_perf[j].date.day;
		cout << endl;
		cout << "Месяц: " << endl;
		cin >> stud->ac_perf[j].date.month;
		cout << endl;
		cout << "Год: " << endl;
		cin >> stud->ac_perf[j].date.year;
		cout << endl;
		cout << "Введите оценку студента за работу в классе: " << endl;
		cin >> stud->ac_perf[j].ac_status;
		cout << endl;
	}
}
void InputStudentAcHome(Student *stud, int n)
{
	for (int j = 0; j < n; j++)
	{
		cout << "Введите дату оценки за домашнюю работу студента: " << endl;
		cout << "День: " << endl;
		cin >> stud->homework[j].date.day;
		cout << endl;
		cout << "Месяц: " << endl;
		cin >> stud->homework[j].date.month;
		cout << endl;
		cout << "Год: " << endl;
		cin >> stud->homework[j].date.year;
		cout << endl;
		cout << "Введите оценку за домашнюю работу студента: " << endl;
		cin >> stud->homework[j].ac_status;
		cout << endl;
	}
}
void InputStudentAcLab(Student *stud, int n)
{
	for (int j = 0; j < n; j++)
	{
		cout << "Введите дату оценки за лабораторную работу студента: " << endl;
		cout << "День: " << endl;
		cin >> stud->lab[j].date.day;
		cout << endl;
		cout << "Месяц: " << endl;
		cin >> stud->lab[j].date.month;
		cout << endl;
		cout << "Год: " << endl;
		cin >> stud->lab[j].date.year;
		cout << endl;
		cout << "Введите оценку за лабораторную работу студента: " << endl;
		cin >> stud->lab[j].ac_status;
		cout << endl;
	}
}
void InputStudentAcTest(Student *stud, int n)
{
	for (int j = 0; j < n; j++)
	{
		cout << "Введите дату оценки за контрольную работу студента: " << endl;
		cout << "День: " << endl;
		cin >> stud->test[j].date.day;
		cout << endl;
		cout << "Месяц: " << endl;
		cin >> stud->test[j].date.month;
		cout << endl;
		cout << "Год: " << endl;
		cin >> stud->test[j].date.year;
		cout << endl;
		cout << "Введите оценку за контрольную работу студента: " << endl;
		cin >> stud->test[j].ac_status;
		cout << endl;
	}
}

void CalcStudentMiddleAc(Student *stud, int m)
{
	int n = 0;
	int middle = 0;
	for (int k = 0; k < m; k++)
	{
		if (stud->ac_perf[k].ac_status != 0)
		{
			middle = middle + stud->ac_perf[k].ac_status;
			n++;
		}
		if (stud->homework[k].ac_status != 0)
		{
			middle = middle + stud->homework[k].ac_status;
			n++;
		}
		if (stud->lab[k].ac_status != 0)
		{
			middle = middle + stud->lab[k].ac_status;
			n++;
		}
		if (stud->test[k].ac_status != 0)
		{
			middle = middle + stud->test[k].ac_status;
			n++;
		}
	}

	stud->middle_ac = (float)middle / n;
}
void InputStudentAcperf(Student *stud, int m)
{
	InputStudentAc(stud, m);

	InputStudentAcHome(stud, m);

	InputStudentAcTest(stud, m);

	InputStudentAcLab(stud, m);

	CalcStudentMiddleAc(stud, m);
}

void InputStudentFacultet(Student *stud)
{
	cout << "Введите название факультета студента: " << endl;
	cin >> stud->facult.name;
	cout << endl;
	cout << "Введите название группы студента: " << endl;
	cin >> stud->facult.group;
	cout << endl;

	stud->facult.actual = true;
	cout << endl;
}
void OtputStudentInfo(Student *stud)
{
	stud->id = atoi(str1);
}


/*
	cout << "Номер студента: " << stud->id << endl;
	cout << "Фамилия студента: " << stud->people.family << endl;
	cout << "Имя студента: " << stud->people.name << endl;
	cout << "Адрес студента: " << stud->people.contact.address << endl;
	cout << "Телефон студента: " << "+7 " << stud->people.contact.tel << endl;
	cout << "Факультет студента: " << stud->facult.name << endl;
	cout << "Номер группы студента: " << stud->facult.group << endl;
	for (int j = 0; j < N; j++)
	{
		cout << "Дата посещения студента: " << stud->visit[j].date.day << "." << stud->visit[j].date.month << "." << stud->visit[j].date.year << endl;
	}
	for (int j = 0; j < N; j++)
	{
		cout << "Статус посещения студента (0 - отсутствовал, 1 - присутствовал, 2 - болел): " << stud->visit[j].status << endl;
	}
	for (int j = 0; j < N; j++)
	{
		cout << "Дата оценки за работу в классе: " << stud->ac_perf[j].date.day << "." << stud->ac_perf[j].date.month << "." << stud->ac_perf[j].date.year << endl;
	}
	for (int j = 0; j < N; j++)
	{
		cout << "Оценка студента за работу в классе: " << stud->ac_perf[j].ac_status << endl;
	}
	for (int j = 0; j < N; j++)
	{
		cout << "Дата оценки за домашнюю работу студента: " << stud->homework[j].date.day << "." << stud->homework[j].date.month << "." << stud->homework[j].date.year << endl;
	}
	for (int j = 0; j < N; j++)
	{
		cout << "Оценка за домашнюю работу студента: " << stud->homework[j].ac_status << endl;
	}
	for (int j = 0; j < N; j++)
	{
		cout << "Дата оценки за лабораторную работу студента: " << stud->lab[j].date.day << "." << stud->lab[j].date.month << "." << stud->lab[j].date.year << endl;
	}
	for (int j = 0; j < N; j++)
	{
		cout << "Оценка за лабораторную работу студента: " << stud->lab[j].ac_status << endl;
	}
	for (int j = 0; j < N; j++)
	{
		cout << "Дата оценки за контрольную работу студента: " << stud->test[j].date.day << "." << stud->test[j].date.month << "." << stud->test[j].date.year << endl;
	}
	for (int j = 0; j < N; j++)
	{
		cout << "Оценка за контрольную работу студента: " << stud->test[j].ac_status << endl;
	}
	cout << "Средняя оценка студента: " << stud->middle_ac << endl;
	cout << endl;

*/









#endif