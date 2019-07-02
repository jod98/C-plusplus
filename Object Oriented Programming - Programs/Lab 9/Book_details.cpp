#include "Book_details.h"

//Default Constructor
Book_details::Book_details()
{
	Author = "Null";
	Title = "Null";
	Publisher = "Null";
	Edition = 0;
	Barcode = 0;
	num_copies = 0;
}
//General Constructor
Book_details::Book_details(string A, string B, string C, int D, int E, int G)
{
	Author = A;
	Title = B;
	Publisher = C;
	Edition = D;
	Barcode = E;
	num_copies = G;
}
//Function to Set Book Details
void Book_details::set_details(string A, string B, string C, int D, int E, int G)
{
	Author = A;
	Title = B;
	Publisher = C;
	Edition = D;
	Barcode = E;
	num_copies = G;
}
//Function to Print Book Details
void Book_details::print_details(void)
{
	cout << "Title: " << Title << endl;
	cout << "Author: " << Author << endl;
	cout << "Publisher: " << Publisher << endl;
	cout << "Edition: " << Edition << endl;
	cout << "Barcode: " << Barcode << endl;
	cout << "Number of Copies: " << num_copies << endl;
}


