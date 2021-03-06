// Exercise_5_4.cpp : Defines the entry point for the console application.
//

// Name: Jordan O' Donnell
// Student Number: 16371101
// Date: 27/02/2018
// Lab: 5
// Exercise_5_4.cpp

/*Description:
Create a new class called OneD Complex matrix. This class should contain two private data members, a pointer to type Complex and an integer N. 
You should create a constructor with the following prototype

OneD Complex matrix(int N)

This constructor should take in a single paramater and use this to dynamically allocate memory for a 1D matrix of Complex numbers, 
it should then set all of the real values and imaginary values to be zero.
Create a public method to set the values to random values and create a second public method to convert the matrix into its conjugate. 
The function prototypes should look like:

void set random values()
void conjugate()

Demonstrate objects of your new class in action in the main function.
Finally you should add a destructor to delete the allocated memory.
*/

//Making Function Declarations, Function Definitions and Other Existing Header Files Available for Use for this Program
#include "stdafx.h"

int main()
{
	//Randomly seeds new values everytime program runs
	srand(time(NULL)); //init rand()

	float x, y ,r, r1, i, i2;

	//Creating a new Complex number using Default Constructor
	Complex c1;
	std::cout << "\nDefault Constructor Complex Number: ";
	c1.print();

	//Creating a new Complex number using General Constructor
	Complex c2(5, 12);
	std::cout << "\nGeneral Constructor Complex Number: ";
	c2.print();

	//Complex number reset using values of user input
	std::cout << "\nReset Complex Number's Real Part: ";
	std::cin >> x;

	std::cout << "Reset Complex Number's Imaginary Part: ";
	std::cin >> y;

	//Resetting values of c2 complex number
	c2.setValues(x, y);
	std::cout << "\nSet Values of Complex Number: ";
	c2.print();

	//Calling function to print out the modulus of reset complex number
	float mod = c2.Modulus();
	std::cout << "\nModulus of Complex Number : " << x << " + (" << y << "i) is " << mod << std::endl;

	//Calling function to print out the argument of reset complex number
	float arg = c2.Argument();
	std::cout << "\nArgument of Complex Number : " << x << " + (" << y << "i) is " << arg << std::endl;

	//Calling function to print out the conjugate of reset complex number
	c2.Conjugate();
	std::cout << "\nConjugate of Complex Number : " << x << " + (" << y << "i) is ";
	c2.print();

	//User inputs value for 1st and 2nd complex number parts
	std::cout << "\nEnter 1st Complex Number's Real Part: ";
	std::cin >> r;
	std::cout << "Enter 1st Complex Number's Imaginary Part: ";
	std::cin >> i;
	std::cout << "\nEnter 2nd Complex Number's Real Part: ";
	std::cin >> r1;
	std::cout << "Enter 2nd Complex Number's Imaginary Part: ";
	std::cin >> i2;

	//Creating two new complex numbers to add and multiply together
	Complex comp1(r, i);
	Complex comp2(r1, i2);

	//Function call to operator+ (+ symbol calls on the function)
	Complex sum = comp1 + comp2;
	std::cout << "\nSum of Complex Numbers : ((" << r << "+(" << i << "i) + " << r1 << "+(" << i2 << "i)) is ";
	sum.print(); //Prints out sum of comp1 and comp2

	//Function call to operator* (* symbol calls on the function)
	Complex product = comp1 * comp2;
	std::cout << "\nProduct of Complex Numbers : ((" << r << "+(" << i << "i) * " << r1 << "+(" << i2 << "i)) is ";
	product.print(); //Prints out product of comp1 and comp2

	////////////////////////////////////////////// 1D Complex Matrix

	int N; //Variable for size of matrix
	std::cout << "\nEnter size of OneD_Complex_matrix: ";
	std::cin >> N;

	OneD_Complex_matrix OneD_Matrix(N); //Creating a 1D matrix of size N

	//Creating a new Complex matrix using Default Constructor
	std::cout << "\nDefault Constructor for OneD_Complex_matrix: ";
	OneD_Matrix.print1D(N); //Calling print function
	
	//Randomly setting the values of the 1D matrix
	std::cout << "\nRandom Values for OneD_Complex_matrix: ";
	OneD_Matrix.set_random_values(); //set random values to the matrix
	OneD_Matrix.print1D(N); //Calling print function
	
	//Printing conjugate of matrix
	std::cout << "\nConjugate for OneD_Complex_matrix: ";
	OneD_Matrix.conjugate();
	OneD_Matrix.print1D(N); //Calling print function

    return 0;
}

