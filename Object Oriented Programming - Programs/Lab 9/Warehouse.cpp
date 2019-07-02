#pragma once
#include "Warehouse.h"
#include "Book_shop.h"
#include "Book_details.h"
#include <vector>

Warehouse::Warehouse()
{
	Hardbacks = NULL;
	Softbacks = NULL;
	Magazines = NULL;
}

Warehouse::Warehouse(int Num_soft, int Num_hard, int Num_mags)
{
	num_hards = Num_hard;
	num_softs = Num_soft;
	num_mags = Num_mags;

	string A, B, C, H; int D, E, G; float F;
	//Hardbacks = new Hardback [Num_hard];
	vector<Hardback> Hardbacks(Num_hard);
	if (Num_hard>0) cout << "Please enter details of all " << Num_hard << " hardback books in the warehouse:" << endl;
	for (int i = 0; i<Num_hard; i++) {
		cout << endl << "For Book " << i + 1 << endl;
		cout << endl << "Please enter title: " << endl; cin >> A;
		cout << endl << "Please enter author: " << endl; cin >> B;
		cout << endl << "Please enter publisher: " << endl; cin >> C;
		cout << endl << "Please enter edition: " << endl; cin >> D;
		cout << endl << "Please enter barcode: " << endl; cin >> E;
		cout << endl << "Please enter price: " << endl; cin >> F;
		cout << endl << "Please enter number of copies: " << endl; cin >> G;
		Hardbacks[i].Book_set_details(A, B, C, D, E, F, G);
	}

	//Softbacks = new Softback [Num_soft];
	vector<Softback> Softbacks(Num_soft);
	if (Num_soft>0) cout << endl << "Please enter details of all " << Num_soft << " hardback books in the warehouse:" << endl;
	for (int i = 0; i<Num_soft; i++) {
		cout << endl << "For Book " << i + 1 << endl;
		cout << endl << "Please enter title: " << endl; cin >> A;
		cout << endl << "Please enter author: " << endl; cin >> B;
		cout << endl << "Please enter publisher: " << endl; cin >> C;
		cout << endl << "Please enter edition: " << endl; cin >> D;
		cout << endl << "Please enter barcode: " << endl; cin >> E;
		cout << endl << "Please enter price: " << endl; cin >> F;
		cout << endl << "Please enter number of copies: " << endl; cin >> G;
		Softbacks[i].Book_set_details(A, B, C, D, E, F, G);
	}

	//Magazines = new Magazine[Num_mags];
	vector<Magazine> Magazines(Num_mags);
	if (Num_mags>0) cout << "Please enter details of all " << Num_mags << " magazine books in the warehouse:" << endl;
	for (int i = 0; i<Num_mags; i++) {
		cout << endl << "For Magazine " << i + 1 << endl;
		cout << endl << "Please enter title: " << endl; cin >> A;
		cout << endl << "Please enter author: " << endl; cin >> B;
		cout << endl << "Please enter publisher: " << endl; cin >> C;
		cout << endl << "Please enter edition: " << endl; cin >> D;
		cout << endl << "Please enter monthly edition: " << endl; cin >> H;
		cout << endl << "Please enter barcode: " << endl; cin >> E;
		cout << endl << "Please enter price: " << endl; cin >> F;
		cout << endl << "Please enter number of copies: " << endl; cin >> G;
		Magazines[i].Magazine_set_details(A, B, C, D, E, F, G, H);
	}
}

void Warehouse::print_all_books()
{
	cout << endl << "LIST OF HARDBACKS:" << endl;
	for (int i = 0; i<num_hards; i++) {
		Hardbacks[i].Book_print();
		cout << endl;
	}
	cout << endl << "LIST OF SOFTBACKS:" << endl;
	for (int j = 0; j<num_softs; j++) {
		Softbacks[j].Book_print();
		cout << endl;
	}
	cout << endl << "LIST OF MAGAZINES:" << endl;
	for (int k = 0; k<num_mags; k++) {
		Magazines[k].Magazine_print();
		cout << endl;
	}
}

void Warehouse::transfer(Book_shop &A, int bar, int amount)
{
	//search for unique barcode in both the warehouse and bookshop databases and transfer number of copies 
	int i = 0;
	bool found = false;
	while ((i < num_hards) && (found == false))
	{
		if (Hardbacks[i].details->Barcode == bar)
		{
			for (int j = 0; j < A.num_hards; j++)
			{
				if (A.Hardbacks[i].details->Barcode == bar)
				{
					while (amount < 0)
					{
						cout << endl << "negative transfer not allowed. Reenter amount to transfer: " << endl; cin >> amount;
					}
					if (Hardbacks[i].num_copies >= amount)
					{
						Hardbacks[i].num_copies -= amount;
						A.Hardbacks[i].num_copies += amount;
					}
					else
					{
						cout << endl << "not enough stock to transfer." << endl;
					}
				}
			}
			found = true;
		}
		i++;
	}
	i = 0;
	while ((i < num_softs) && (found == false))
	{
		if (Softbacks[i].details->Barcode == bar)
		{
			for (int j = 0; j < A.num_softs; j++)
			{
				if (A.Softbacks[i].details->Barcode == bar)
				{
					while (amount < 0)
					{
						cout << endl << "negative transfer not allowed. Reenter amount to transfer: " << endl; cin >> amount;
					}
					if (Softbacks[i].num_copies >= amount)
					{
						Softbacks[i].num_copies -= amount;
						A.Softbacks[i].num_copies += amount;
					}
					else
					{
						cout << endl << "not enough stock to transfer." << endl;
					}
				}
			}
			found = true;
		}
		i++;
	}
	if (found == false)
	{
		cout << endl << "No such book exists in the warehouse.";
	}

	while ((i < num_mags) && (found == num_mags))
	{
		if (Magazines[i].details->Barcode == bar)
		{
			for (int j = 0; j < A.num_mags; j++)
			{
				if (A.Magazines[i].details->Barcode == bar)
				{
					while (amount < 0)
					{
						cout << endl << "negative transfer not allowed. Reenter amount to transfer: " << endl; cin >> amount;
					}
					if (Magazines[i].num_copies >= amount)
					{
						Magazines[i].num_copies -= amount;
						A.Magazines[i].num_copies += amount;
					}
					else
					{
						cout << endl << "not enough stock to transfer." << endl;
					}
				}
			}
			found = true;
		}
		i++;
	}
	if (found == false)
	{
		cout << endl << "No such magazines exists in the warehouse.";
	}
}

void Warehouse::Add(int N, int num_hards, int num_softs, int num_mags)
{
	cout << endl << "Adding a copy using vectors to Hardbacks:" << endl;
	vector<Hardback> Hardbacks(num_hards);
	for (int i = 0; i<num_hards; i++) {
		Hardbacks.push_back(Hardback H2);
		cout << endl;
	}
	cout << endl << "Adding a copy using vectors to Softbacks:" << endl;
	vector<Softback> Softbacks(num_softs);
	for (int j = 0; j<num_softs; j++) {
		Softbacks.push_back(Softback S2);
		cout << endl;
	}
	cout << endl << "Adding a copy using vectors to Magazines:" << endl;
	vector<Magazine> Magazines(num_mags);
	for (int k = 0; k<num_mags; k++) {
		Magazines.push_back(Magazine M2);
		cout << endl;
	}
}

void Warehouse::Subtract(int N, int num_hards, int num_softs, int num_mags)
{
	cout << endl << "Subtracting a copy using vectors to Hardbacks:" << endl;
	vector<Hardback> Hardbacks(num_hards);
	for (int i = 0; i<num_hards; i++) {
		Hardbacks.pop_back();
		cout << endl;
	}

	cout << endl << "Subtracting a copy using vectors to Softbacks:" << endl;
	vector<Softback> Softbacks(num_softs);
	for (int j = 0; j<num_softs; j++) {
		Softbacks.pop_back();
		cout << endl;
	}
	cout << endl << "Subtracting a copy using vectors to Magazines:" << endl;
	vector<Magazine> Magazines(num_mags);
	for (int k = 0; k<num_mags; k++) {
		Magazines.pop_back();
		cout << endl;
	}
}



