#include "Book_details.h"
#include "Book.h"
#include "Warehouse.h"
#include "Book_shop.h"

int main(void)
{
	//request info to set up warehouse and shop
	int hard_copies, soft_copies, mag_copies;
	cout << endl << "Enter number of hardbacks in warehouse: "; cin >> hard_copies;
	cout << "Enter number of softbacks in warehouse: "; cin >> soft_copies;
	cout << "Enter number of magazines in warehouse: "; cin >> mag_copies;
	Warehouse Dublin_Warehouse(soft_copies, hard_copies, mag_copies);//the two integter are thenumber of harbacks and softbacks in the warehouse.
	Book_shop Mullingar(Dublin_Warehouse);

	Dublin_Warehouse.print_all_books();
	Mullingar.print_all_books();

	int barcode, copies;
	cout << endl << "Enter barcode to transfer: "; cin >> barcode;
	cout << endl << "Enter number of copies to transfer: "; cin >> copies;

	//Transfer Books
	Dublin_Warehouse.transfer(Mullingar, barcode, copies);

	//Check stock
	Dublin_Warehouse.print_all_books();
	Mullingar.print_all_books();

	//Sell one copy
	Mullingar.sell(barcode, 1);
	Mullingar.print_all_books();

	return(0);
}










//Book_details Book1("Pat O Brian", "Master and Commander", "Penguin", 2, 10110111);
//Book1.print_details();