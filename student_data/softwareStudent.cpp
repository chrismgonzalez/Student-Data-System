#include "softwareStudent.h"

SoftwareStudent::SoftwareStudent(string studentId, string firstName, string LastName, string email, int age, int *daysToCompleteCourse) :
	Student(studendId, firstName, lastName, email, age, daysToCompleteCourse, degree) {
	this->setDegreeProgram(Degree::SOFTWARE);
}

Degree::DegreeType SoftwareStudent::getDegreeProgram() {
	return Degree::SOFTWARE;
}
