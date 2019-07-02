#pragma once
#include "Publication.h"

//FUNCTIONALITY TO ADD/SUBSTRACT COPIES
//STATIC INT COPIES FOR BOOK AND PUBLICATION

//Function Declarations
class Magazine : public Publication
{
	int ISBN;
public:
	void setMagazineDetails(string t, string e, string p, int b, int n, int ISBN);
	void printMagazine();
	static int copiesMag;
};