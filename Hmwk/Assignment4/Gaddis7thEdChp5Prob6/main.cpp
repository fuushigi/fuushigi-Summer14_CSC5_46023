/* 
 * File:   main.cpp
 * Author: Tracy Quintos
 * Created on July 11, 2014, 5:28 AM
 * Purpose: Homework Gaddis7thEdChp5Prob6
 */

//User Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constant

//Function Prototype

//Execution starts here!

/*
 * 
 */
int main(int argc, char** argv) {

        
                   int distance; //holds distance traveled
		   int speed; // holds speed of vehicle
		   int time; //holds the hours the vehicle will have traveled by
		   
	cout<<" Please enter the speed of the vehicle in mph?  ";
	cin>>speed;
	
	while(speed < 0)
	{   
                //User is prompted to enter a value that is a positive integer for
                //speed of vehicle
		cout<<" Please enter a positive number for the speed:  ";
		cin>>speed;
	}
	//User is asked how many hours the vehicle has traveled
	cout<<"Please enter how many hours has the vehicle traveled?   ";
	cin>>time;

	while(time < 1)
	{
                //User must enter a number of hours that exceed 1 as prompted by book
                //Will be prompted to re-enter value
		cout<<"Please enter a number greater than 1 for the hours:  ";
		cin>>time;
	}
        
        //formula given by book to figure out distance
        //speed is multiplied by time
	distance = speed * time;

	//This display is copied from the book to show number of hours and distance traveled
        cout<<endl;
	cout<< " Hour(s)" << "\t" << "Distance Traveled"<<endl;
	cout<< " ----------------------------------------"<<endl;

	for(int count = 1; count <= time; count++)
	{
                //Displays the results of the hours and distance traveled by increment
		cout<< "  " <<count<< "\t\t" <<speed*count<<endl;
	
	}

        //Exit stage right
	return 0;
}

