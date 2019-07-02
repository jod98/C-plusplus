/*
Author: Jordan O Donnell
Student Number: 16371101
Date: 30/01/2018
Lab: 1
Exercise: 1.3
File: Exercise_1.3_cpp.

Description: Write a program that inputs a five-digit number, separates
the number into its individual digits and prints the digits separated
from one another by three spaces each.
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;

int main()
{
  string myStr;
  int i=0;
  
  cout << "Enter First Integer Value: ";
  cin >> myStr;
  
  if(myStr.length()!=5)
  {
    cout << "Sorry, this is not a 5 Digit Number" << endl;
    return 0;
  }
  
  for(i=0; i<myStr.length(); i++)
  {
    cout << myStr.at(i) << setw(3);
  }
  
  return 0;
}