#include <iostream>
#include "student.h"

/* Constructors */
Student::Student()
	: studentId(""), firstName(""), lastName(""), emailAddress(""), age(-1), daysInCourse(new int[3])
{
	for (int i = 0; i < 3; ++i) {
		this->daysInCourse[i] = 0;
	}
}

Student::Student(string studentId, string firstName, string lastName, string email, int age, int daysInCourse[], Degree degree)
	: studentId(studentId), firstName(firstName), lastName(lastName), emailAddress(email), age(age), daysInCourse(new int[3])
{
	for (int i = 0; i < 3; ++i) {
		this->daysInCourse[i] = daysInCourse[i];
	}
}

/* Setters */
void Student::setStudentId(string studentId) {
	this->studentId = studentId;
}

void Student::setFirstName(string firstName) {
	this->firstName = firstName;
}

void Student::setLastName(string lastName) {
	this->lastName = lastName;
}

void Student::setEmail(string email) {
	this->emailAddress = email;
}

void Student::setAge(int age) {
	this->age = age;
}

void Student::setDaysInCourse(int daysInCourse[]) {
	this->daysInCourse = new int[3];
	for (int i = 0; i < 3; ++i) this->daysInCourse[i] = daysInCourse[i];
}

void Student::setDegree(Degree degree) {
	this->degree = degree;
}

/* Getters */
string Student::getStudentId() {
	return studentId;
}

string Student::getFirstName() {
	return firstName;
}

string Student::getLastName() {
	return lastName;
}

string Student::getEmail() {
	return emailAddress;
}

int Student::getAge() {
	return age;
}

int* Student::getDaysInCourse() const {
	return daysInCourse;
}

Degree Student::getDegree() {
	return degree;
}

/* Print */
void Student::print() {
	std::cout << getStudentId();
	std::cout << "\tFirst name: " << getFirstName();
	std::cout << "\tLast name: " << getLastName();
	std::cout << "\tAge: " << getAge();

	int* days = getDaysInCourse();
	std::cout << "\t  Days in course: " << days[0] << ", " << days[1] << ", " << days[2];

	string degreeString = "";
	switch (getDegree()) {
	case Degree::NETWORK:
		degreeString = "NETWORK";
		break;
	case Degree::SECURITY:
		degreeString = "SECURITY";
		break;
	case Degree::SOFTWARE:
		degreeString = "SOFTWARE";
		break;
	}
	std::cout << "\tDegree: " << degreeString << std::endl;
}

/* Destructor */
Student::~Student() {

}