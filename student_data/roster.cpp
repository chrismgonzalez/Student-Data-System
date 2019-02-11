#include "pch.h"
#include "roster.h"
using std::string;

int main() {

	roster classRoster;

	const string studentData[] =
	{
		"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
		"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
		"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
		"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
		"A5,Chris,Gonzalez,cmgonza89@gmail.com,29,20,25,30,SOFTWARE"
	};

	roster::roster()
	{

	};


	roster::~roster()
	{
		//delete the roster array
	};

}
