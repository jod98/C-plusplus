// Exercise91.cpp : Defines the entry point for the console application.
//

// Name: Jordan O' Donnell
// Student Number: 16371101
// Date: 03/04/2018
// Lab: 9
// Exercise_9_1.cpp

/*Description:
	You have been hired by Easons bookshop to develop a software
	system to manage their warehouse of books. Your software will be used by the
	warehouse manager to monitor the books in the warehouse. Two publications
	types are of interest: books and magazines. Books can be broken down into
	two types: hardback and softback. Various book details should be included,
	such as author, title, edition, publisher, and number of copies in stock in
	the warehouse. Each individual book has its own barcode number. Various
	magazine details should be included, such as title, publisher, current monthly
	edition (eg, Feb, March, April etc.), ISBN number, and number of copies in
	stock in the warehouse. Note that each individual book and magazine should
	have a unique barcode number. Functionality should exist such that you
	should be able to add to or subtract from the number of copies in stock for all
	publication types on request. Functionality should also exist to print out all
	info relating to a given publication. Your solution must use inheritance and
	contain appropriate constructors and destructors for the various classes.
	Demonstrate your classes in action in a main function by creating a number
	of books/magazines and then printing their details to screen. You should
	create a class diagram in doc format; this should be completed
	before starting to write any code. All code should be in appropriate cpp
	and h files specific to each class
*/

//Making Function Declarations, Function Definitions and Other Existing Header Files Available for Use for this Program
#include "Books.h"
#include "Publication.h"
#include "Magazine.h"

int main()
{
	srand(time(NULL));

	//////////////////////  (PUBLICATION) ///////////////////////////////

	int barcodeNo = rand() % 100000000+1;
	Publication P1;
	P1.setPublicationValues("pub", "a", "b", barcodeNo, 50);
	cout << "\nSetting Values for Publication: " << endl;
	P1.printPub();

	Publication P2;
	cout << "\nDefault Constructor for Publication: " << endl;
	P2.printPub();

	cout << "Copies of Publication Objects Made: " << Publication::copiesPub << endl;

	//////////////////////  (BOOKS) ///////////////////////////////
	int barcodeNo2 = rand() % 100000000 + 1;

	Books B1;
	bool bookType;
	cout << "Enter book type: ('false' = softback), ('true' = hardback): ";
	cin >> bookType;
	B1.setBookDetails("book", "c", "d", "e", barcodeNo2, 200, bookType);
	cout << "\nSetting Values for Books: " << endl;
	B1.printBooks(); 

	cout << "Copies of Book Objects Made: " << Books::copiesBook << endl;
	
	//FUNCTIONALITY TO ADD SUBTRACT COPIES FOR PUBLICATION TYPES

	//ISBN SAME AS BARCODE NO?????????

	//////////////////////  (MAGAZINES) ///////////////////////////////
	int barcodeNo3 = rand() % 100000000 + 1;

	Magazine M1;
	int ISBN = rand() % 1000000000 + 1;
	M1.setMagazineDetails("mag", "f", "g", barcodeNo3, 200, ISBN);
	cout << "\nSetting Values for Magazines: " << endl;
	M1.printMagazine();

	cout << "Copies of Magazine Objects Made: " << Magazine::copiesMag << endl;

    return 0;
}

