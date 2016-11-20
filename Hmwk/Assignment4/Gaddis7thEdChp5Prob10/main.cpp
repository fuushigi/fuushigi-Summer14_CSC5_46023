//Chapter 5, Programming Challenge 4, Average Rainfall, p. 295

//PreProcessor Directive
//The next line of code causes the contents of another file to be inserted into the program.
#include<iostream>
//The next line of code is required for setw or fixed-point notation. See p. 113, 116, or 117.
#include<iomanip>
//The next line of code declares that the program will be accessing entities
//whose names are part of the namespace called std. See p. 28.
using namespace std;

//The next line of code begins a function (module) called main.
//All C++ programs begins with function main.
int main()
{
	
	system("color a3");

	//Variable Declaration Statements

	//Overview Statement
	cout << "The purpose of this program is to use nested loops to display number of months,\n";
	cout << "total inches of rainfall, and average rainfall.\n";

	//Input

	int yearsEntered = 1; //To hold yearsEntered
	int monthsEntered; //To hold monthsEntered
	double rainfallTotal; //To hold total rainfall
	double rainfallMonth; //To hold monthly rainfall
	double rainfallAverage; //To hold average rainfall
	
	
	cout << "Enter the number of years: ";

	for (int years = 0; years < yearsEntered; years++)
	{
		
		cin >> yearsEntered;
		monthsEntered = yearsEntered * 12;
		rainfallTotal = 0; //Initialize the accumulator

		for (int months = 1; months <= monthsEntered; months++)
		{
			cout << "Enter the rainfall in inches for month " << months << ": ";
			cin >> rainfallMonth;
			rainfallTotal += rainfallMonth;
		}

	//Set the numeric output formatting
	cout << fixed << setprecision(2);

	//Display output
	rainfallAverage = rainfallTotal / monthsEntered;
	cout << "\nNumber of months: " << monthsEntered << endl;
	cout << "Total inches of rainfall: " << rainfallTotal << endl;
	cout << "Average rainfall: " << rainfallAverage << endl << endl;

	}


	//Sends the integer value 0 back to the operating system and indicates that a program executed successfully.
	//system("pause");
	return 0;
}

