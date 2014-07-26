/* 
 * File:   main.cpp
 * Author: Tracy Quintos
 * Created on July 25, 2014, 4:10 PM
 * Purpose: Homework GaddisChp7PRob2
 */

#include <iostream>
#include <string>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
        float avgRainfall = 0; //holds average rainfall
	float totalRainfall = 0; //holds the total rainfall
	float lowestRainfall; //holds the lowest rainfall
	float highestRainfall; //holds the highest rainfall
	string lowestMonth; //holds the name of the month that has the lowest rainfall
	string highestMonth; //holds the name of the month that has the highest rainfall
	string monthNames[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	//string array holds the name of all 12 months
        float monthlyTotals[12]; //holds the rainfall in an array given by user
	char repeat; //char for restarting the program if user chooses Y/y

	do
	{
		cout << "Please enter the rainfall inches for all the months:" << endl;


		//positive number validation as instructed by book
		for (int i = 0; i < 12; i++)
		{
			cout << monthNames[i] << ": ";
			cin >> monthlyTotals[i];

			while (monthlyTotals[i] < 0)
			{
				cout << "Please enter a positive number for " << monthNames[i] << endl;
				cin >> monthlyTotals[i];
			}
		}	
		
	
		//for loop i is set to 0 and i is less than 12
		for (int i = 0; i < 12; i++)
		{
			totalRainfall = totalRainfall + monthlyTotals[i]; //adds the total rainfall for the months
		}

		//Averages out the total rainfall and divide it by the number of months
		avgRainfall = totalRainfall / 12;

		//Highest and Lowest months of rainfall [0]
                highestRainfall = monthlyTotals[0];
                highestMonth = monthNames[0];
                lowestRainfall = monthlyTotals[0];
                lowestMonth = monthNames[0];

		for (int i = 0; i < 12; i++)
		{
			if (monthlyTotals[i] > highestRainfall) 
			{
				highestRainfall = monthlyTotals[i]; 
				highestMonth = monthNames[i];
			}

			if (monthlyTotals[i] < lowestRainfall)
			{
				lowestRainfall = monthlyTotals[i];
				lowestMonth = monthNames[i];
			}
		}	
	
		//displays the total rainfall and average in inches,
                //displays the lowest and highest month as well as their respective total of rainfall from lowest to highest
		cout << "The total rainfall throughout the year was " << totalRainfall << " inches." << endl;
		cout << "The average rainfall for the entire year is " << avgRainfall << " inches." << endl;
		cout << "The month with the lowest rainfall is " << lowestMonth << ", with a total of "<< lowestRainfall <<" inches." << endl;
		cout << "The month with the highest rainfall is " << highestMonth << ", with a total of "<< highestRainfall <<" inches." << endl;

		//setting the values back to 0 if the user decides to run the program once more.
		avgRainfall = 0;
		totalRainfall = 0;
		lowestRainfall = 0;
		highestRainfall = 0;
		highestMonth;
		lowestMonth;

		cout << "\nWould you like to run the program again? (Y/N) ";
		cin >> repeat;
		cout << endl;
	}while(repeat == 'y' || repeat == 'Y'); // while-loop,user can enter either 'Y' or 'y' when prompted by program

	return 0;
}



