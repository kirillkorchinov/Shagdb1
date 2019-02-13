#pragma once
#ifndef SHAGDBFUNC
#define SHAGDBFUNC

#include "ShagDBstruct.h"
#include <iostream>

using namespace std;




void InputStudentInfo(Student *stud)
{
	cout << "������� ������� ��������: " << endl;
	cin >> stud->people.family;
	cout << endl;
	cout << "������� ��� ��������: " << endl;
	cin >> stud->people.name;
	cout << endl;
	cout << "������� ����� ��������: " << endl;
	cin >> stud->people.contact.address;
	cout << endl;
	cout << "������� ������� ��������: " << endl;
	cin >> stud->people.contact.tel;
	cout << endl;
}
void InputStudentVisit(Student *stud, int n)
{
	for (int j = 0; j < n; j++)
	{
		cout << "������� ���� ��������� ������� ���������: " << endl;
		cout << "����: " << endl;
		cin >> stud->visit[j].date.day;
		cout << endl;
		cout << "�����: " << endl;
		cin >> stud->visit[j].date.month;
		cout << endl;
		cout << "���: " << endl;
		cin >> stud->visit[j].date.year;
		cout << endl;

		do
		{
			cout << "������� ������ ��������� �������� (0 - ������������, 1 - �������������, 2 - �����): " << endl;
			cin >> stud->visit[j].status;
			cout << endl;
		} while (stud->visit[j].status < 0 || stud->visit[j].status > 2);

	}
}
void InputStudentAc(Student *stud, int n)
{
	for (int j = 0; j < n; j++)
	{
		cout << "������� ���� ���������� ������ �� ������ � ������ ��������: " << endl;
		cout << "����: " << endl;
		cin >> stud->ac_perf[j].date.day;
		cout << endl;
		cout << "�����: " << endl;
		cin >> stud->ac_perf[j].date.month;
		cout << endl;
		cout << "���: " << endl;
		cin >> stud->ac_perf[j].date.year;
		cout << endl;
		cout << "������� ������ �������� �� ������ � ������: " << endl;
		cin >> stud->ac_perf[j].ac_status;
		cout << endl;
	}
}
void InputStudentAcHome(Student *stud, int n)
{
	for (int j = 0; j < n; j++)
	{
		cout << "������� ���� ������ �� �������� ������ ��������: " << endl;
		cout << "����: " << endl;
		cin >> stud->homework[j].date.day;
		cout << endl;
		cout << "�����: " << endl;
		cin >> stud->homework[j].date.month;
		cout << endl;
		cout << "���: " << endl;
		cin >> stud->homework[j].date.year;
		cout << endl;
		cout << "������� ������ �� �������� ������ ��������: " << endl;
		cin >> stud->homework[j].ac_status;
		cout << endl;
	}
}
void InputStudentAcLab(Student *stud, int n)
{
	for (int j = 0; j < n; j++)
	{
		cout << "������� ���� ������ �� ������������ ������ ��������: " << endl;
		cout << "����: " << endl;
		cin >> stud->lab[j].date.day;
		cout << endl;
		cout << "�����: " << endl;
		cin >> stud->lab[j].date.month;
		cout << endl;
		cout << "���: " << endl;
		cin >> stud->lab[j].date.year;
		cout << endl;
		cout << "������� ������ �� ������������ ������ ��������: " << endl;
		cin >> stud->lab[j].ac_status;
		cout << endl;
	}
}
void InputStudentAcTest(Student *stud, int n)
{
	for (int j = 0; j < n; j++)
	{
		cout << "������� ���� ������ �� ����������� ������ ��������: " << endl;
		cout << "����: " << endl;
		cin >> stud->test[j].date.day;
		cout << endl;
		cout << "�����: " << endl;
		cin >> stud->test[j].date.month;
		cout << endl;
		cout << "���: " << endl;
		cin >> stud->test[j].date.year;
		cout << endl;
		cout << "������� ������ �� ����������� ������ ��������: " << endl;
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
	cout << "������� �������� ���������� ��������: " << endl;
	cin >> stud->facult.name;
	cout << endl;
	cout << "������� �������� ������ ��������: " << endl;
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
	cout << "����� ��������: " << stud->id << endl;
	cout << "������� ��������: " << stud->people.family << endl;
	cout << "��� ��������: " << stud->people.name << endl;
	cout << "����� ��������: " << stud->people.contact.address << endl;
	cout << "������� ��������: " << "+7 " << stud->people.contact.tel << endl;
	cout << "��������� ��������: " << stud->facult.name << endl;
	cout << "����� ������ ��������: " << stud->facult.group << endl;
	for (int j = 0; j < N; j++)
	{
		cout << "���� ��������� ��������: " << stud->visit[j].date.day << "." << stud->visit[j].date.month << "." << stud->visit[j].date.year << endl;
	}
	for (int j = 0; j < N; j++)
	{
		cout << "������ ��������� �������� (0 - ������������, 1 - �������������, 2 - �����): " << stud->visit[j].status << endl;
	}
	for (int j = 0; j < N; j++)
	{
		cout << "���� ������ �� ������ � ������: " << stud->ac_perf[j].date.day << "." << stud->ac_perf[j].date.month << "." << stud->ac_perf[j].date.year << endl;
	}
	for (int j = 0; j < N; j++)
	{
		cout << "������ �������� �� ������ � ������: " << stud->ac_perf[j].ac_status << endl;
	}
	for (int j = 0; j < N; j++)
	{
		cout << "���� ������ �� �������� ������ ��������: " << stud->homework[j].date.day << "." << stud->homework[j].date.month << "." << stud->homework[j].date.year << endl;
	}
	for (int j = 0; j < N; j++)
	{
		cout << "������ �� �������� ������ ��������: " << stud->homework[j].ac_status << endl;
	}
	for (int j = 0; j < N; j++)
	{
		cout << "���� ������ �� ������������ ������ ��������: " << stud->lab[j].date.day << "." << stud->lab[j].date.month << "." << stud->lab[j].date.year << endl;
	}
	for (int j = 0; j < N; j++)
	{
		cout << "������ �� ������������ ������ ��������: " << stud->lab[j].ac_status << endl;
	}
	for (int j = 0; j < N; j++)
	{
		cout << "���� ������ �� ����������� ������ ��������: " << stud->test[j].date.day << "." << stud->test[j].date.month << "." << stud->test[j].date.year << endl;
	}
	for (int j = 0; j < N; j++)
	{
		cout << "������ �� ����������� ������ ��������: " << stud->test[j].ac_status << endl;
	}
	cout << "������� ������ ��������: " << stud->middle_ac << endl;
	cout << endl;

*/









#endif