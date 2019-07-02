/*
Author: Jordan O Donnell
Student Number: 16371101
Date: 30/01/2018
Lab: 1
Exercise: 1.2
File: Exercise_1.2_cpp.

Description: Write a program that reads in two integers and determines
and prints if the first is a multiple of the second.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
  int first;
  int second;
  
  cout << "Enter First Integer Value: ";
  cin >> first;
  cout << "Enter Second Integer Value: ";
  cin >> second;
  
  if(first % second == 0)
  {
    cout << first << " is a Multiple of " << second << endl;
  }
  else
  {
    cout << first << " is NOT a Multiple of " << second << endl;
  }
  
  return 0;
}