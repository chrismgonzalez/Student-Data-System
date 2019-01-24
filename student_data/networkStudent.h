#ifndef NETWORK_H
#define NETWORK_H

#include "student.h"

class networkStudent : public Student {
public:
	virtual Degree getDegreeProgram();
	using Student::Student;
private:
	Degree DegreeType = NETWORKING;
};

#endif



