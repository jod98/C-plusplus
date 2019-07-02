#pragma once
#pragma warning(disable : 4996) //Disables warnings in output
#include <string> 
#include <iostream>
#include <ctime> //Library used for printing current time, date etc. to the screen
using namespace std;

//Parent class
class HP_Products
{
protected:
	time_t uniqueID; //time_t (part of ctime library), prints out current time
	tm *date; //Struct tm (part of ctime library), prints out date i.e. year, month, day
	float tax; //Variable that stores tax of HP Product
	float price; //Variable that stores price of HP Product
public:
	HP_Products(); //Default Constructor
	virtual void Print(void) {} //Function to print HP Product details 
								//(Virtual ensures print not mistaken for another print function in derived class)
	float getTax(); //Function that returns tax for particular HP Product

};


