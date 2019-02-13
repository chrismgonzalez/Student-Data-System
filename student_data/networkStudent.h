#pragma once
#include <string>
#include "student.h"
#include "degree.h"

class NetworkStudent : public Student {
public:
		NetworkStudent(string studentId, string firstName, string lastName, string email, int age, int *daysToCompleteCourse);
		Degree::DegreeType getDegreeProgram() override;

private:
	Degree::DegreeType degreeType;
};



