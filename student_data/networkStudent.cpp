#include "networkStudent.h"
#include <iostream>

NetworkStudent::NetworkStudent() {}

NetworkStudent::NetworkStudent(string studentId, string firstName, string lastName, string emailAddress, int age, int* daysToCompleteCourse, Degree deg) : Student(studentId, firstName, lastName, emailAddress, age, daysToCompleteCourse) {
	degree = deg;
}

Degree NetworkStudent::getDegree() {
	return degree;
}

void NetworkStudent::print() {
	cout << "\t" << "First Name: " << getFirstName() << "\t" << "Last Name: " << getLastName() << "\t" << "Age: " << getAge()
		<< "\t" << "daysInCourse: {"; cout << getDaysToCompleteCourse()[0] << ", " << getDaysToCompleteCourse()[1] << ", " << getDaysToCompleteCourse()[2] << "}";
	cout << " Degree Program: Networking" << '\n';
}
