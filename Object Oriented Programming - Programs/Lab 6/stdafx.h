// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

//Header Files
#include "targetver.h"
#include <stdio.h>
#include <tchar.h>
#include <iostream>
#include <cstdlib>
#include <ctime>

//Function Declarations
class myarray
{
	int *p1; //Pointer that initialises elements of the array  
	int N; //Variable for size of array
	public: //Makes the contents of the class available for use everywhere in the program
	myarray(int Length); //General Constructor
	myarray(); //Default Constructor
	~myarray(); //Destructor
	void myarray::setvalue(int index, int num); //Function that sets the values of the array at a certain index
	int myarray::getvalue(int index); //Function that returns value at certain index
	myarray operator+(myarray a1); //Function that adds two myarray objects (2 arrays)
	void myarray::push(int value); //Function that pushes an element onto the concatenated array
	void printArray(); //Calling print function
	myarray(const myarray &src); //Copy Constructor that copies 
	int myarray::getLength(); //Function that returns the length of array
};



