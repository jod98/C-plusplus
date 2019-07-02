/*
Author: Jordan O Donnell
Student Number: 16371101
Date: 13/02/2018
Lab: 3
Exercise: 3.3
File: Exercise_3.3_cpp.

Description: Repeat exercise 2 but this time your program/function should work for an array of length N, where N is input by the user; the user should be asked to enter each value one at a time. You must use a pointer and dynamic allocation to create the array. You will also need to change your function to accept a pointer as input, rather than an array
*/

//Header files
#include <iostream>
using namespace std;

//Function Declaration
int findMax(int *myArray, int num_elements, int largest, int position);

int main()
{
  int num_elements = 0;
  
  //Asking user to input size of array
  cout << "Please enter integer value for array size: ";
  cin >> num_elements; 
  
  int *myArray = new int[num_elements];
  int largest = 0; //Variable to store largest value
  int position = 0; //Variable to store index at which largest is found in the array
  
  //Asking user to input array elements
  for (int i = 0; i < num_elements; i++)
  {
    cout << "Input element " << i << ":";
    cin >> myArray[i];
  }
  
  largest = findMax(myArray, num_elements, largest, position); //Calling function
  cout << "Largest element in the array is: " << largest;
  
  delete[] myArray; //Releases block (i.e. array) of elements
  
  return 0; //Main method return an integer 
}
  
  int findMax(int *myArray, int num_elements, int largest, int position)
  {
    cout << "Array elements: ";
    for(int i=0; i<num_elements; i++)
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
  