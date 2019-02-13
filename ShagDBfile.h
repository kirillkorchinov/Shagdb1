#pragma once
#ifndef SHAGDBFILE
#define SHAGDBFILE
#include<fstream>
#include <iostream>
#include <string>
#include "ShagDBfunc.h"
using namespace std;

void StudentOutputFile(Student stud)
{
	ofstream stud_info("Student_Shag.db");

	if (!stud_info.is_open())
	{
		cout << "error";
	}
	else
	{

		stud_info << stud.id << "|" << stud.people.family << "|";
		stud_info << stud.people.name << "|" << stud.people.contact.address << "|";
		stud_info << stud.people.contact.tel << "|" << stud.middle_ac << "|";
		stud_info << stud.facult.group << "|" << stud.facult.name << "|" << stud.facult.actual; // endl означает переход к оценкам студента
		stud_info << endl;
		stud_info << stud.ac_perf->date.day << "." << stud.ac_perf->date.month << "." << stud.ac_perf->date.year << "|";
		stud_info << stud.ac_perf->ac_status;
		stud_info << stud.homework->date.day << "." << stud.homework->date.month << "." << stud.homework->date.year << "|";
		stud_info << stud.homework->ac_status;
		stud_info << stud.lab->date.day << "." << stud.lab->date.month << "." << stud.lab->date.year << "|";
		stud_info << stud.lab->ac_status;
		stud_info << stud.test->date.day << "." << stud.test->date.month << "." << stud.test->date.year << "|";
		stud_info << stud.test->ac_status << ";" << endl; // тут endl для перехода к новому студенту , т е все четные строки - оценки
		
		stud_info.close();

	}

}


void ChangingFileString(Student *stud)
{
	ofstream stud_info("Student_Shag.db", ios_base::out);

	


	string buffer, sub_str, str1,str2,str3,str4,str5,str6,str7,str8,str9,str10,str11,str12,str13,str14,str15,str16,str17,str18;
	getline(stud_info, buffer);
	int pos = buffer.find("|");
	str1 = buffer.substr(0,pos);
	sub_str = buffer.substr(pos+1);
	int pos = sub_str.find("|");
	str2 = sub_str.substr(0, pos);
	str3 = sub_str.substr(pos + 1);
	int pos = str3.find("|");
	str4 = str3.substr(0, pos);
	str5 = str3.substr(pos + 1);
	int pos = str5.find("|");
	str6 = str5.substr(0, pos);
	str7 = str5.substr(pos + 1);
	int pos = str7.find("|");
	str8 = str7.substr(0, pos);
	str9 = str7.substr(pos + 1);
	int pos = str9.find("|");
	str10 = str9.substr(0, pos);
	str11 = str9.substr(pos + 1);
	int pos = str11.find("|");
	str12 = str11.substr(0, pos);
	str13 = str11.substr(pos + 1);
	int pos = str13.find("|");
	str14 = str13.substr(0, pos);
	str15 = str13.substr(pos + 1);
	int pos = str15.find("|");
	str16 = str15.substr(0, pos);
	str17 = str15.substr(pos + 1);

	stud->id = atoi(str1.c_str());
	stud->people.family = str2;
	stud->people.name = str4;
	stud->people.contact.address = str6;
	stud->people.contact.tel = str8;
	stud->middle_ac = stof(str10);
	stud->facult.group = str12;
	stud->facult.name = str14;
	
		

	
	stud_info.close();



}





void StudentVisit(Visit Visit)
{
	ofstream file_visit("Student_visit_info.db", ios_base::app);
	if (!file_visit.is_open())
	{
		cout << "error";

	}
	else 
	{
		
	}
}
#endif
