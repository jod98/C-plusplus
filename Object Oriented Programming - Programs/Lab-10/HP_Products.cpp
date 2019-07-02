#include "HP_Products.h"

//Constructor
HP_Products::HP_Products()
{
	uniqueID = time(0); //uniqueID set to current time i.e. 16:43:32
	date = localtime(&uniqueID); //date set to date of current day
}

//Function that calculates tax - (IF STATEMENT NOT TAKE IN DATES AS OPPOSED TO TIMES???????????????)
float HP_Products::getTax()
{
	time_t now = time(0); //now set to current time i.e. 16:43:32
	long late = 2; //late set to 28 days, used to determine if tax bill payed on time
	//(If current time - purchase time > 2 seconds), must add 2% compound interest onto tax bill
	if (now - uniqueID > late)
	{
		return tax*1.02; //Returning tax with 2% compound interest (tax bill not payed on time)
	}
	return tax; //Returning tax without 2% compound interest (tax bill payed on time)

}


