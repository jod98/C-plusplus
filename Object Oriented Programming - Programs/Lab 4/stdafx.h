// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

//#include Files
#include "targetver.h"
#include <stdio.h>
#include <tchar.h>
#include <iostream>
#include <string>

//Function Declarations
struct student
{
	string name;
	int num;
	student *next;
};

//Function that inserts names and student number for each student in linked list
void insertName(student *stud, string name, int num);

//Returns int value for length of linked list
int listLength(student *stud);

//Return boolean value if student no is found in linked list
bool findStudent(student *stud, int studNo);

//Printing the details of the student(s) in linked list
void printDetails(student *stud);
