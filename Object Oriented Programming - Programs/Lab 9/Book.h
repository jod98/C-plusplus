#pragma once
#include "Book_details.h"

class Book : public Book_details
{
public:
	Book_details *details; //Pointer to dynamically allocate memory to array of books
	float Price; //Variable for price of book
	Book(); //Default Constructor
	Book(string, string, string, int, int, float, int); //General Constructor
	void Book_set_details(string, string, string, int, int, float, int); //Function to set the Book Details
	void Book_print(void); //Function to print the Book Details
	void Add(int N); //Function to Increment No of Copies
	void Subtract(int N); //Function to Decrement No of Copies
};

//Hardback class inherits data members from book class
class Hardback : public Book
{
public:
	Hardback();
	Hardback(string, string, string, int, int, float, int);
};

//Softback class inherits data members from book class
class Softback : public Book
{
public:
	Softback();
	Softback(string, string, string, int, int, float, int);
};
