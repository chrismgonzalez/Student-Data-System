#include "securityStudent.h"

SecurityStudent::SecurityStudent(string studentId, string firstName, string lastName, string emailAddress, int age, int *daysToCompleteCourse) :
	Student(studentId, firstName, lastName, emailAddress, age, daysToCompleteCourse, Degree::SECURITY) {
	this->setDegreeProgramString(Degree::SECURITY);
}

Degree::DegreeType SecurityStudent::getDegreeProgram() {
	return Degree::SECURITY;
}
