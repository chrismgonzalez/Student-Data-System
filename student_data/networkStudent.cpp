#include "networkStudent.h"
#include <iostream>

NetworkStudent::NetworkStudent() {}

NetworkStudent::NetworkStudent(string studentId, string firstName, string lastName, string emailAddress, int age, int* daysToCompleteCourse, Degree deg) : Student(studentId, firstName, lastName, emailAddress, age, daysToCompleteCourse, deg) {
	degree = deg;
}

Degree NetworkStudent::getDegree() {
	return degree;
}

void NetworkStudent::print() {
	cout << "\t" << "First Name: " << getFirstName() << "\t" << "Last Name: " << getLastName() << "\t" << "Age: " << getAge() << "\t"
		<< "Days In Course: {"; cout << getDaysInCourse()[0] << ", " << getDaysInCourse()[1] << ", " << getDaysInCourse()[2] << "}" << "\t";
	cout << "Degree Program: Network" << '\n';
}
