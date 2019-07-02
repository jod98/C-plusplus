#include "Books.h"
#include "Publication.h"

//Function Definitions
//Static member
int Books::copiesBook = 0; //Static member copies set to 0

//General Constructor
void Books::setBookDetails(string t, string e, string p, string a, int b, int n, bool type)
{
	author = a;
	bookType = type;
	
	setPublicationValues(t, e, p, b, n);
}

void Books::printBooks()
{
	cout << "Author of Book: " << author << endl;
	if (bookType = "false")
	{
		cout << "Book Type: Softback" << endl;
	}
	else
	{
		cout << "Book Type: Hardback" << endl;
	}
	printPub();
}