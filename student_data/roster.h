#pragma once
#include <string>
#include "student.h"
#include "degree.h"
#include <sstream>
using namespace std

const string studentData[] = {
		"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
		"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
		"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
		"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
		"A5,Chris,Gonzalez,cmgonza89@gmail.com,29,20,25,30,SOFTWARE",
};

//for the purposes of this application, only 5 students are allowed on the roster 
const int maxStudentsOnRoster = 5;

//we only need 9 parameters/arguments for each student in the table
const int paramsForStudent = 9;

class Roster {
public:
	Roster();
	~Roster();

	Student** getClassRosterArray();
	int rosterStudentIndex = 0;
	void returnStudentData();
	void removeStudent(string studentId);
	void printAllStudents();
	void printDaysInCourse(string studentId);
	void printInvalidEmail();
	void printByDegreeProgram(Degree::DegreeType degreeProgram);
	void addStudent(string studentId, string firstName, string lastName, string email, int age, int numDaysInCourse1, int numDaysInCourse2, int numDaysInCourse3, Degree::DegreeType degreeProgram);

private:
	Student* classRosterArray[maxStudentsOnRoster]; //consider changing syntax
};



