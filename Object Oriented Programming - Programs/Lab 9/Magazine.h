#pragma once
#include "Book_details.h"

class Magazine : public Book_details
{
public:
	Book_details *details; //Pointer to dynamically allocate memory to array of books
	float Price; //Variable for price of book
	string monthlyEdition;
	Magazine(); //Default Constructor
	Magazine(string, string, string, int, int, float, int, string); //General Constructor
	void Magazine_set_details(string, string, string, int, int, float, int, string); //Function to set the Book Details
	void Magazine_print(void); //Function to print the Book Details
	void Add(int N); //Function to Increment No of Copies
	void Subtract(int N); //Function to Decrement No of Copies
};
