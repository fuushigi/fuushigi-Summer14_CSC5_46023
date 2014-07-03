/* 
 * File:   main.cpp
 * Author: Tracy Quintos
 * Created on July 2, 2014, 5:46 PM
 * Purpose: Homework Gaddis7thEdChp3Prob7
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
    
   //Declare variables
    
    char bagocokie = 40; //number of cookies per bag
    unsigned char cokieserv = 10; //number of servings per bag 
    unsigned short cokieCal = 300; //number of calories per serving
    unsigned short totalCal; //total calories consumed
    unsigned short cokiecon; // total cookies consumed
    
    //Number of cookies eaten
    cout<<"How many cookies did you munch?"<<endl;
    cin>>cokiecon;
    
    //Total calories consumed
    totalCal = cokiecon * cokieCal * cokieserv / bagocokie;
    
    cout<<"You have consumed: "<<totalCal<<" calories"<<endl;
    
    //Exit stage right
    return 0;
}

