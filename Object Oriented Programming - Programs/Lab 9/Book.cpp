#include "Book.h"

//Default Constructor
Book::Book()
{
	details = new Book_details;
	Price = 0.0;
}

//General Constructor
Book::Book(string A, string B, string C, int D, int E, float F, int G)
{
	details = new Book_details;
	details->set_details(A, B, C, D, E, G);
	Price = F;
}

//Set Details Function for Book
void Book::Book_set_details(string A, string B, string C, int D, int E, float F, int G)
{
	details->set_details(A, B, C, D, E, G);
	Price = F;
}

//Function to Print Book Details
void Book::Book_print()
{
	details->print_details();
	cout << "Price: " << Price << endl;
}

//Function to Increment No of Copies
void Book::Add(int N)
{
	num_copies = num_copies + N;
}

//Function to Decrement No of Copies
void Book::Subtract(int N)
{
	num_copies = num_copies - N;
}

//Default Constructor for Hardback
Hardback::Hardback() {};
//General Constructor (Initialiser List) for Hardback Details
Hardback::Hardback(string A, string B, string C, int D, int E, float F, int G) :Book(A, B, C, D, E, F, G) {};

//Default Constructor for Softback
Softback::Softback() {};
//General Constructor (Initialiser List) for Softback Details
Softback::Softback(string A, string B, string C, int D, int E, float F, int G) :Book(A, B, C, D, E, F, G) {};