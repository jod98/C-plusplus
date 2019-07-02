#pragma once
#include "Person.h"


class Employee:Person
{
std::string job;
int workingHours;
public:
	Employee(std::string a, int b) :Person(name, age) { job = "99"; workingHours = 99; };
	Employee();
	void career(std::string job);
	void workHours(int workingHours);
	void print();
};