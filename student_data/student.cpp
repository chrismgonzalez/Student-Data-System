#pragma once
#include <iostream>
#include <string>
#include "degree.h"
#include "student.h"
using namespace std;

Student::Student()
{

}

Student::Student(string studentId, string firstName, string lastName, string emailAddress, int age, int* daysToCompleteCourse)
{
	studentId = studentId;
	firstName = firstName;
	lastName = lastName;
	emailAddress = emailAddress;
	age = age;
	daysToCompleteCourse[0] = daysToCompleteCourse[0];
	daysToCompleteCourse[1] = daysToCompleteCourse[1];
	daysToCompleteCourse[2] = daysToCompleteCourse[2];
}

void Student::setStudentId(string studentId) {
	studentId = studentId;
}

void Student::setFirstName(string firstName) {
	firstName = firstName;
}

void Student::setLastName(string lastName) {
	lastName = lastName;
}

void Student::setEmail(string email) {
	emailAddress = email;
}

void Student::setAge(int age) {
	age = age;
}

void Student::setDaysToCompleteCourse(int day0, int day1, int day2) {
	Student::daysToCompleteCourse[0] = day0;
	Student::daysToCompleteCourse[1] = day1;
	Student::daysToCompleteCourse[2] = day2;
}

void Student::setDegree(string degree) {
	degree = degree;
}

Degree Student::getDegree() {
	return Degree::SOFTWARE;
}

string Student::getStudentId() {
	return studentId;
}

string Student::getFirstName() {
	return firstName;
}

string Student::getLastName() {
	return lastName;
}

string Student::getEmail() {
	return emailAddress;
}

int Student::getAge() {
	return age;
}
int *Student::getDaysToCompleteCourse() {
	return daysToCompleteCourse;
}

void Student::print() {

}


Student::~Student()
{

}
