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
	int age;
	int* daysInCourse;
	Degree degree;

public:

	//constructors

	Student();

	Student(string studentId, string firstName, string lastName, string emailAddress, int age, int daysInCourse[3], Degree degree);
	
	//getters
	string getStudentId();
	string getFirstName();
	string getLastName();
	string getEmail();	
	int getAge();
	int *getDaysInCourse() const;

	//setters

	void setStudentId(string studentId);
	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setEmail(string emailAddress);
	void setAge(int age);
	void setDaysInCourse(int daysInCourse[]);
	void setDegree(Degree degree);
	



	virtual Degree getDegree() = 0;

	virtual void print();

	~Student();
};


#endif //STUDENT_H_


