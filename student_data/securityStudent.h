#pragma once
#ifndef SECURITYSTUDENT_H
#define SECURITYSTUDENT_H

#include "student.h"

class SecurityStudent : public Student {

public:

	SecurityStudent();

	SecurityStudent(string studentId, string firstName, string lastName, string emailAddress, int age, int* daysToCompleteCourse, Degree);
	Degree getDegree() override;

	void print();

private:
	Degree degree;
};


#endif //SECURITYSTUDENT_H


