#pragma once
using std::string;
#include "degree.h"

class Student {
private:
	string studentId;
	string firstName;
	string lastName;
	string email;
	string degreeProgram;
	Degree::DegreeType degree;
	int age;
	int daysToCompleteCourse[3];

public:
	//constructor
	Student(string studentId, string firstName, stringLastName, string email, int age, int *daysToCompleteCourse, Degree::DegreeType degree);

	//destructor
	~student();

	//getters
	string getStudentId();
	string getFirstName();
	string getlastName();
	string getEmail();
	string getDegreeProgram();
	int getAge();
	int *getDaysToCompleteCourse();

	//setters

	void setStudentId(string studentId);
	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setEmail(string email);
	void setAge(int age);
	void setDegreeProgram(Degree::DegreeType degree);
	void setDaysToCompleteCourse(int*);
	void resetStudent();

	virtual Degree::DegreeType getDegreeProgram();
	virtual void print();
};




