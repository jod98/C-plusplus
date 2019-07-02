#pragma once
#include <string>
#include <iostream>
using namespace std;

class Book_details
{
public:
	string Author;
	string Title;
	string Publisher;
	int Edition;
	int Barcode;
	int num_copies;
	Book_details(); //Default Constructor
	Book_details(string, string, string, int, int, int); //General Constructor
	void set_details(string, string, string, int, int, int); //Function to set Details for Book
	void print_details(void); //Function to Print Book Details
};


