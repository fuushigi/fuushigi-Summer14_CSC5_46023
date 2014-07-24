/*
* File: main.cpp
* Author: Tracy Quintos
* Created on July 23, 2014, 8:25 PM
* Purpose: GaddisChp6PRob21
*/

#include <iostream>

using namespace std;

bool IsPrime(int);

int main(int argc, char** argv)
{	
	int number;
	
	cout << "Enter an integer that is greater than 1: ";
	cin >> number;
	
	if (IsPrime(number))
	{
		cout << number << " is prime." << endl;
	}
	else
	{
		cout << number << " is not prime." << endl;
	}

	// This is more convention than anything.
	return 0;
}

bool IsPrime(int number)
{	
	int i;
	
	for (i=2; i<number; i++)
	{
		if (number % i == 0)
		{
			return false;
		}
	}
	
	return true;	
}