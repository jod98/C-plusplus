/*
Author: Jordan O Donnell
Student Number: 16371101
Date: 30/01/2018
Lab: 1
Exercise: 1.1
File: Exercise_1.1_cpp.

Description: Write a program that inputs three integers and prints sum, average,
product, smallest and largest of these numbers.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
  int first;
  int second;
  int third;
  double sum;
  double average;
  int product;
  
  
  cout << "Enter First Integer Value: ";
  cin >> first;
  cout << "Enter Second Integer Value: ";
  cin >> second;
  cout << "Enter Third Integer Value ";
  cin >> third;
  
  //Sum
  sum = first + second + third;
  cout << "Sum of Three Integer Values: " << sum << endl;
  
  //Average
  average = sum/3;
  cout << "Average of Three Integer Values " << average << endl;
  
  //Product 
  product = (first*second*third);
  cout << "Product of Three Integer Values " << product << endl;
  
  //Smallest
  if((first <= second)&&(first <= third))
  {
    cout << "Smallest Number is: " << first << endl;
  }
  else if((second <= first)&&(second <= third))
  {
    cout << "Smallest Number is: " << second << endl;
  }
  else if((third <= first)&&(third <= second))
  {
    cout << "Smallest Number is: " << third << endl;
  }
  
  //Largest
  if((first >= second)&&(first >= third))
  {
    cout << "Largest Number is: " << first << endl;
  }
  else if((second >= first)&&(second >= third))
  {
    cout << "Largest Number is: " << second << endl;
  }
  else if((third >= first)&&(third >= second))
  {
    cout << "Largest Number is: " << third << endl;
  }
  
  return 0;
}