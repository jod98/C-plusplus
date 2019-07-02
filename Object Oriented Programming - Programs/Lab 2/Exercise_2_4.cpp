/*
Author: Jordan O Donnell
Student Number: 16371101
Date: 30/01/2018
Lab: 2
Exercise: 2.4
File: Exercise_2.4_cpp.

Description: Extend the swap function from previous exercise but now add a default parameter to each function
*/

//Header files
#include <iostream>
#include <iomanip>
using namespace std;

//Function Declarations
void swapTypes(int num1, int num2, int array[], bool output = false); //Default boolean parameter output set to false
void swapTypes(float float1, float float2, float array2[], bool output = false); //Default boolean parameter output set to false
void swapTypes(char c, char d, char array1[], bool output = false); //Default boolean parameter output set to false

int main()
{
  int num1; //Variable that stores value of 1st input from user
  int num2; //Variable that stores value of 2nd input from user
  float float1;
  float float2;
  char c;
  char d;
  
  cout << "Enter 1st Integer: ";
  cin >> num1;
  cout << "Enter 2nd Integer: ";
  cin >> num2;
  
  cout << "Enter 1st Float Value: ";
  cin >> float1;
  cout << "Enter 2nd Float Value: ";
  cin >> float2;
  
  cout << "Enter 1st Character Value: ";
  cin >> c;
  cout << "Enter 2nd Character Value: ";
  cin >> d;
  
  cout << "Integers non-swapped: " << num1 << " " << num2 << endl; //Printing out integers non-swapped
  cout << "Floats non-swapped: " << float1 << " " << float2 << endl; //Printing out floats non-swapped
  cout << "Characters non-swapped: " << c << " " << d << endl; //Printing out characters non-swapped
  
  int array[] = {num1, num2}; //Creating an array that will store the variables inputted from user
  float array2[] = {float1, float2}; //Creating a float array that will store the variables inputted from user
  char array1[] = {c, d}; //Creating a character array that will store the variables inputted from the user
  
  cout << "Integers swapped: ";
  swapTypes(num1, num2, array, true); //Function call to print swapped integers. Boolean set to true allows function to print the variables swapped.
  
  cout << "Floats swapped: ";
  swapTypes(float1, float2, array2); //Function call to print swapped integers. Boolean set to false means function to print the variables swapped is not executed.
  
  cout << "Characters swapped: ";
  swapTypes(c,  d, array1, true); //Function call to print swapped characters. Boolean set to true allows function to print the variables swapped.
  
  return 0;
}

//Function that swaps the integers and prints them out
void swapTypes(int num1, int num2, int array[], bool output)
{
  for(int k=1; k>=0; k--) //Loop backwards throughout the array and print out integers swapped
  {
    if(output) //If boolean variable == true then variables will be swapped, if not then nothing printed to the screen
    {
      cout << array[k] << " ";
    }
  }
}
 
//Function that swaps the floats and prints them out
void swapTypes(float float1, float float2, float array2[], bool output)
{
  for(int i=1; i>=0; i--) //Loop backwards throughout the array and print out floats swapped
  {
    if(output) //If boolean variable == true then variables will be swapped, if not then nothing printed to the screen
    {
      cout << array2[i] << " ";
    }
  }
}

//Function that swaps the characters and prints them out
void swapTypes(char c, char d, char array1[], bool output)
{
  for(int j=1; j>=0; j--) //Loop backwards throughout the array and print out characters swapped
  {
    if(output) //If boolean variable == true then variables will be swapped, if not then nothing printed to the screen
    {
      cout << array1[j] << " ";
    }
  }
}

