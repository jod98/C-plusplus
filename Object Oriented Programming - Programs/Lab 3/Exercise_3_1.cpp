/*
Author: Jordan O Donnell
Student Number: 16371101
Date: 13/02/2018
Lab: 3
Exercise: 3.1
File: Exercise_3.1_cpp.

Description: Write a program that creates an array of integers of of size 10; you should declare the array and set the 10 values at the same time using the chain brackets. The program must output the largest element in the array, and the index at which that element was found.
*/

//Header files
#include <iostream>
using namespace std;

//Constants
const int ARRAY_SIZE = 10;

int main()
{
  int myArray[ARRAY_SIZE] = {12, 16, 36, 8, 95, 23, 77, 37, 17, 45}; //Initialise array elements
  int largest = 0; //Variable to store largest value
  int position = 0; //Variable to store index at which largest value is found in array
  
  cout << "Array values: ";
  
  //Loops through the array of size 10 and adds random elements from 1-100 to it
  for(int i=0; i<ARRAY_SIZE; i++)
  {
    cout << myArray[i] << " ";
    
    //If element at array[i] > largest, then set largest = array[i]
    if(myArray[i] > largest)
    {
      largest = myArray[i];
      position = i; //Variable that stores index at which largest value is found
    }
  }
  
  cout << "\n" << "Largest element is at index: " << position << " of the array: " << endl;
  
  cout << "Largest element in array: " << largest << endl; //Printing out largest value

  return 0; //Main method return an integer 
}