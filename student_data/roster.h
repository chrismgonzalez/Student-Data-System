#pragma once
#ifndef ROSTER_H
#define ROSTER_H

#include <array>
#include "student.h"

//student data
const string studentData[] = {
		"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
		"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
		"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
		"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
		"A5,Chris,Gonzalez,cmgonza89@gmail.com,29,20,25,30,SOFTWARE",
};

class Roster {
public:
	Roster();

	virtual ~Roster();

	void printAll();
	void add(string studentId, string firstName, string lastName, string emailAddress, int age, int day0, int day1, int day2, Degree);
	void remove(string studentId);
	void printByDegree(string degree);
	void printDaysLeftInCourse(string);
	void printInvalidEmails();
	int addIndex = 0;

	//OLD CODE ********
	/*Student** getClassRosterArray();
	int rosterStudentIndex = 0;
	void printStudentData();
	void remove(string studentId);
	void printAll();
	void printDaysInCourse(string studentId);
	void printInvalidEmails();
	void printByDegreeProgram(Degree::DegreeType degreeProgram);
	void add(string studentId, string firstName, string lastName, string emailAddress, int age, int DaysInCourse1, int DaysInCourse2, int DaysInCourse3, Degree::DegreeType degreeProgram);*/

private:
	Student *classRosterArray[5];
};

#endif // !ROSTER_H







