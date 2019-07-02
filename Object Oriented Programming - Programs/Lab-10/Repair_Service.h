#pragma once
#include "HP_Products.h"

//Derived class which inherits members and functions from HP_Products
class Repair_Service : public HP_Products
{
protected:
	float repairTax= 0.13; //Variable that stores VAT
public:
	Repair_Service(); //Default Constructor
	Repair_Service(float); //General Constructor
	void setDetails(float); //Function to set the Repair Service details
	void Print(void); //Function to print the Repair Service details
};
