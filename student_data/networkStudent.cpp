#include "networkStudent.h"

NetworkStudent::NetworkStudent(string studentId, string firstName, string lastName, string emailAddress, int age, int *daysToCompleteCourse) :
	Student(studentId, firstName, lastName, emailAddress, age, daysToCompleteCourse, Degree::NETWORK) {
	this->setDegreeProgramString(Degree::NETWORKING);
}

Degree::DegreeType NetworkStudent::getDegreeProgram() {
	return Degree::NETWORKING;
}
