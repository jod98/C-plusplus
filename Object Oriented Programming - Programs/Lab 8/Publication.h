#pragma once
//Header Files
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

//Function Declarations
class Publication
{
	string title;
	string edition;
	string publisher;
	int barcodeNo;
	int noOfCopies;
public:
	Publication();
	void setPublicationValues(string t, string e, string p, int b, int n);
	void printPub();
	static int copiesPub;
};