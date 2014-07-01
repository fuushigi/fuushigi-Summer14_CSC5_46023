/* 
 * File:   main.cpp
 * Author: Tracy Quintos
 * Created on July 1, 2014, 10:11 AM
 * Purpose: Homework Gaddis7thEdChp3Prob10
 */

//User Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constant

//Function Prototype

//Execution Starts Here!

/*
 * 
 */
int main(int argc, char** argv) 
{
//Declare variables
    
    float celcius; //temperature types given as variables(floats)
    float fahrenheit;
    
    cout<<"Please enter celcius temperature: "<<endl;
    cin>>celcius;
    
    
    // Formula for conversion in C++ expression
    fahrenheit= 1.8 * celcius + 32; 
    
    cout<<"fahrenheit = "<<fahrenheit<<" degrees"<<endl;
    
    
//Exit stage right
    return 0;
}

