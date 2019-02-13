/*
*
* Учебный проект по созданию БД учеников и студентов на C++ в консольном исполнении
*
* (c) Компьютерная академия ШАГ. Воронеж
* (с) группа
* Версия 0.0
*
*/

#include "pch.h"
#include "ShagDBfunc.h"
#include "ShagDBfile.h"


Student student_shag[N];
/*void InputStudentInfo(Student *stud);		// ввод информации о студентах
void InputStudentVisit(Student *stud, int n); //ввод посещения студента
void InputStudentAc(Student *stud, int n); //ввод информации об оценках на уроке
void InputStudentAcHome(Student *stud, int n); //ввод информации об оценках за домашнюю работу
void InputStudentAcLab(Student *stud, int n); //ввод информации об оценках за лабораторную работу
void InputStudentAcTest(Student *stud, int n); //ввод информации об оценках за контрольную работу
void CalcStudentMiddleAc(Student *stud, int m); //расчет средней оценки
void InputStudentAcperf(Student *stud, int m);
void InputStudentFacultet(Student *stud); //ввод информации о факультете
void OtputStudentInfo(Student *stud);*/

int main()
{
	setlocale(LC_ALL, "rus");


	for (int i = 0; i < N; i++)
	{
		student_shag[i].id = i + 1;

		InputStudentInfo(&student_shag[i]);

		InputStudentVisit(&student_shag[i], N);

		InputStudentAcperf(&student_shag[i], N);

		InputStudentFacultet(&student_shag[i]);
	}
	for (int i = 0; i < N; i++)
	{
		OtputStudentInfo(&student_shag[i]);
		StudentOutputFile(student_shag[i]);
	}
	
	/*int choice1, choice2;
	cout << " Choose the option you want to use according to its number " << endl;
	cout << " 1. Enter information " << endl << "		1.1 Enter with keyboard " << endl << "		1.2 Import to file " << endl << endl;
	cout << " 2. Output information " << endl << "		2.1 On screen " << endl << "		2.2 Export to file " << endl << endl;
	cout << " 3. Delete all " << endl << endl;
	*/
}
