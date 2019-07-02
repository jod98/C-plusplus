/*
Author: Jordan O Donnell
Student Number: 16371101
Date: 13/02/2018
Lab: 3
Exercise: 3.4
File: Exercise_3.4_cpp.

Description: Write a function that receives as input two arrays of doubles of arbitrary length. The function should returns an array of doubles that is made up of a concatenation of the two input arrays. Demonstrate your function in action in your main function by printing the full contents of the new array. Hint: you will need to use dynamic memory allocation to create the new array and you wont actually return an array, rather you must return a pointer
*/

//Header files
#include <iostream>
using namespace std;

//Function Declaration
double* concatenate(double *arr1, int num_elements1, double *arr2, int num_elements2);

int main()
{
  int num_elements1 = 0;
  int num_elements2 = 0;
  
  cout << "Please enter integer value for array1 size: ";
  cin >> num_elements1; 
  cout << "Please enter integer value for array2 size: ";
  cin >> num_elements2; 
  
  double *arr1 = new double[num_elements1];
  double *arr2 = new double[num_elements2];
  
  //Asking user to input array elements
  for (int i = 0; i < num_elements1; i++)
  {
    cout << "Array 1 Element " << i << " is: ";
    cin >> arr1[i];
  }
  cout << "\n";
  
  //Asking user to input array elements
  for (int j = 0; j < num_elements2; j++)
  {
    cout << "Array 2 Element " << j << " is: ";
    cin >> arr2[j];
  }
  cout << "\n";
  
  //Creating a double pointer which stores points to concatenated double array elements
  double *concat = concatenate(arr1, num_elements1, arr2, num_elements2);
  
  cout << "Concatenated Array is: ";
  //Loop through double pointer array and print out elements which are concatenated
  for(int i = 0; i<num_elements1+num_elements2; i++)
  {
    cout << *(concat + i) << " ";
  }
  
  delete[] arr1; //Releases block (i.e. array) of elements
  delete[] arr2; //Releases block (i.e. array) of elements
  delete[] concat; //Releases block (i.e. array) of elements
  
  return 0;
}

//Function in which concatenates two double arrays
double *concatenate(double *arr1, int num_elements1, double *arr2, int num_elements2)
{
  //Stores length of two arrays in double pointer called result
  double *result = new double[num_elements1 + num_elements2];
  
  //Loops through array elements from array1 and array2 and adds them to double pointer array called result
  for(int i=0; i<num_elements1; i++)
  {
    *(result+i) = *(arr1+i);
  }
  
  for(int i=0; i<num_elements2; i++)
  {
    *(result+num_elements1 + i) = *(arr2+i);
  }
  
  return result;
}
