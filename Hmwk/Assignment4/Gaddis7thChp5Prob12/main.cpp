/* 
 * File:   main.cpp
 * Author: Tracy Quintos
 * Created on July 10, 2014, 12:32 AM\
 * Purpose: Homework Gaddis7thChp5Prob12
 */

//User Libraries
#include <iostream>
#include <cmath>

using namespace std;

// global constant starting from Celcius 0 to 20, incrementing by 1
const int START_CEL = 0, 
        END_CEL = 20,
        INCREMENT = 1;

//User Libraries

//Global Constant

//Function Prototype

//Execution starts here!


/*
 * 
 */
int main(int argc, char** argv) {
    
    float celcius; //temperature types given as variables(floats)
    float fahrenheit; //holds Fahrenheit conversion after calculations
    
    for (celcius = START_CEL; celcius <=END_CEL; celcius += INCREMENT)
    {
         fahrenheit= 1.8 * celcius + 32; // Celcius to Fahrenheit converter
         
         cout<<celcius<<" Celcius" << " = "<<fahrenheit<<" Fahrenheit "<<endl;
    }
    
    
    //Exit stage right
    return 0;
}

