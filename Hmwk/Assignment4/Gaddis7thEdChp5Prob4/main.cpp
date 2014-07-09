/* 
 * File:   main.cpp
 * Author: Tracy Quintos
 * Created on July 9, 2014, 8:11 AM
 * Purpose: Homework Gaddis7thEdChp5Prob4
 */

//User Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constant

//Function Prototype

//Execution starts here

/*
 * 
 */
int main(int argc, char** argv) {
    
    float minutesA, caloriesA;
    for (minutesA = 10; minutesA <= 30; minutesA = minutesA + 5)
        // for loop indicates the increment by 5
        //from 10 minutes to 30 will be calculated

    {
caloriesA = minutesA * 3.9;
cout<<"After "<< minutesA<<" minutes" <<" you have burned ";
cout<<caloriesA<<" calories"<<endl;
    }

    //Exit stage right
    return 0;
}

