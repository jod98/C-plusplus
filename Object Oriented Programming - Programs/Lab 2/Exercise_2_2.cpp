/*
Author: Jordan O Donnell
Student Number: 16371101
Date: 06/02/2018
Lab: 2
Exercise: 2.2
File: Exercise_2.2_cpp.

Description: Write function called swap, takes two integers as input and swaps their values. Print integers user had inputted. Swap the integers and then reprint them.
*/

//Header files
#include <iostream>
#include <iomanip>
using namespace std;

//Function Declarations
void swapTypes(int num1, int num2, int array[]);

int main()
{
  int num1; //Variable that stores value of 1st input from user
  int num2; //Variable that stores value of 2nd input from user

  cout << "Enter 1st Integer: ";
  cin >> num1;
  cout << "Enter 2nd Integer: ";
  cin >> num2;
  
  cout << "Integers non-swapped: " << num1 << " " << num2 << endl; //Printing out integers non-swapped
  
  int array[] = {num1, num2}; //Creating an array that will store the variables inputted from user
  
  cout << "Integers swapped: ";
  swapTypes(num1, num2, array); //Function call to print swapped integers
  
  return 0;
}

//Function that swaps the integers and prints them out
void swapTypes(int num1, int num2, int array[])
{
  for(int i=1; i>=0; i--) //Loop backwards throughout the array and print out integers swapped
  {
    cout << array[i] << " ";
  }
}
 