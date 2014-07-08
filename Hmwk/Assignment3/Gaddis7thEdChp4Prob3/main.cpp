/* 
 * File:   main.cpp
 * Author: Tracy Quintos
 * Created on July 7, 2014, 6:56 PM
 * Purpose: Homework Gaddis7thEdChp4Prob3
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
    
    int month, day; //holds the month and day as integers
    int year, year_x; // holds the two-digit year and the calculated year.
                     //year_x determines if the date is magical or not
    //User is tasked to produce a month in number form
    cout<<"Please enter a month in numeric form: ";
    cin>>month;
    //User is tasked to produce a day in number form
    cout<<"Please enter a day in numeric form: ";
    cin>>day;
    //User is taked to produce a two-digit year
    cout<<"Please enter a two-digit year: ";
    cin>>year;
    
    year_x = month * day; //calculations for the magic date
    
    //states that if year_x is equal to the given year
    // if else statement whether the date given and calculated is magical or not
    if(year_x == year)
        cout<<"The date is magical!"; 
    else 
        cout<<"The date is not magical!";
        

    //Exit stage right
    return 0;
}

