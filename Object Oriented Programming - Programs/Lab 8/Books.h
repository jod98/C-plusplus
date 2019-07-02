#pragma once

#include "Publication.h"

//Function Declarations
class Books : public Publication
{
	string author;
	bool bookType;
public:
	void setBookDetails(string t, string e, string p, string a, int b, int n, bool bookType);
	void printBooks();
	static int copiesBook;
};

