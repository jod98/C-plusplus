#include "Employee.h"


//Default Constructor
Employee::Employee()
{
	job = "";
	workingHours = NULL;
}

//Career Function
void Employee::career(std::string career)
{
	job = career;
}

//Work Hours Function
void Employee::workHours(int hours)
{
	workingHours = hours;
}

//Print Details Function
void Employee::print()
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "Age: " << age << std::endl;
	std::cout << "Job: " << job << std::endl;
	std::cout << "Working HoursL " << workingHours << std::endl;
}