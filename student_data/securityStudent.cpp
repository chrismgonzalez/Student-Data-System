#include "securityStudent.h"

SecurityStudent::SecurityStudent(string studentId, string firstName, string lastName, string email, int age, int *daysToCompleteCourse) :
	Student(studentId, firstName, lastName, email, age, daysToCompleteCourse, Degree::SECURITY) {
	this->setDegreeProgramString(Degree::SECURITY);
}

Degree::DegreeType SecurityStudent::getDegreeProgram() {
	return Degree::SECURITY;
}
