#ifndef SOFTWARE_H
#define SOFTWARE_H

#include "student.h"

class softwareStudent : public Student {
public:
	virtual Degree getDegreeProgram();
	using Student::Student;
private:
	Degree DegreeType = SOFTWARE;
};

#endif

