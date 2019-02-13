#pragma once
#include <string>
#include "degree.h"
using std::string;

class Student {
private:
	string studentId;
	string firstName;
	string lastName;
	string email;
	string degreeProgramString;
	Degree::DegreeType degree;
	int age;
	int daysToCompleteCourse[3];

public:
	//constructor
	Student(string studentId, string firstName, string lastName, string email, int age, int *daysToCompleteCourse, Degree::DegreeType degree);

	//destructor
	~Student();

	//getters
	string getStudentId();
	string getFirstName();
	string getLastName();
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
	void setDegreeProgramString(Degree::DegreeType degree);
	void setDaysToCompleteCourse(int*);
	void resetStudent();

	virtual Degree::DegreeType getDegreeProgram();
	virtual void print();
};




