#pragma once
#ifndef SHAGDBSTRUCT
#define SHAGDBSTRUCT
#include <string>
const int N = 1;//constant defining the size of arrays 
using namespace std;
typedef struct Contact
{
	string address; // �����
	string tel;           // ������� ��� +7 � ��� ��������
};

typedef struct People
{
	string family;       // �������
	string name;         // ���
	Contact contact;       // ���������� ����������
};

typedef struct Date
{
	int day;              // ����
	int month;            // �����
	int year;             // ���
};

typedef struct Visit
{
	Date date;            // ����, �����, ���
	int status;           // ������ ��������� (0 - ������������, 1 - �������������, 2 - �����)
};

typedef struct AcadPerf
{
	Date date;            // ����, �����, ���
	int ac_status;        // ������
};

typedef struct Facultet
{
	string name;           // �������� ����������
	string group;            // �������� ������
	bool actual;              // ������������ (�������� ��� ���)
};

typedef struct Student
{
	int id;                   // ���������� �������������
	People people;            // �������, ���, ���������� ���������� (����� � �������)
	Visit visit[N];           // ������������

	AcadPerf ac_perf[N];      // ������� ������������ (������)
	AcadPerf homework[N];     // ������ �� �������� ������
	AcadPerf test[N];         // ������ �� ����������� ������
	AcadPerf lab[N];          // ������ �� ������������
	float middle_ac;            // ���������������� ������  

	Facultet facult;          // ���������
};

#endif





