#include "Magazine.h"

//Default Constructor
Magazine::Magazine()
{
	details = new Book_details;
	Price = 0.0;
	monthlyEdition = "";
}

//General Constructor
Magazine::Magazine(string A, string B, string C, int D, int E, float F, int G, string H)
{
	details = new Book_details;
	details->set_details(A, B, C, D, E, G);
	Price = F;
	monthlyEdition = H;
}

//Set Details Function for Book
void Magazine::Magazine_set_details(string A, string B, string C, int D, int E, float F, int G, string H)
{
	details->set_details(A, B, C, D, E, G);
	Price = F;
	monthlyEdition = H;
}

//Function to Print Book Details
void Magazine::Magazine_print()
{
	details->print_details();
	cout << "Price: " << Price << endl;
	cout << "Monthly Edition: " << monthlyEdition << endl;
}

//Function to Increment No of Copies
void Magazine::Add(int N)
{
	num_copies = num_copies + N;
}

//Function to Decrement No of Copies
void Magazine::Subtract(int N)
{
	num_copies = num_copies - N;
}