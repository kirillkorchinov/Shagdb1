#pragma once
#ifndef SHAGDBSTRUCT
#define SHAGDBSTRUCT
#include <string>
const int N = 1;//constant defining the size of arrays 
using namespace std;
typedef struct Contact
{
	string address; // адрес
	string tel;           // телефон без +7 и без пробелов
};

typedef struct People
{
	string family;       // фамили€
	string name;         // им€
	Contact contact;       // контактна€ информаци€
};

typedef struct Date
{
	int day;              // день
	int month;            // мес€ц
	int year;             // год
};

typedef struct Visit
{
	Date date;            // день, мес€ц, год
	int status;           // статус посещени€ (0 - отсутствовал, 1 - присутствовал, 2 - болел)
};

typedef struct AcadPerf
{
	Date date;            // день, мес€ц, год
	int ac_status;        // оценка
};

typedef struct Facultet
{
	string name;           // название факультета
	string group;            // название группы
	bool actual;              // актуальность (числитс€ или нет)
};

typedef struct Student
{
	int id;                   // уникальный идентификатор
	People people;            // фамили€, им€, контактна€ информаци€ (адрес и телефон)
	Visit visit[N];           // посещаемость

	AcadPerf ac_perf[N];      // текуша€ успеваемость (оценка)
	AcadPerf homework[N];     // оценка за домашнюю работу
	AcadPerf test[N];         // оценка за контрольную работу
	AcadPerf lab[N];          // оценка за лабораторную
	float middle_ac;            // средневзвещенна€ оценка  

	Facultet facult;          // факультет
};

#endif





