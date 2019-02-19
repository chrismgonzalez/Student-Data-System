#include "softwareStudent.h"
#include <iostream>

SoftwareStudent::SoftwareStudent() {}

SoftwareStudent::SoftwareStudent(string studentId, string firstName, string lastName, string emailAddress, int age, int* daysToCompleteCourse, Degree deg) : Student(studentId, firstName, lastName, emailAddress, age, daysToCompleteCourse, deg) {
	degree = deg;
}

Degree SoftwareStudent::getDegree() {
	return degree;
}

void SoftwareStudent::print() {
	cout << "\t" << "First Name: " << getFirstName() << "\t" << "Last Name: " << getLastName() << "\t" << "Age: " << getAge()
		<< "\t" << "daysInCourse: {"; cout << getDaysInCourse()[0] << ", " << getDaysInCourse()[1] << ", " << getDaysInCourse()[2] << "}";
	cout << " Degree Program: Networking" << '\n';
}
