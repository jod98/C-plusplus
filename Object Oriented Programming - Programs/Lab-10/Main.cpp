#include "Repair_Service.h"
#include "Printers.h"
#include "HP_Products.h"
#include <chrono> 
#include <thread> 

int main(void)
{
	//This example demonstrates the 2% compound interest on tax after 4 seconds REAL TIME as opposed to 28 days.
	//The concept is still here but allows you to only waste 4 seconds of your life as opposed to 28 days. :)

	//Exercise 1-3 quite trivial, Exercise 4 (below) encapsulates Polyporphism (learning objective of lab)

	HP_Products *arr[4]; //Dynamically allocating memory to 4 HP Product items: either Printer or Repair Service

	arr[0] = new Repair_Service(35); //Creating a Repair Service object and assigning Price of €35 to item
	cout << "Repair_Service purchased WITHIN 2 seconds of current time, therefore, no 2% compound interest addition" << endl;
	arr[0]->Print();

	arr[1] = new Printers(100); //Creating a Printer object and assigning Price of €100 to item
	std::this_thread::sleep_for(std::chrono::seconds(4)); //4 seconds delay as opposed to 28 days delay for demonstration
	cout << "Printer purchased OUTSIDE 2 seconds of current time, therefore, 2% compound interest addition" << endl;
	arr[1]->Print();

	float repairPrice;
	cout << "Enter price of repair service: "; cin >> repairPrice;
	arr[2] = new Repair_Service(repairPrice); //Creating a Printer object and assigning Price of €100 to item
	std::this_thread::sleep_for(std::chrono::seconds(6)); //6 seconds delay as opposed to 28 days delay for demonstration
	cout << "Repair Service purchased OUTSIDE 4 seconds of current time, therefore 2% compound interest addition" << endl;
	arr[2]->Print();

	float printerPrice;
	cout << "Enter price of repair service: "; cin >> printerPrice;
	arr[3] = new Printers(printerPrice);
	cout << "Printer purchased WITHIN 2 seconds of current time, therefore, 2% compound interest addition" << endl;
	arr[3]->Print();

	/*
	float Repairprice = 0;
	cout << "Enter price of Repair Service: ";
	cin >> Repairprice;
	//Creating a Repair_Service object and setting its current price to value passed in by user
	Repair_Service R1;
	R1.setDetails(Repairprice);
	cout << "Repair_Service purchased with 2 seconds of current time, therefore, no 2% compound interest addition" << endl;
	R1.Print();

	float printerPrice = 0;
	cout << "Enter price of Repair Service: ";
	cin >> printerPrice;
	//Creating a Repair_Service object and setting its current price to value passed in by user
	Printers P1;
	P1.setDetails(printerPrice);
	cout << "Printer purchased with 2 seconds of current time, therefore, no 2% compound interest addition" << endl;
	P1.Print();
	*/

	float totalTaxBill = 0.0;
	for (int i = 0; i < 4; i++)
	{
		totalTaxBill = totalTaxBill + arr[i]->getTax();
	}
	cout << "\nTotal tax bill for all HP Product Items is: " << totalTaxBill << endl;

	return(0);
}
