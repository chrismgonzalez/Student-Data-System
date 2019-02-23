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


	virtual ~Roster();

private:
	Student *classRosterArray[5];

	
};



#endif // !ROSTER_H







