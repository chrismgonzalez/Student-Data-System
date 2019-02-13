#pragma once
using namespace std;
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
	Student(string studentId, string firstName, string LastName, string email, int age, int *daysToCompleteCourse, Degree::DegreeType degree);

	//destructor
	~Student();

	//getters
	string getStudentId();
	string getFirstName();
	string getlastName();
	string getEmail();
	string getDegreeProgramString();
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




