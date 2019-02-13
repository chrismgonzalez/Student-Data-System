#include "softwareStudent.h"

SoftwareStudent::SoftwareStudent(string studentId, string firstName, string lastName, string email, int age, int *daysToCompleteCourse) :
	Student(studentId, firstName, lastName, email, age, daysToCompleteCourse, Degree::SOFTWARE) {
	this->setDegreeProgramString(Degree::SOFTWARE);
}

Degree::DegreeType SoftwareStudent::getDegreeProgram() {
	return Degree::SOFTWARE;
}
