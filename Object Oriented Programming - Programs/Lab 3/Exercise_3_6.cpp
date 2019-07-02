/*
Author: Jordan O Donnell
Student Number: 16371101
Date: 13/02/2018
Lab: 3
Exercise: 3.6
File: Exercise_3.6_cpp.

Description: Write a program that creates two 4x4 arrays of doubles, which represent two 2D matrices. You can set the values when you declare the arrays using the chain brackets. Now write a function that takes in both ’matrices’ and return the matrix product. Demonstrate your function in action in the main function; print the values of the result to screen with clear formatting
*/

//Header files
#include <iostream>
using namespace std;

//Constants that represent row and columns of arr1, arr2 and productMatrix
const int ROW_1 = 4;
const int COLUMN_1 = 4;
const int ROW_2 = 4;
const int COLUMN_2 = 4;
const int ROW_3 = 4;
const int COLUMN_3 = 4;


//Function Declaration
double **matrixProduct(double arr1[ROW_1][COLUMN_1], double arr2[ROW_2][COLUMN_2]);
void printProductArrays(double **productArr);

int main()
{
	
  double arr1[ROW_1][COLUMN_1] = {{7.3, 3.5, 8.7, 9.3},{5.6, 1.1, 9.2, 2.1},{6.7, 7.3, 3.1, 1.2},{2.8, 9.3, 5.2, 6.9}};
  double arr2[ROW_2][COLUMN_2] = {{2.9, 9.7, 4.5, 7.6},{6.5, 3.4, 2.3, 8.1},{7.7, 3.6, 5.8, 6.3},{8.2, 2.1, 2.7, 1.4}};
  
  //Printout arr1 and arr2 using matrix method (3 for loops)
  
  cout << "Array 1 Elements:" << endl;
  for(int i=0; i<ROW_1; i++)
  {
    for(int j=0; j<COLUMN_1; j++)
    {
      cout << arr1[i][j] << "\t";
    }
    cout << endl << endl;
  }
  
  cout << "\n" << "Array 2 Elements:" << endl;
  for(int i=0; i<ROW_2; i++)
  {
    for(int j=0; j<COLUMN_2; j++)
    {
      cout << arr2[i][j] << "\t";
    }
    cout << endl << endl;
  }
  
  cout << "\n" << "Product of Two Matrices is:" << endl;
	
	//Pointer to 2D Matrix = 2D matrix product returned from functon
  double **productMatrix = matrixProduct(arr1, arr2);
  
  //Calling function that will print product of two matrices
  printProductArrays(productMatrix);
  
  //Releases array of elements (pointer)
  for(int i=0; i<4; i++)
  {
  	delete[] productMatrix[i];
  }
  delete[] productMatrix;

  return 0;
}

//Function that passes in arr1 and arr2 and calculates the product of the two matrices
double **matrixProduct(double arr1[ROW_1][COLUMN_1], double arr2[ROW_2][COLUMN_2])
{
	double **productArr = new double*[4]; //Pointer to 2D array
	
	//Loops and creates an array, 4 columns for every 4 rows
	for(int i=0; i<4; i++)
  {
  	productArr[i] = new double[COLUMN_1];
  }
	
	//Calculation of matrix product
  for(int i=0; i<ROW_1; i++)
  {
    for(int j=0; j<COLUMN_2; j++)
    {
      for(int k=0; k<COLUMN_1; k++)
      {
        productArr[i][j] += arr1[i][k] * arr2[k][j];
      }
    }
  }
  return productArr;
}

//Printing Matrix Array by looping through elements
void printProductArrays(double **productArr)
{
	for(int i=0; i<ROW_3; i++)
	{
		for(int j=0; j<COLUMN_3; j++)
		{
			cout << *(*(productArr+i)+j) << "\t"; //"\t = tab"
		}
		cout << endl << endl;
	}
}
