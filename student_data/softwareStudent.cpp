#include "softwareStudent.h"

SoftwareStudent::SoftwareStudent(string studentId, string firstName, string lastName, string emailAddress, int age, int *daysToCompleteCourse) :
	Student(studentId, firstName, lastName, emailAddress, age, daysToCompleteCourse, Degree::SOFTWARE) {
	this->setDegreeProgramString(Degree::SOFTWARE);
}

Degree::DegreeType SoftwareStudent::getDegreeProgram() {
	return Degree::SOFTWARE;
}
