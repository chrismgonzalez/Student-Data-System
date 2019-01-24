#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include "degree.h"

using namespace std;

class Student {
	public:
		//getters 
		string getStudentId();
		string getFirstName();
		string getLastName();
		string getEmail();
		int getAge();
		int *getDaysInCourse();
		Degree getDegreeType();
		//setters
		void setStudentId(string);
		void setFirstName(string);
		void setLastName(string);
		void setEmail(string);
		void setAge(int);
		void setDaysInCourse(int[3]);
		void setDegreeType(Degree);

		//other methods
		virtual Degree getDegreeProgram();
		virtual void print();
		//constructor
		Student(string, string, string, string, int, int*, Degree);
		//destructor
		~Student();

	private:
		string StudentId, FirstName, LastName, Email;
		int Age, DaysInCourse[3];
		Degree DegreeType;
	
};

#endif


