// Exercise_7_5.cpp : Defines the entry point for the console application.
//

// Name: Jordan O' Donnell
// Student Number: 16371101
// Date: 03/04/2018
// Lab: 7
// Exercise_7_5.cpp

/*Description:
	Write two derived classes inheriting functionality of a base class
	called person (should have a constructor member function that asks the user to
	enter name and age) and with added unique features of student, and employee,
	and functionality to assign, change, and delete, records of student and employee.
	What these unique features are is up to you. Actually from now on you will not
	be told how to design your solutions - you will be responsible for this. Make sure
	you ave functionality to print out the details of your object and demonstrate
	some objects of your derived classes in the main function.
*/

//Making Function Declarations, Function Definitions and Other Existing Header Files Available for Use for this Program
#include "Person.h"
#include "Employee.h"
#include "Student.h"

int main()
{
	//General Constructor
	Person P1("Jordan", 19);
	std::cout << "\nGeneral Constructor (Person): " << std::endl;
	P1.print();

	//Default Constructor
	Person P2;
	std::cout << "\nDefault Constructor (Person): " << std::endl;
	P2.print();

	P2.setValues("Jamie", 29); //Updating Person 2 Details

	P1.deleteValues(); //Delete Contents of Person 1 Object

	//Printing Details
	std::cout << "\nNew Person 2 Details: " << std::endl;
	P2.print();
	std::cout << "\nDeleted Person 1 Details: " << std::endl;
	P1.print();
	
	//////////////////////////////////////////

	//Default Constructor
	std::cout << "\nDefault Constructor (Employee): ";
	Employee E1;
	E1.print();

	//Default Constructor
	std::cout << "Default Constructor (Student): ";
	Student S1;
	S1.print();

    return 0;
}

