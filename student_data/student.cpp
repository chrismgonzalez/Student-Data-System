#pragma once
#include <iostream>
#include <string>
#include "degree.h"
#include "student.h"
using namespace std;

Student::Student(string studentId, std::string firstName, std::string lastName, std::string emailAddress, int age, int *daysToCompleteCourse, Degree::DegreeType degree)
{
	this->setStudentId(studentId);
	this->setFirstName(firstName);
	this->setLastName(lastName);
	this->setEmail(emailAddress);
	this->setAge(age);
	this->setDaysToCompleteCourse(daysToCompleteCourse);
	this->setDegreeProgramString(degree);
}

Student::~Student()
{
}

void Student::setStudentId(string studentId) {
	this->studentId = studentId;
}

void Student::setFirstName(string firstName) {
	this->firstName = firstName;
}

void Student::setLastName(string lastName) {
	this->lastName;
}

void Student::setEmail(string email) {
	this->emailAddress;
}

void Student::setAge(int age) {
	this->age = age;
}

void Student::setDegreeProgramString(Degree::DegreeType degree) {
	this->degreeProgramString = degree;

	switch (degree)
	{
	case Degree::SECURITY:
		this->degreeProgramString = "SECURITY";
		break;

	case Degree::NETWORK:
		this->degreeProgramString = "NETWORK";
		break;

	case Degree::SOFTWARE:
		this->degreeProgramString = "SOFTWARE";
		break;

	case Degree::OTHER:
		this->degreeProgramString = "OTHER";
		break;

	default:
		break;
	}

}

void Student::setDaysToCompleteCourse(int *daysToCompleteCourse) {
	for (int i = 0; i < 3; i++) {
		this->daysToCompleteCourse[i] = daysToCompleteCourse[i];
	}
}

string Student::getStudentId() {
	return this->studentId;
}

string Student::getFirstName() {
	return this->firstName;
}

string Student::getLastName() {
	return this->lastName;
}

string Student::getEmail() {
	return this->emailAddress;
}

string Student::getDegreeProgramString() {
	return this->degreeProgramString;
}

int Student::getAge() {
	return this->age;
}
int *Student::getDaysToCompleteCourse() {
	return this->daysToCompleteCourse;
}

Degree::DegreeType Student::getDegreeProgram() {
	return Degree::OTHER;
}

void Student::print() {

	int* days = getDaysToCompleteCourse();

	cout << "Student ID:" << getStudentId() << "\t";
	cout << "Student First Name: " << getFirstName() << "\t";
	cout << "Student Last Name: " << getLastName() << "\t";
	cout << "Student Age: " << getAge() << "\t";
	cout << "\t Days in each enrolled course: " << days[0] << "," << days[1] << "," << days[2] << "\t";
	cout << "Student Degree Program: " << getDegreeProgramString();
	cout << endl;
}



