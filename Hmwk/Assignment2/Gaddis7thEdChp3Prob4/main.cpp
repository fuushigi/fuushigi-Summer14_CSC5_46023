/* 
 * File:   main.cpp
 * Author: Tracy Quintos
 * Created on July 2, 2014, 5:20 PM
 * Purpose: Homework Gaddis7thEdChp3Prob4
 */

//User Libraries
#include <iostream>
#include <iomanip>

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
    
    const char MSIZE =10;//Taking into account the number of letters of the months
    char month1 [MSIZE];//follows MSIZE to the value of 10
    char month2 [MSIZE];
    char month3 [MSIZE];
    float avgR, rain1, rain2, rain3; //variables assigned
    
    cout<<setprecision(2)<<fixed<<endl;
    //User must enter 3 months in consecutive order
    cout<<"Please enter 3 months consecutively. "<<endl;
    cin>>month1>>month2>>month3;
    //Displays the months accordingly
    cout<<"month1: "<<month1<<endl;
    cout<<"month2: "<<month2<<endl;
    cout<<"month3: "<<month3<<endl;
    //User must enter the inches of rain for the 3 months
    cout<<"Please enter 3 rainfall averages for the said months. "<<endl;
    cin>>rain1>>rain2>>rain3;
    //States the height of rain fall for each month
    cout<<"rain1: "<<rain1<<"inches"<<endl;
    cout<<"rain2: "<<rain2<<"inches"<<endl;
    cout<<"rain3: "<<rain3<<"inches"<<endl;
    //calculates the month's rainfall average by 3
    avgR = (rain1 + rain2 + rain3) / 3.0;
    //Displays the average rainfall in inches
    cout<<"The average rainfall for the 3 months is: "<<avgR<<" inches"<<endl;

    
    //Exit stage right
    return 0;
}

