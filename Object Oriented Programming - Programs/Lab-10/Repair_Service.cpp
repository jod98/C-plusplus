#include "Repair_Service.h"

//Default Constructor
Repair_Service::Repair_Service()
{
	tax = 0;
}

//General Constructor that calculates tax based on item price
Repair_Service::Repair_Service(float price)
{
	this->price = price;
	tax = price*repairTax; //Tax = price*VAT i.e. 50*0.23...
}

//Function that calculates tax based on item price
void Repair_Service::setDetails(float price)
{
	this->price = price;
	tax = price*repairTax; //Tax = price*VAT i.e. 50*0.23...
}

//Function to print Repair Service
void Repair_Service::Print()
{
	time_t now = time(0); //now retrieves current time
	cout << "Repair Service: " << endl; 
	cout << "Price: " << price << endl; //Printing out price of Printer
	cout << "VAT rate for Repair Service: " << repairTax*100 << "%" << endl;
	cout << "Tax: " << getTax() << endl; //Printing out tax on Printer

	//Printing components of tm strucutre (date contents)
	cout << "Year: " << 1900 + date->tm_year << endl; //Print year
	cout << "Month: " << 1 + date->tm_mon << endl; //Print Month
	cout << "Day: " << date->tm_mday << endl; //Print Day
	cout << "Time: " << date->tm_hour << ":"; //Print Hour
	cout << date->tm_min << ":"; //Print Minute
	cout << date->tm_sec << endl; //Print Second

	//Printing time since item purchase
	cout << "Time since sale: " <<  now - uniqueID << "s" << endl;
	cout << "\n" << endl;
}
