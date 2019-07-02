// stdafx.cpp : source file that includes just the standard includes
// $safeprojectname$.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

//Making Function Declarations, Function Definitions and Other Existing Header Files Available for Use for this Program
#include "stdafx.h"

//Function Definitions
//General Constructor 
myarray::myarray(int Length)
{
	N = Length; //N = value passed in by user to represent length array
	p1 = new int[N]; //Dyamically allocating memory to array of size N

					 //Iterating through array and initialising values to random integers, 0-10
	for (int i = 0; i < N; i++)
	{
		*(p1 + i) = rand() % 10;
	}
}

//Default Constructor 
myarray::myarray()
{
	N = 0; //Setting length of array to 0
	p1 = NULL; //Setting pointer to NULL - points to nothing 
}

//Destructor - Reallocating memory from heap
myarray::~myarray() //Tilda (~) represents destructor
{
	delete[]p1;
}

//Function to set element in array at certain index
void myarray::setvalue(int index, int num)
{
	*(p1 + index) = num;
}

//Function to return element in array at given index
int myarray::getvalue(int index)
{
	int num = *(p1 + index);
	return num;
}

//Function that prints array elements
void myarray::printArray()
{
	for (int i = 0; i < N; i++)
	{
		std::cout << *(p1 + i) << " ";
	}
}

//Function that returns length of array 
int myarray::getLength()
{
	return N;
}

//Copy Constructor - Retains values that are deleted by the operator+. It copies the value of sum to concatenated array sumConc in main function.
myarray::myarray(const myarray &src)
{
	p1 = new int[src.N];
	N = src.N;

	for (int i = 0; i < N; i++)
	{
		(*(p1 + i)) = (*(src.p1 + i));
	}
}

//Function that adds arrays together using operator+ and returns concatenated array
myarray myarray::operator+(myarray a1)
{
	myarray *sum = new myarray(N + a1.getLength()); //Pointer to array of size a1 + a2

													//Iterating through the pointer to sum and intilialising its first N elements = a1 elements
	for (int i = 0; i < N; i++)
	{
		sum->setvalue(i, (*(p1 + i))); //Setting the value of sum elements = a1 elements
									   //*(sum + i) = *(p1 + 1);
	}

	//Iterating through the pointer to sum and initialising its elements from N to length of sum = a2 elements
	for (int i = N; i < sum->getLength(); i++)
	{
		sum->setvalue(i, a1.getvalue(i - N)); //Setting the value of sum elements+N = a2 elements
											  //*(sum + i) = setvalue(i, a1.getvalue(i - N));
	}
	return *sum; //Returns concatenated array
}

//Function to add value to array
void myarray::push(int value)
{
	myarray addArray(N + 1); //Creating an object myarray (array of N+1 length)

							 //Iterating through addArray and initiliasing elements = concatenated elements
	for (int i = 0; i < N + 1; i++)
	{
		addArray.setvalue(i, (*(p1 + i)));
	}

	//Setting the value of Nth element = value passed in by user
	addArray.setvalue(N, value);

	//To reasign old array to point at new one, the pointers are swapped when function completes. 
	//Old array is deleted rather than new one and we print new array (concatenated + 1);
	int *temp;
	temp = p1;
	p1 = addArray.p1;
	addArray.p1 = temp;

	N = N + 1; //Increase size of array to allow for another value to be pushed on if function called again
}
