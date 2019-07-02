// Exercise61.cpp : Defines the entry point for the console application.
//

// Name: Jordan O' Donnell
// Student Number: 16371101
// Date: 06/03/2018
// Lab: 6
// Exercise_6_1.cpp

/*Description:
Create a new class called myarray. This class will behave
just like an array with some extra functionality. The class should have just
two private data members: a pointer to an integer, which we will use for
dynamic memory allocation, and an integer called N.

You should create a constructor that takes in an integer, sets N
equal to this value, and uses dynamic memory allocation to create memory
for N integers. You should also create a default contructor that sets the
pointer = NULL and N = 0. Similarly you should add destructors to you
class to free up any allocated memory.

Your class should have functions called void setvalue(int index) and
int getvalue(int index) that allow you to set and get the value in the array
at a given index.

You should overload the operator+ such that you can perform the
following operation in the main function A = B + C; where A, B, and C
are all objects of type myarray and the values stored in A are given by
the values stored in B follwed by the values stored in C. Therefore A has
length equal to the sum of the length of B and the length of C.

Finally, add a function to your class called void push(int newvalue);
This function should take in a new value and add it to the end of your
array. This is a little tricier than you might think as you will have to grow
the size of your array somehow to N+1.
*/

//Making Function Declarations, Function Definitions and Other Existing Header Files Available for Use for this Program
#include "stdafx.h"

int main()
{
	srand(time(NULL)); //Random number generator

	int N; //Variable that determines size of array
	std::cout << "\nEnter value for size of array: ";
	std::cin >> N;

	//General Constructor - Creating an array of random elements
	myarray arr1(N);
	std::cout << "\nGeneral Constructor for array: ";
	arr1.printArray(); //Calling print function

	//Default Constructor - Creating an array of NULL 
	myarray arr2;
	std::cout << "\nDefault Constructor for array: ";
	arr2.printArray(); //Calling print function
	
	//Setting certain index of array to user inputted value
	int setIndex; //Variable to hold the index to set
	int num; //Value to overwrite current element at that index
	std::cout << std::endl << "\nEnter the index of array to set its element's value: ";
	std::cin >> setIndex;
	std::cout << "Enter the value to be entered at index " << setIndex << ": ";
	std::cin >> num;

	//If user enters index within array length bounds then setindex to value
	if (setIndex > 0 && setIndex < N) 
	{
		arr1.setvalue(setIndex, num);
		std::cout << num << " added to index " << setIndex << " of the array: ";
		arr1.printArray();
	}
	//If user enters index out of bounds of array length print the following
	else
	{
		std::cout << "Please enter a valid index within the array length (" << N << ")" << std::endl;
	}

	//Getting the value at certain index in array
	int getIndex;
	std::cout << std::endl << "\nEnter the index of array to get its element's value: ";
	std::cin >> getIndex;

	//If user enters index within array length then return value at getindex
	if (getIndex > 0 && getIndex < N)
	{
		int num = arr1.getvalue(getIndex);
		std::cout << "Value at index " << getIndex << " is: " << num;
	}
	//If user enters index out of bounds of array length print the following
	else
	{
		std::cout << "Please enter a valid index within the array length (" << N << ")" << std::endl;
	}

	//Concatenating 2 arrays using operator+
	myarray a1(N); 
	std::cout << std::endl << "\nArray 1: ";
	a1.printArray();
	myarray a2(N);
	std::cout << "\nArray 2: ";
	a2.printArray();
	myarray sumConc(a1 + a2); //Using operator+ to add two arrays together
	std::cout << "\nConcatenated array: ";
	sumConc.printArray();

	//Pushing value onto array
	int value; //Variable that stores value of element we want to push onto array
	std::cout << std::endl << "\nEnter value to add onto Concatenated array: ";
	std::cin >> value;
	sumConc.push(value); 
	std::cout << value << " was added onto the end of the array: ";
	sumConc.printArray();

    return 0;
}

