/*
Author: Jordan O Donnell
Student Number: 16371101
Date: 13/02/2018
Lab: 3
Exercise: 3.5
File: Exercise_3.5_cpp.

Description: Write a program that asks the user to enter an integer, N and then use dynamic memory allocation to create an array of integers of size N. Next populate this array with random numbers between 1 and 1000; you should have learned how to do this last week. Next, write a function to sort the array in increasing order. You should display the result in your main function. Hint: maybe you should think about using the swap function that you wrote last week.
*/

//Header files
#include <iostream>
#include <cstdlib> //for rand
#include <ctime> //for time
using namespace std;

//Function Declaration
int *sortArray(int *arr1, int N); //Calling function which will sort array is ascending order

int main()
{
  //Randomly seeds new values everytime program runs
  srand(time( NULL )); //init rand()
  
  int N = 0; //Variable to store size of array
  
  cout << "Please enter integer value for array1 size: ";
  cin >> N; //User inputs value for array size
  
  int *arr1 = new int[N]; //Initialising pointer to an array of size N
  
  //Looping through array and initialising each elements using rand()
  cout << "Original Array elements: ";
  for (int i = 0; i < N; i++)
  {
    *(arr1+i) = rand() % 1000 + 1;
    cout << *(arr1+i) << " ";
  }
  
  //Looping through the sorted array and prints out the elements
  cout << "\n" << "Sorted Array elements: ";
  for(int j=0; j<N; j++)
  {
    cout << *(sortArray(arr1, N)+j) << " ";
  }
  
  delete[] arr1; //Releases block (i.e. array) of elements
  
  return 0;
}
//Function that compares the nth value to the nth+1 value of the array and swaps if nth element is > than nth+1 element
int *sortArray(int *arr1, int N)
{
  int temp = 0; //Variable that used as temporary storage to enable us to store array elements as they will be overwritten if needing to be swapped
  for(int j=1; j<=N; j++)
  {
    for(int i=0; i<N-1; i++)
    {
      if(*(arr1+i) > *(arr1+i+1)) //If value of nth element > nth+1 element then swap
      {
        temp = *(arr1+i);
        *(arr1+i) = *(arr1+i+1);
        *(arr1+i+1) = temp;
      }
    }
  }
  return arr1;
}

