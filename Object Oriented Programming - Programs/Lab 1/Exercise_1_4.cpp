/*
Author: Jordan O Donnell
Student Number: 16371101
Date: 30/01/2018
Lab: 1
Exercise: 1.4
File: Exercise_1.4_cpp.

Description: Develop a C++ program that will determine if a bank
customer has exceeded the overdraft limit on their bank account when
they try to make a withdrawal request. For the customer, the folowing
information is available:

1. account number (an integer);
2. current balance;
3. maximum overdraft amount;

You should set arbitrary values for the above variables for a single user
(its a very small bank). When a customer tries to withdraw money they
need to enter their account number and the requested amount. If the
account number matches the only one on record, the balance should be
changed accordingly and a courteous message printed on screen. The
account number and new balance should slo be printed on the screen. If
the requested amount will make the balance exceed the overdraft, print
a message on screen telling them so.
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;

int main()
{
  int accountNumber = 16371101;
  double balance = 70.0;
  int maximumOverdraft = -100;
  double requestedAmount;
  
  cout << "Please Enter Account Number: ";
  cin >> accountNumber;
  cout << "Please Enter Requested Amount: ";
  cin >> requestedAmount;
  
  if(accountNumber == 16371101)
  {
    balance = balance - requestedAmount;
    cout << "Thanks for your Service" << endl;
    cout << "Account Number is: " << accountNumber << endl;
    cout << "Current balance is: " << balance << endl;
    
    if(balance < maximumOverdraft)
    {
      cout << "Your balance of " << balance << " currently exceeds the maximum overdraft of " << maximumOverdraft << endl;
    }
  }
  
  return 0;