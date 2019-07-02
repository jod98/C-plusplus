#include "Publication.h"

//Function Defintions
//Static member
int Publication::copiesPub = 0; //Static member copies set to 0

Publication::Publication()
{
	title = "";
	edition = "";
	publisher = "";
	barcodeNo = NULL;
	noOfCopies = NULL;
}

void Publication::setPublicationValues(string t, string e, string p, int b, int n)
{
	title = t;
	edition = e;
	publisher = p;
	barcodeNo = b;
	noOfCopies = n;
}

void Publication::printPub()
{
	cout << "Title of Publication: " << title << endl;
	cout << "Edition of Publication: " << edition << endl;
	cout << "Publisher of Publication: " << publisher << endl;
	cout << "Barcode of Publication: " << barcodeNo << endl;
}

