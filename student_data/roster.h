#pragma once
#ifndef ROSTER_H
#define ROSTER_H

#include <array>
#include "student.h"



class Roster {
public:
	Roster();

	
	void printAll();
	void add(string studentId, string firstName, string lastName, string emailAddress, int age, int day0, int day1, int day2, Degree);
	void remove(string studentId);
	void printByDegree(string degree);
	void printAverageDaysInCourse(string);
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

	virtual ~Roster();

private:
	Student *classRosterArray[5];

	
};



#endif // !ROSTER_H







