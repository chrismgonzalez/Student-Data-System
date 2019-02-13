#pragma once
#include <string>
#include "student.h"
#include "degree.h"

class SoftwareStudent : public Student {
public:
	SoftwareStudent(string studentId, string firstName, string LastName, string email, int age, int *daysToCompleteCourse)
		Degree::DegreeType getDegreeProgram() override;

private:
	Degree::DegreeType degreeType;
};

