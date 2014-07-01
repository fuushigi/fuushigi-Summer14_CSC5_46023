/* 
 * File:   main.cpp
 * Author: Tracy Quintos
 * Created on July 1, 2014, 12:30 PM
 * Purpose: Homework - Gaddis7thEdChp3Prob1
 */

//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here!

/*
 * 
 */
int main(int argc, char** argv) {
    //variables used for problem
    int xgals, xmiles, xmpg;
    // xgals = gallons, xmiles = max mileage, xmpg = calculated mpg for car
   
    //Using personal vehicle as reference for max mileage on full tank
    cout<<"The The 2004 Matrix max mileage for a full tank is 321 miles"<<endl;
    cout<<"Please enter max mileage on a full tank:"<<endl;
    cin>>xmiles;
    //Using personal vehicle as reference for max gas tank capacity
    cout<<"The 2004 Matrix can hold up to 13.2 gallons"<<endl;
    cout<<"Please enter the max gallons the car can hold:"<<endl;
    cin>>xgals;

    //Calculates the mpg by diving xmiles by xgals
    xmpg = xmiles / xgals;
    cout<<"The estimated miles per gallon is: "<<xmpg<<endl;
    
    //Exit stage right  
    return 0;
}

