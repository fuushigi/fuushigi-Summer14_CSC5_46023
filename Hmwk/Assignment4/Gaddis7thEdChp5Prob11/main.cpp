/* 
 * File:   main.cpp
 * Author: Tracy Quintos
 * Created on July 11, 2014, 4:20 AM
 * Purpose Homework Gaddis7thEdChp5Prob11
 */

//User Libraries
#include <iostream>
#include <iomanip> //setprecision

//User Libraries

//Global Constant

//Function Prototype

//Execution starts here!

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{
    
        float daysG;//number of days the population will increase
	float population_increase;//percentage of increase each day
	float population_size;//starting size of population

	//User must enter the original number of organisms
	cout<<"Please enter the original size of the population: ";
	cin>>population_size;

	//if the user enters a number less than 2, ask for a number larger than 1
	while(population_size < 2)
	{
                //as requested by book, user will be prompted to re-enter value
		cout << "Sorry, the original number of organism must be greater than 1";
		cin >> population_size;
	}

        //User must enter the percentage growth of population in decimal form
	cout<<"Please enter the % of growth rate in decimal form: ";
	cin>>population_increase;

	//if the user enters a negative percentage, ask for a positive percentage
	while(population_increase < 0.0)
	{
                //as requested by book the user is not allowed to enter a negative value for growth %
		cout<<"Please do not enter negative %";
		cin>>population_increase;
	}
        
        //User must enter the number of days the organisms will grow
	cout<<"Please enter the number of days the organisms will grow: ";
        cin>>daysG;

	//if user enters a number less than 1, ask for a number larger than 0
	while(daysG < 1)
	{
		//The days entered must be higher than 1 day
                cout<<"Number of days must exceed more than 1 day";
		cin>>daysG;
	}

	
	cout<<setprecision(1)<<fixed;
	 
	//increments the days of growth
        for (int count = 1; count <= daysG; count++)
	{
		//Outputs the incrementing days and the new growth population after calculations
                //Calculations include: New population size being equal to the original population + (growth increase x original population) 
		cout<<"After day # " << count <<"-----";
                population_size = population_size+(population_increase * population_size);
		cout<<"Number of organisms grown is: "<<population_size<<endl;
	}


     //Exit stage right
    return 0;
}

