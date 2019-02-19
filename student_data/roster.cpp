#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include "student.h"
#include "degree.h"
#include "networkStudent.h"
#include "softwareStudent.h"
#include "securityStudent.h"
#include "roster.h"

using namespace std;



//helper functions

Roster::Roster() {
}

//add student to roster
void Roster::add(string studentID, string firstName, string lastName, string emailAddress,
	int age, int day0, int day1, int day2, Degree degree) {
	int daysToCompleteCourse[] = { day0, day1, day2 };

	

	if (degree == Degree::SECURITY) {
		classRosterArray[addIndex++] = new SecurityStudent(studentID, firstName, lastName, emailAddress, age, daysToCompleteCourse, degree);
	}

	if (degree == Degree::NETWORK) {
		classRosterArray[addIndex++] = new NetworkStudent(studentID, firstName, lastName, emailAddress, age, daysToCompleteCourse, degree);
	}

	if (degree == Degree::SOFTWARE) {
		classRosterArray[addIndex++] = new SoftwareStudent(studentID, firstName, lastName, emailAddress, age, daysToCompleteCourse, degree);
	}

}
	


//print all students
void Roster::printAll()
{
	cout << "****STUDENT ROSTER****" << endl;
	cout << endl;

	for (int i = 0; i < 5; i++) {
		(*classRosterArray[i]).print();
	}

	cout << "Student data printed successfully" << endl;
}

//print the average days it took for a student to complete 3 courses
void Roster::printDaysLeftInCourse(string studentId)
{
	for (int i = 0; i < 5; i++) {
		if ((*classRosterArray[i]).getStudentId() == studentId) {
			int average = 0;
			average = ((*classRosterArray[i]).getDaysInCourse()[0] + (*classRosterArray[i]).getDaysInCourse()[1]
				+ (*classRosterArray[i]).getDaysInCourse()[2]) / 3;
			cout << "The average days it took the student with studentID: " << studentId << " to finish 3 courses: " << average << '\n';
		}
	}
	cout << '\n';
}

//print students by degree program
void Roster::printByDegree(string degree)
{
	Degree currentDegree = Degree::SOFTWARE;

	if (degree == "SECURITY") {
		currentDegree = Degree::SECURITY;
		cout << "Here are the students in the Security degree program: " << endl;
	}

	if (degree == "NETWORK") {
		currentDegree = Degree::NETWORK;
		cout << "Here are the students in the Network degree program: " << endl;
	}

	if (degree == "SOFTWARE") {
		currentDegree = Degree::SOFTWARE;
		cout << "Here are the students in the Software degree program: " << endl;
	}

	cout << endl;
	for (int i = 0; i < 5; i++) {

		if (currentDegree == (*classRosterArray[i]).getDegree()) {
			(*classRosterArray[i]).print();
		
			cout << '\n' << endl;
		}
	}
	cout << '\n';
}
//print invalid emails
void Roster::printInvalidEmails()
{
	cout << "Displaying invalid emails:" << '\n';
		cout << endl;
		for (int i = 0; i < 5; i++) {
			bool foundCharAt = false;
			bool foundCharPeriod = false;
			bool foundCharSpace = false;
			string email = "";
			email = (*classRosterArray[i]).getEmail();
			for (char &c : email) {
				if (c == '@') {
					foundCharAt = true;
				}
				if (c == '.') {
					foundCharPeriod = true;
				}
				if (c == ' ') {
					foundCharSpace = true;
				}
			}
			if (foundCharAt == false || foundCharPeriod == false || foundCharSpace == true) {
				cout << (*classRosterArray[i]).getEmail() << '\n';
			}
		}
	cout << '\n';
}


//remove a student from the roster
void Roster::remove(string studentID) {
	bool removed = false;
	for (int i = 0; i < 5; i++) {
		if (classRosterArray[i] != nullptr) {
			if (studentID == classRosterArray[i]->getStudentId()) {
				classRosterArray[i] = nullptr;
				removed = true;
			}
		}
	}
	if (!removed) {
		cout << "The student with the ID: " << studentID << " was not found." << '\n';
	}
}


//main function
int main() {

	//personal information

	cout << "######################################################################" << endl;
	cout << "##                                                                  ##" << endl;
	cout << "##   COURSE TITLE: Scripting and Programming: Applications - C867   ##" << endl;
	cout << "##                    PROGRAMMING LANGUAGE: C++                     ##" << endl;
	cout << "##                     STUDENT I.D.: 001104301                      ##" << endl;
	cout << "##                      NAME: Chris Gonzalez                        ##" << endl;
	cout << "##                                                                  ##" << endl;
	cout << "######################################################################" << endl;

	//student data
	const string studentData[] = {
			"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
			"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
			"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
			"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
			"A5,Chris,Gonzalez,cmgonza89@gmail.com,29,20,25,30,SOFTWARE",
	};



	//initialize instance of the class roster
	Roster roster;

	//instance of degree
	Degree studentDegree;

	//add students to roster

	for (int i = 0; i < 5; i++) {
		stringstream ss(studentData[i]);

		vector<string> result;

		while (ss.good()) {
			string substr;
			getline(ss, substr, ',');
			result.push_back(substr);
		}

		if (result[8] == "SECURITY") {
			studentDegree = Degree::SECURITY;
		}

		if (result[8] == "NETWORK") {
			studentDegree = Degree::NETWORK;
		}

		if (result[8] == "SOFTWARE") {
			studentDegree = Degree::SOFTWARE;
		}

		roster.add(result[0], result[1], result[2], result[3], stoi(result[4]), stoi(result[5]), stoi(result[6]), stoi(result[7]), studentDegree);
	}


	//print all students
	roster.printAll();

	//print invalid emails
	roster.printInvalidEmails();

	//print days left in course for selected student
	roster.printDaysLeftInCourse("A1");

	//print all students in a specified degree program
	roster.printByDegree("SOFTWARE");

	//remove student with id submitted as argument
	roster.remove("A3");
	//calling already a student already removed from the data table will throw error
	roster.remove("A3");


};

//call the destructor
Roster::~Roster() {};
