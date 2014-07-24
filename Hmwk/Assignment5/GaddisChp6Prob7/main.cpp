/* 
 * File:   main.cpp
 * Author: Tracy Quintos
 * Created on July 23, 2014, 11:22 AM
 * Purpose: Homework GaddisChp6Prob7
 */

#include <iostream>
#include <iomanip>

float cvs (int fahrenheit); // function celcius

const int START_FAH = 0, //constants is taken from a previous assignment, modified it to use a function
          END_FAH = 20,
          INCREMENT = 1;

using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution starts here!


/*
 * 
 */
int main(int argc, char** argv) {
    
    float celcius; 
    cout<<fixed<<showpoint<<setprecision(2);
    
    for(int fahrenheit = START_FAH; fahrenheit <= END_FAH; fahrenheit ++) //fahrenheit conversion to celcius incremented by 20
    {
        celcius=cvs(fahrenheit);
        cout<<fahrenheit<<" Fahrenheit"<<" = "<<celcius<<" Celcius"<<endl;
    }

    //exit stage right
    return 0;
}

float cvs (int fahrenheit) //function holds the fahrenheit variable. 
{
    return (static_cast<float>(fahrenheit)-32)*5/9; //calcultes the conversion between fahernheit to
}
