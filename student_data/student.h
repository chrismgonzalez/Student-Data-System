#pragma once

#ifndef STUDENT_H_
#define STUDENT_h_

#include <string>
#include "degree.h"
using namespace std;

class Student {

	

private:
	string studentId;
	string firstName;
	string lastName;
	string emailAddress;
	string degree;
	int age;
	int daysToCompleteCourse[3];

public:

	//constructors

	Student();

	Student(string studentId, string firstName, string lastName, string emailAddress, int age, int* daysToCompleteCourse);
	
	//getters
	string getStudentId();
	string getFirstName();
	string getLastName();
	string getEmail();
	int getAge();
	int *getDaysToCompleteCourse();

	//setters

	void setStudentId(string studentId);
	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setEmail(string emailAddress);
	void setAge(int age);
	void setDaysToCompleteCourse(int day0, int day1, int day2);
	void setDegree(string degree);
	

	virtual void print();

	//destructor
	~Student();

	virtual Degree getDegree();
};


#endif //STUDENT_H_


