#pragma once
#include "Person.h"


class Student:Person
{
double bestGrade;
std::string collegeCourse;
public:
	Student(std::string a, int b) :Person(name, age) {};
	Student();
	void highestGrade(double grade);
	void course(std::string course);
	void print();
};
