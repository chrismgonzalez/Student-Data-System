#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "student.h"
#include "networkStudent.h"
#include "softwareStudent.h"
#include "securityStudent.h"
#include "roster.h"
using namespace std;

int main() {
	cout << "######################################################################" << endl;
	cout << "##                                                                  ##" << endl;
	cout << "##   COURSE TITLE: Scripting and Programming: Applications - C867   ##" << endl;
	cout << "##                    PROGRAMMING LANGUAGE: C++                     ##" << endl;
	cout << "##                     STUDENT I.D.: 001104301                      ##" << endl;
	cout << "##                      NAME: Chris Gonzalez                        ##" << endl;
	cout << "##                                                                  ##" << endl;
	cout << "######################################################################" << endl;

	//initialize instance of the class roster
	Roster classRoster;

	
	classRoster.returnStudentData();
	classRoster.printAll();
	classRoster.printInvalidEmails();

	for (int i = 0; i < maxStudentsOnRoster; i++) {
		classRoster.printDaysInCourse(classRoster.getClassRosterArray()[i]->getStudentId());
	}
	//print all students in a specified degree program
	classRoster.printByDegreeProgram(Degree::SOFTWARE);

	//remove student with id submitted as argument
	classRoster.remove("A3");
	//calling already a student already removed from the data table will throw error
	classRoster.remove("A3");
	//print all students in classRoster 
	classRoster.printAll();

	//call the destructor
	classRoster.~Roster();
	
	return 0;

};

Roster::Roster() {
}

Roster::~Roster() {
}

Student ** Roster::getClassRosterArray()
{
	return classRosterArray;
}




