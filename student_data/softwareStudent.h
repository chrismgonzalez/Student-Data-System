#pragma once
#ifndef SOFTWARESTUDENT_H
#define SOFTWARESTUDENT_H

#include "student.h"

class SoftwareStudent : public Student {

public:

	SoftwareStudent();

	SoftwareStudent(string studentId, string firstName, string lastName, string emailAddress, int age, int* daysToCompleteCourse, Degree);
	Degree getDegree() override;

	void print();

private:
	Degree degree;
};


#endif //SOFTWARESTUDENT_H

