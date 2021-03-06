// stdafx.cpp : source file that includes just the standard includes
// Exercise_4_4.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

//Calling #include "stdafx.h" which includes various #include files used to be used in the source file Exercise44cpp.cpp
#include "stdafx.h"

//Function Definitions
//Function that inserts names and student number for each student in linked list
void insertName(student *stud, string name, int num)
{
	stud->name = name;
	stud->num = num;
}

//Returns int value for length of linked list
int listLength(student *stud)
{
	int counter = 0;
	student *cur = stud;
	while (cur != NULL)
	{
		counter++; //Counter increments each time we travel to next link in the list
		cur = cur->next; //Going to the next link in the list
	}
	return counter;
}

//Return boolean value if student no is found in linked list
bool findStudent(student *stud, int studNo)  //Go through linked list and input student number return true or false
{
	bool value = false;
	student *cur = stud;
	while (cur != NULL)
	{
		if (cur->num == studNo)
		{
			value = true;
		}
		cur = cur->next;
	}
	return value;
}

//Printing the details of the student(s) in linked list
void printDetails(student *stud)
{
	cout << "\nLinked list contents" << endl;
	student *cur = stud;
	while (cur != NULL)
	{
		cout << "\nStudent Name: " << cur->name << endl;
		cout << "Student Number: " << cur->num << endl;
		cur = cur->next;
	}
}