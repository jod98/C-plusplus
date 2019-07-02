// Lab4EE208.cpp : Defines the entry point for the console application.
// Name: Jordan O' Donnell
// Student Number: 16371101
// Date: 20/02/2018
// Lab: 4
// Exercise_4_1.cpp

// Description
/*Write a program, using struct called Complex, that contains two elements of type float. 
Now write four short functions to
(i) return the modulus(or absolute value) of a complex number that is input to the function, i.e.a double
	should be returned by the function; 
(ii) return the complex conjugate of a complex number that is input to the function, i.e.a single Complex
	type object should be returned; 
(iiii) return the sum of two complex numbers that are input to the function, once again a single Complex
	type object should be returned. 
(iv) return the product of two complex numbers that are input to the function, once again a single Complex type
	object should be returned.*/

//Making Function Declarations, Function Definitions and Other Existing Header Files Available for Use for this Program
#include "stdafx.h" 

int main()
{
	//Creating a new 'Complex' Structure called num which has a Real Part and an Imaginary Part 
	Complex num;
	num.rp = 4;
	num.ip = 3;
	
	//Calling Mod Function to Print to Modulus of Complex Number
	double mod = modulus(num);
	std::cout << "Modulus of Complex Number (4+3i) is " << mod << std::endl;

	//Calling Conj Function to Print to Conjugate of Complex Number
	Complex conj = conjugate(num);
	std::cout << "Conjugate of Complex Number (4+3i) is " << "(" << conj.rp << ") + (" << conj.ip << "i" << ")" << std::endl;
	
	//Calling Sum Function to Print to Sum of 2 Complex Numbers
	Complex sum = sumOf(num,conj);
    std::cout << "Sum of Complex Numbers (4+3i) and 4-3i is " << "(" << sum.rp << ") + (" << sum.ip << "i" << ")" << std::endl;

	//Calling Prod Function to Print to Product of 2 Complex Numbers
	Complex prod = product(num, conj);
	std::cout << "Product of Complex Numbers (4+3i) and 4-3i is " << "(" << prod.rp << ") + (" << prod.ip << "i" << ")" << std::endl;
	
    return 0;
}



