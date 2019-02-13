#include "securityStudent.h"

SecurityStudent::SecurityStudent(string studentId, string firstName, string LastName, string email, int age, int *daysToCompleteCourse) :
	Student(studendId, firstName, lastName, email, age, daysToCompleteCourse, degree) {
	this->setDegreeProgram(Degree::SECURITY);
}

Degree::DegreeType SecurityStudent::getDegreeProgram() {
	return Degree::SECURITY;
}
