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

void Roster::returnStudentData() {
	for (int i; i < maxStudentsOnRoster; i++) {
		int tempAge, tempDaysInCourse1, tempDaysInCourse2, tempDaysInCourse3;
		vector<string> studentDataSplit;
		string splitByDelimiter;
		char delimiter = ',';
		istringstream stringStream(studentData[i]);

		while (getline(stringStream, splitByDelimiter, delimiter)) {
			cout << splitByDelimiter << endl;
			studentDataSplit.push_back(splitByDelimiter);
		}

		Degree::DegreeType tempDegree;
		string tempDegreeString = studentDataSplit[8];

		if (tempDegreeString == "NETWORKING") {
			tempDegree = Degree::NETWORKING;
		}

		if (tempDegreeString == "SOFTWARE") {
			tempDegree = Degree::SOFTWARE;
		}

		if (tempDegreeString == "SECURITY") {
			tempDegree = Degree::SECURITY;
		}

		else {
			throw exception("Sorry...the degree type selected did not match with known degrees.  Please check for accuracy and try again.  Check studentData table and DegreeType enumerable");
		}

		tempAge = stoi(studentDataSplit[4]);
		tempDaysInCourse1 = stoi(studentDataSplit[5]);
		tempDaysInCourse2 = stoi(studentDataSplit[6]);
		tempDaysInCourse3 = stoi(studentDataSplit[7]);

		add(studentDataSplit[0], studentDataSplit[1], studentDataSplit[2], studentDataSplit[3], tempAge, tempDaysInCourse1, tempDaysInCourse2, tempDaysInCourse3, tempDegree);

	}
}




