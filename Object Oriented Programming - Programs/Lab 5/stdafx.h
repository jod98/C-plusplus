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
#include <math.h> 
#include <cstdlib> //for rand
#include <ctime> //for time

//Function Declarations
class Complex
{
	float REAL; //Float real part
	float IMAGINARY; //Float imaginary part
	public: //Makes the contents of the class available for use everywhere in the program
	float Modulus(void); //Calling function to return modulus of complex number
	float Argument(void); //Calling function to return argument of complex number
	void Conjugate(void); //Calling function to return conjugate of complex number
	Complex(); //Default Construcutor Declaration	
	Complex(float a, float b); //General Constructor Declaration
	void setValues(float x, float y); //Calling function to reset values of complex number
	void print(); //Calling function to print complex number
	Complex operator+ (Complex comp1); //Function that returns addition of two complex numbers (called differently)
	Complex operator* (Complex comp1); //Function that returns product of two complex numbers (called differently)
};

class OneD_Complex_matrix
{
	Complex *p1;
	int N;
	public: //Makes the contents of the class available for use everywhere in the program
	OneD_Complex_matrix(int Length);
	~OneD_Complex_matrix(); //destructor
	void set_random_values();
	void conjugate();
	void print1D(int N);
};

