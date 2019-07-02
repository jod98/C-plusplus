/*
Author: Jordan O Donnell
Student Number: 16371101
Date: 06/02/2018
Lab: 2
Exercise: 2.1
File: Exercise_2.1_cpp.

Description: Roll two dice using 'rand' call. Calculate the sum of the two values from the dice. Should roll the dice user specified amount of times.
*/

//Header files
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int diceRolls; //Variable that stores the values of die rolls the user wishes
  cout << "Enter integer for number of die rolls: ";
  cin >> diceRolls;
  
  int array[11] = {0}; //Creating an array of 12 elements (0-11 = 12)
  int sum = 0;
  
  //Adding elements created by sum function to array
  for(int i=0; i<diceRolls; i++)
  {
    sum = (rand() % 6 + 1) + (rand() % 6 + 1); //Adds random integers from 1-6 together
    array[sum-2]++; //Min value of sum of two die is 2 so if we dont say 'sum-2' then value will be stored in 2nd index of the array rather than 0 index of array. Increments number inputted into array to tell us how many times that number has appeared.
  }
  
  //Calculate percentage of values that appear
  for(int j=0; j<11; j++)
  {
    cout << j+2 <<": "<< (float)array[j]*100/diceRolls << "%\n"; //j+2 as we want to print out how many times 2,3,4.. times has appeared as we get 0 or 1 for sum of two die
  }
  
 return 0;
}



