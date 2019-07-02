/*
Author: Jordan O Donnell
Student Number: 16371101
Date: 30/01/2018
Lab: 2
Exercise: 2.5
File: Exercise_2.5_cpp.

Description: Request user to input a sequence of 5 doubles and then prints that sequence in reverse.
*/

//Header files
#include <iostream>
#include <iomanip>
using namespace std;

const int ARRAY_LEN = 5; //Const value that determines size of array

int main()
{
  double array[ARRAY_LEN]; //Creating an array of size 5
  
  cout << "Please enter 5 double values: ";
  
  //Looping through array slots inputting doubles from the user
  for(int i=0; i<ARRAY_LEN; i++)
  {
    cin >> array[i];
  }
  
  cout << "Doubles swapped: ";
  
  //Looping backwards through my array printing doubles out in reverse
  for(int j=ARRAY_LEN-1; j>=0; j--)
  {
    cout << array[j] << " ";
  }
  
  return 0;
}