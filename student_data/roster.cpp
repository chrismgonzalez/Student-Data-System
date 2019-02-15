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

	
	classRoster.printStudentData();
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

void Roster::printStudentData() {
	for (int i = 0; i < maxStudentsOnRoster; i++) {
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
		else if (tempDegreeString == "SECURITY") {
			tempDegree = Degree::SECURITY;
		}
		else if (tempDegreeString == "SOFTWARE") {
			tempDegree = Degree::SOFTWARE;
		}
		else {
			throw exception("Degree type did not match known degree types. Check studentData table and DegreeType enum.");
		}

		tempAge = stoi(studentDataSplit[4]);
		tempDaysInCourse1 = stoi(studentDataSplit[5]);
		tempDaysInCourse2 = stoi(studentDataSplit[6]);
		tempDaysInCourse3 = stoi(studentDataSplit[7]);

		add(studentDataSplit[0], studentDataSplit[1], studentDataSplit[2], studentDataSplit[3], tempAge,
			tempDaysInCourse1, tempDaysInCourse2, tempDaysInCourse3, tempDegree);
	}
}

void Roster::remove(string studentId) 
{
	cout << "==> Attempting to remove student from classRosterArray with ID: " << studentId << endl;
	for (int i = 0; i < maxStudentsOnRoster; i++) {
		if (classRosterArray[i] != nullptr) {
			if (classRosterArray[i]->getStudentId() == studentId) {
				classRosterArray[i] = nullptr;
				cout << "==> Removed student with ID: " << studentId << endl;
				return;
			}
		}
	}

	cout << "Student not found, did you enter the ID number correctly?" << endl;
}

void Roster::printAll()
{
	cout << "Printing student data..." << endl;
	for (int i = 0; i < maxStudentsOnRoster; i++) {
		if (classRosterArray[i] != nullptr) {
			classRosterArray[i]->print();
		}
	}

	cout << "Student data successfully printed..." << endl;
}

void Roster::printDaysInCourse(string studentId)
{
	for (int i = 0; i < maxStudentsOnRoster; i++) {
		if (classRosterArray[i]->getStudentId() == studentId) {
			int* tempDays = classRosterArray[i]->getDaysToCompleteCourse();
			int averageDays = (tempDays[0] + tempDays[1] + tempDays[2]) / 3;
			cout << "The average number of days in class for student with the ID of " << studentId << " is: " << averageDays << "\n" << endl;
			break;
		}
	}
}

void Roster::printInvalidEmails()
{
	vector<string> invalidEmails;
	for (int i = 0; i < maxStudentsOnRoster; i++) {
		string tempEmail = classRosterArray[i]->getEmail();
		bool hasSpace = false;
		bool hasAtChar = tempEmail.find("@") != string::npos;
		bool hasPeriodChar = tempEmail.find(".") != string::npos;

		for (char c : tempEmail) {
			if (isspace(c)) {
				hasSpace = true;
				break;
			}
		}

		bool emailValid = hasAtChar && hasPeriodChar && !hasSpace;

		if (!emailValid) {
			invalidEmails.push_back(tempEmail);
		}
	}

	if (invalidEmails.size() > 0) {
		cout << "Found invalid emails: \n" << endl;
		for (string invalidEmail : invalidEmails) {
			cout << invalidEmail << "\n" << endl;
		}
	}
}



void Roster::printByDegreeProgram(Degree::DegreeType degreeProgram)
{
	for (int i = 0; i < maxStudentsOnRoster; i++) {
		Degree::DegreeType currentDegreeProgram = classRosterArray[i]->getDegreeProgram();

		if (currentDegreeProgram == degreeProgram) {
			cout << classRosterArray[i]->getDegreeProgramString() << " program student has been found: ";
			classRosterArray[i]->print();
			cout << "\n" << endl;
		}
	}
}

void Roster::add(string studentID, string firstName, string lastName, string emailAddress,
	int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree::DegreeType degreeProgram) {
	if (rosterStudentIndex < maxStudentsOnRoster) {
		int tempDaysInCourse[3] = { daysInCourse1, daysInCourse2, daysInCourse3 };
		switch (degreeProgram)
		{
		case Degree::SECURITY:
			classRosterArray[rosterStudentIndex] = new SecurityStudent(studentID, firstName, lastName, emailAddress, age, tempDaysInCourse);
			rosterStudentIndex++;
			break;
		case Degree::NETWORKING:
			classRosterArray[rosterStudentIndex] = new NetworkStudent(studentID, firstName, lastName, emailAddress, age, tempDaysInCourse);
			rosterStudentIndex++;
			break;
		case Degree::SOFTWARE:
			classRosterArray[rosterStudentIndex] = new SoftwareStudent(studentID, firstName, lastName, emailAddress, age, tempDaysInCourse);
			rosterStudentIndex++;
			break;
		}
	}
	else {
		throw exception("Sorry...the amount of lines used exceeds the size that the class roster can hold");
	}
}



