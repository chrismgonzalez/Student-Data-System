#pragma once
#include <string>
#include "student.h"
#include "degree.h"

class SecurityStudent : public Student {
public:
	SecurityStudent(string studentId, string firstName, string LastName, string email, int age, int *daysToCompleteCourse)
	Degree::DegreeType getDegreeProgram() override;

private:
	Degree::DegreeType degreeType;
};


