#pragma once
#ifndef NETWORKSTUDENT_H
#define NETWORKSTUDENT_H

#include "student.h"

class NetworkStudent : public Student {

public:

	NetworkStudent();

	NetworkStudent(string studentId, string firstName, string lastName, string emailAddress, int age, int* daysToCompleteCourse, Degree);
	Degree getDegree() override;

	void print();

private:
	Degree degree;
};


#endif //NETWORKSTUDENT_H





