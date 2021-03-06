// Exercise_4_4.cpp : Defines the entry point for the console application.

// Name: Jordan O'Donnell
// Student Number: 16371101
// Date: 20/02/2018
// Lab: 4
// Exercise: 4.4

/* Description: This question looks tricky but it’s actually very straight forward and should only take you a few minutes. At the end of the lecture slides on structures, 
there is an example of creating a linked list that stores  three peoples’ names. Copy this program to a file called exercise 4 4.cpp and compile and run it to verify it works. 
Change the structure name to student and change the contents of the structure to contain a name anda student number. #
Adapt the print function appropriately. Extend the functionality of the program with the following functions routines:

void insert name(student * head, string name, int
student number);
int list length(student * head);
bool find student(student * head, int student number);
void print student details(student *head);

Demonstrate the functionality by writing a program that allows the user to input an aribtrary number of students, specified by the user at run time. 
The program should store these students in a linked list. The program should keep inputting students until the user inputs a user with the name end at which point all the user details should be printed to the screen.
*/

#include "stdafx.h"

using namespace std;

int main()
{
	string name; //String variable to store student name
	int num; //Integer variable to store student number
	int n; //Integer variable to store number of student added to linked list

	cout << "Enter number of students: ";
	cin >> n;

	//Declaring pointers to linked list structures
	student *stud; //Pointer to the credentials of the students in linked list
	student *head; //Pointer to the credentials of the first student in linked list
	student *temp; //Pointer (Temporary) to the credentials of students in linked list and iterates through linked list until it reaches NULL (i.e. last link)

				   //Iterating through the linked list checking for "end" condition and calling on functions to add student credentials to linked list
	for (int i = 0; i<n; i++)
	{
		cout << "\nPlease enter student " << i + 1 << "'s name:";
		cin >> name;

		if (name != "end")
		{
			cout << "Please enter student " << i + 1 << "'s number:";
			cin >> num;
		}

		//Adding student credentials to head of linked list (need to locate 'head' link in order to print out list contents)
		if ((i == 0) && (name != "end"))
		{
			stud = new student;
			insertName(stud, name, num);
			temp = stud;
			head = stud;
		}

		//Adding student credentials to remaining links in the list, then temp.next points at next link which is edited and so on until we reach the end of the linked list
		else if (name != "end")
		{
			stud = new student;
			insertName(stud, name, num);
			temp->next = stud;
			temp = temp->next;
		}
	}
	temp->next = NULL; //Temp now points to NULL (as it is now on last link in linked list)

	//Printing out the linked list length

	int len = listLength(head);
	cout << "\nLinked list length is: ";
	cout << len << endl;

	//Printing out the returned boolean value if student no is found within the list
	int studNo;
	cout << "\nEnter student number to search for in linked list:";
	cin >> studNo;
	if (findStudent(head, studNo))
	{
		cout << "\nTrue: " << studNo << " was found in the linked list" << endl;
	}
	else
	{
		cout << "\nFalse: " << studNo << " was not found in the linked list" << endl;
	}

	//Calling printDetails to print contents of linked list
	printDetails(head);

	return 0;
}


