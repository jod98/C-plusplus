/*
Author: Jordan O Donnell
Student Number: 16371101
Date: 30/01/2018
Lab: 1
Exercise: 1.5
File: Exercise_1.5_cpp.

Description: An integer is said to be prime if it is divisible
only by the two distinct factors 1 and itself. Write a program that
determines if a number is prime. Now extend the program to print all
the prime numbers between 1 and 5000
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;

int main()
{
  int num;
  bool isPrime = true;
  int limit = 5000;
  
  cout << "Please Enter Integer Value: ";
  cin >> num;
  
  for(int i=2; i<num; i++)
  {
    if(num%i == 0)
    {
      isPrime = false;
    }
  }
  
  if(isPrime)
  {
    cout << num << " is a Prime Number" << endl;
  }
  else
  {
    cout << num << " is NOT Prime Number" << endl;
  }
  
  cout << "All Prime Numbers from 1-5000 are as follows:" <<endl; 
  
  isPrime = true;
  
  for(int i=2; i<limit; i++)
  {
    isPrime = true;
    for(int j=2; j<i; j++)
    {
      if(i%j == 0)
      {
        isPrime = false;
      }
    }
    if(isPrime)
    {
      cout << i << " ";
    }
  }
 
  return 0;
}