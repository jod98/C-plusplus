#pragma once
//Header Files
#include "targetver.h"
#include <stdio.h>
#include <tchar.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

//Function Declarations
class Person
{
protected:
	std::string name; //Name of Person
	int age; //Age of Person
public:
	Person(); //Default Constructor
	Person(std::string name, int age); //General Constructor
	void setValues(std::string a, int b); //Set Values Function
	void deleteValues(); //Delete Values Function
 	void print(); //Print Details Function
};
