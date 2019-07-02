#include"Magazine.h"
#include "Publication.h"

//Function Definitions
//Static member
int Magazine::copiesMag = 0; //Static member copies set to 0

//Set Values Function
void Magazine::setMagazineDetails(string t, string e, string p, int b, int n, int isbnNo)
{
	ISBN = isbnNo;

	setPublicationValues(t, e, p, b, n);
}

void Magazine::printMagazine()
{
	cout << "ISBN Number: " << ISBN << endl;
	printPub();
}