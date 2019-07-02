#include "Printers.h"

//Default Constructor
Printers::Printers()
{
	tax = 0; 
}

//General Constructor that calculates tax based on item price
Printers::Printers(float price)
{
	this->price = price;
	tax = price*printerTax; //Tax = price*VAT i.e. 50*0.23...
}

//Function that calculates tax based on item price
void Printers::setDetails(float price)
{
	this->price = price;
	tax = price*printerTax; //Tax = price*VAT i.e. 50*0.23...
}

//Function to print details for Printer
void Printers::Print()
{
		time_t now = time(0); //now retrieves current time to compare to purchase time
		cout << "Printer: " << endl;
		cout << "Price: " << price << endl; //Printing out price of Printer
		cout << "VAT rate for Printer: " << printerTax*100 << "%" << endl;
		cout << "Tax: " << getTax() << endl; //Printing out tax on Printer 

		//Printing components of tm strucutre (date contents)
		cout << "Year: " << 1900 + date->tm_year << endl; //Print year
		cout << "Month: " << 1 + date->tm_mon << endl; //Print Month
		cout << "Day: " << date->tm_mday << endl; //Print Day
		cout << "Time: " << date->tm_hour << ":"; //Print Hour
		cout << date->tm_min << ":"; //Print Minute
		cout << date->tm_sec << endl; //Print Second

		//Printing time since item purchase
		cout << "Time since sale: " << now - uniqueID << "s" << endl;
		cout << "\n" << endl;
}
