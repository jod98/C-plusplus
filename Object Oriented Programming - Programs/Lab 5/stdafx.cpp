// stdafx.cpp : source file that includes just the standard includes
// Exercise_5_4.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

//Making Function Declarations, Function Definitions and Other Existing Header Files Available for Use for this Program
#include "stdafx.h"

//Function Definitions

//Calculating the Modulus of Complex Number
float Complex::Modulus(void)
{
	float mod;
	mod = sqrt((REAL*REAL) + (IMAGINARY*IMAGINARY)); //mod = sqrt(pow(REAL, 2) + pow(IMAGINARY, 2))
	return mod;
}

//Calculating the Angle of Complex Number from Positive X-Axis
float Complex::Argument(void) 
{
	float arg = atan(IMAGINARY / REAL);
	
	if ((REAL < 0) && (IMAGINARY > 0)) //Located in top left portion
	{
		return 180 + arg; //if 3+4i then arg = -53 + 180 = 127 deg
	}
	else if ((REAL < 0) && (IMAGINARY < 0)) //Located in bottom left portion
	{
		return 180 + arg; //if 3+4i then arg = 53 + 180 = 233 deg
	}
	else if ((REAL > 0) && (IMAGINARY < 0)) //Located in bottom right portion
	{
		return 360 + arg; //if 3+4i then arg = -53 + 360 = 307 deg
	}
	else //REAL > 0 && IMAGINARY > 0, Located in top right portion
	{
		return arg;  //if 3+4i then arg = 53 deg
	}
	arg = (arg * 180.0) / 3.14;
	return arg;
}

//Calculating the Conjugate of Complex Number
void Complex::Conjugate(void)
{
	IMAGINARY = -1 * IMAGINARY;
}

//Defualt Constructor Definition
Complex::Complex()
{
	REAL = 0.0;
	IMAGINARY = 0.0;
}

//General Constructor Definition
Complex::Complex(float a, float b)
{
	REAL = a;
	IMAGINARY = b;
}

//Function that resets real and imaginary parts of complex number - user input
void Complex::setValues(float x, float y)
{
	REAL = x;
	IMAGINARY = y;
}

//Function that prints out complex number
void Complex::print()
{
	std::cout << "\n" <<  REAL << "+(" << IMAGINARY << "i)" << std::endl;
}

//Function that performs addition of two complex numbers
Complex Complex::operator+ (Complex comp1)
{
	Complex sum;
	sum.REAL = comp1.REAL + REAL; //How does 'REAL' reference my c2.REAL value
	sum.IMAGINARY = comp1.IMAGINARY + IMAGINARY;
	return sum;
}

//Function that performs product of two complex numbers
Complex Complex::operator* (Complex comp1)
{
	Complex product;
	product.REAL = ((comp1.REAL * REAL) - (comp1.IMAGINARY * IMAGINARY));
	product.IMAGINARY = ((comp1.REAL * IMAGINARY) + (comp1.IMAGINARY * REAL));
	return product;
}

////////////////////////////////////////////////////////////////

//Default Constructor for 1D matrix
OneD_Complex_matrix::OneD_Complex_matrix(int Length)
{
	p1 = new Complex[Length]; //Creating an array/matrix of complex numbers
	N = Length; //N = value passed in by user to represent length of 1D complex matrix
	int i;
	for (i = 0; i<N; i++)
	{
		p1[i].setValues(0, 0);//Calling setValues function in Complex Class (default contructor - 0 for real and 0 for imaginary)
	}
}

//Randomly Setting Values for 1D matrix
void OneD_Complex_matrix::set_random_values()
{
	float randReal;
	float randImag;
	int i;

	//Iterating through the array and setting both Real and Imag parts to Random Float values
	for (i = 0; i<N; i++) {
		randReal = rand() % 100; //Random Number Generator for Real
		randImag = rand() % 100; //Random Number Generator for Imaginary
		p1[i].setValues(randReal, randImag);//Calling setValues function in Complex Class
	}
}

//Computing Conjugate of Complex Numbers in 1D matrix
void OneD_Complex_matrix::conjugate()  //Gets the conjugate of an array
{
	int i;
	//Iterating through the matrix and retrieving conjugate of each complex number
	for (i = 0; i<N; i++) {

		p1[i].Conjugate(); //Calling on Conjugate function in Complex Class
	}
}

//Printing out the contents of the matrix (numerous complex numbers)
void OneD_Complex_matrix::print1D(int N)
{
	for (int i = 0; i < N; i++)
	{
		p1[i].print(); //Calling on print conjugate function in Complex Class
	}
}

//Destructor for 1D matrix - Reallocate memory from the heap
OneD_Complex_matrix::~OneD_Complex_matrix() //Tilda (~) represents destructor
{
	delete[]p1;
}
