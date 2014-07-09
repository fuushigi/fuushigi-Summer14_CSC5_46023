/* 
 * File:   main.cpp
 * Author: Tracy Quintos
 * Created on July 9, 2014, 12:29 AM
 * Purpose: Homework Gaddis7thEdProb3
 */

//User Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constant

//Function Prototype

//Execution Starts here!

/*
 * 
 */
int main(int argc, char** argv) {
    
       
        float oceanLevelx; //holds ocean levels
        int year;         //holds the years
 
        oceanLevelx = 0; //ocean level set to 0
        year = 1;      // starts at year 1
 
        // while loop from years 1 to 25
        while(year <= 25){
               
                
                oceanLevelx = oceanLevelx + 1.5;
                //assuming that the ocean level is currently rising at 1.5 milimeters
                //calcultions for ocean level per year
 
                
                cout<<"In " << year << " years = ";
                cout<< oceanLevelx << " milimeters"<<endl;
                year++; //increments years
        }
 
    //Exit stage right
    return 0;
}

