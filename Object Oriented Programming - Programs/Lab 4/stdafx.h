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
#include <math.h> 

//Function Declarations
struct Complex {
	float rp;
	float ip;
};
double modulus(Complex num);
Complex conjugate(Complex num);
Complex sumOf(Complex num, Complex conj);
Complex product(Complex num, Complex conj);


