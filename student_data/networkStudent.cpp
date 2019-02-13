#include "networkStudent.h"

NetworkStudent::NetworkStudent(string studentId, string firstName, string LastName, string email, int age, int *daysToCompleteCourse) :
	Student(studendId, firstName, lastName, email, age, daysToCompleteCourse, degree) {
	this->setDegreeProgram(Degree::NETWORK);
}

Degree::DegreeType NetworkStudent::getDegreeProgram() {
	return Degree::NETWORK;
}
