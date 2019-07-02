/*
Author: Jordan O Donnell
Student Number: 16371101
Date: 13/02/2018
Lab: 3
Exercise: 3.2
File: Exercise_3.2_cpp.

Description: Repeat exercise 1 but this time write a function to find the maximum value, called find max, which takes in an array and returns both the largest element in the array, and the index at which that element was found. Demonstrate your function working in the main function. Hint: maybe you should return an array with two values
*/

//Header files
#include <iostream>
using namespace std;

//Function Declaration
int findMax(int myArray[], int largest, int position);

//Constants
const int ARRAY_SIZE = 10; //Declaring array size

int main()
{
  int myArray[ARRAY_SIZE] = {12, 16, 36, 8, 95, 23, 77, 37, 17, 45}; //Initialise array elements
  int largest = 0; //Variable to store largest value
  int position = 0; //Variable to store index at which largest value is found
  
  largest = findMax(myArray,largest, position); //Setting variable position = index at which largest value is found in array
  cout << "Largest element in array: " << largest << endl; //Printing largest
  
  return 0; //Main method return an integer 
}
  
  int findMax(int myArray[], int largest, int position)
  {
    cout << "Array values: ";
    
    //Loops through the array of size 10 and adds random elements from 1-100 to it
    for(int i=0; i<10; i++)
    {
      cout << myArray[i] << " ";
      
      //If element at array[i] > largest, then set largest = array[i]
      if(myArray[i] > largest)
      {
        largest = myArray[i]; 
        position = i; //Setting variable position = index at which largest value is found in array
      }
    }
    cout << "\n" << "Largest element is at index: " << position << " of the array: " << endl;
    return largest;
  }