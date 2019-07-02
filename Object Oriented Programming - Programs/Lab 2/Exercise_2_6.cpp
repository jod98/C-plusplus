/*
Author: Jordan O Donnell
Student Number: 16371101
Date: 30/01/2018
Lab: 2
Exercise: 2.6
File: Exercise_2.6_cpp.

Description: Write a program that prints out the first N integers in the Fibnacci sequence in reverse, where N is entered by the user
at run-time
*/

//Header files
#include <iostream>
#include <iomanip>
using namespace std;

//Function Declaration
int fibonacci(int n); 

int main()
{
  //Fibonacci Series: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025, 121393, 196418, 317811, ... 1st term + 2nd term = 3rd term... 0+1 = 1, 1+1 = 2, 1+2 = 3, 3+2 = 5...
  
    int n;
    
    cout << "Enter integer value: ";
    cin >> n;
    
    int* array = new int[n]; //Pointer to array rather than regular array to save memory (pass by reference instead of pass by value)
    
    cout << "Print Fibonacci Series Forwards: ";
    //Loops though fibonacci elements, saves to array and prints to screen
    for (int x = 0; x < n; x++)
    {
      array[x] = fibonacci(x);
      cout << fibonacci(x) << " ";
    }
    cout << endl;
    
    cout <<"Printing Fibonacci Series Backwards: ";
    //Loops backwards through fibonacci sequence to print elements backwards
    for(int i=n-1; i>=0; i--)
    {
      cout << array[i] << " ";
    }
      
    delete [] array; //Pointer to array deleted to save memory 
    
    return 0;
  
}
//Function Definition to determine the fibonacci elements
  int fibonacci(int n)
  {   
    if (n<=0)
    {
        return 0;
    }   
    else if (n==1)
    {
        return 1;
    }
    else
    {
        return (fibonacci(n-1)+fibonacci(n-2));
    }
  }