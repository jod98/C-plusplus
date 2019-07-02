#pragma once
#include "HP_Products.h"

//Derived class which inherits members and functions from HP_Products
class Printers : public HP_Products
{
protected:
	float printerTax = 0.23; //Variable that stores VAT
public:
	Printers(); //Default Constructor
	Printers(float); //General Constructor
	void setDetails(float); //Function to set the Printer details
	void Print(void); //Function to print the Printer details
};