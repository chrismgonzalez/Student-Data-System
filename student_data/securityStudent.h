#ifndef SECURITY_H
#define SECURITY_H

#include "student.h"

class securityStudent : public Student {
public:
	virtual Degree getDegreeProgram();
	using Student::Student;
private:
	Degree DegreeType = SECURITY;
};

#endif

