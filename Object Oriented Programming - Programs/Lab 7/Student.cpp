#include "Student.h"


//Default Constructor
Student::Student()
{
	bestGrade = NULL;
	collegeCourse = " ";
}

//Highest Grade Function
void Student::highestGrade(double grade)
{
	bestGrade = grade;
}

//Course Function
void Student::course(std::string course)
{
	collegeCourse = course;
}

//Print Details Function
void Student::print()
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "Age: " << age << std::endl;
	std::cout << "Best Grade: " << bestGrade << std::endl;
	std::cout << "College Course " << course << std::endl;
}