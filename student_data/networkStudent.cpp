#include "networkStudent.h"

NetworkStudent::NetworkStudent(string studentId, string firstName, string lastName, string email, int age, int *daysToCompleteCourse) :
	Student(studentId, firstName, lastName, email, age, daysToCompleteCourse, Degree::NETWORK) {
	this->setDegreeProgramString(Degree::NETWORK);
}

Degree::DegreeType NetworkStudent::getDegreeProgram() {
	return Degree::NETWORK;
}
