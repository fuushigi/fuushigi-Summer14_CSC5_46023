/*
* File: main.cpp
* Author: Tracy Quintos
* Created on July 23, 2014, 8:25 PM
* Purpose: GaddisChp6PRob21
*/

#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution starts here!

bool IsPrime(int); //isPrime function given by book, using bool statement

int main(int argc, char** argv)
{	
	int number;
	
	cout << "Enter an integer that is greater than 1: "; //user is asked to enter in a number greater than 1
	cin >> number;
	
	if (IsPrime(number)) //if statement to determine from function if number given is a prime or not
	{
		cout << number << " is a prime." << endl;
	}
	else
	{
		cout << number << " is not a prime." << endl;
	}

	//exit stage right
	return 0;
}

bool IsPrime(int number)
{	
	int i; //holds i
	
	for (i=2; i<number; i++) //for-loop statement to determine if number is a prime or non-prime
	{
		if (number % i == 0)
		{
			return false; //is not prime
		}
	}
	
	return true;	 //is a prime
}
