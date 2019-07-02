#include "Person.h"

//Default Constructor
Person::Person()
{
	name = "DEFAULT";
	age = NULL;
}

//General Constructor
Person::Person(std::string a, int b)
{
	name = a;
	age = b;
}

//Set Values Function
void Person::setValues(std::string a, int b)
{
	name = a;
	age = b;
}

//Function to Delete Details
void Person::deleteValues()
{
	name = "";
	age = NULL;
}

//Printing Person Details
void Person::print()
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "Age: " << age << std::endl;
}
