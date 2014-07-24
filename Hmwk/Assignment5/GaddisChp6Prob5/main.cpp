/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on July 23, 2014, 12:32 PM
 */

#include <iostream>
#include <iomanip>

void cvs (float, float); //function for falling distance, holds two floats will be used later

using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution starts here!



/*
 * 
 */
int main(int argc, char** argv) {
    
    float g = 9.8; //holds g, given by book
    float t;     //holds the amonut of time, in seconds
    
    cout<<fixed<<showpoint<<setprecision(2);
    
    cout<<"Please enter the amount of time"<<endl; //user is asked to enter in the time of falling object
    cin>>t;
    cvs(g,t);

    //exit stage right
    return 0;
}

void cvs (float g, float t)
{
    float d; //looking for value of d, we multiplied 1/2 times g times t squared.
    d = 0.5*g*t*t;
  cout<<"The distance of falling object is: "<<d<< " meters"<<endl; //d is given after calculations
}

