/*
* File: main.cpp
* Author: Tracy Quintos
* Created on July 9, 2014, 12:21 AM
* Purpose: Homework Gaddis7thEdChp5Prob5
*/

//User Libraries
#include <iostream>
#include <iomanip> //set precision

using namespace std;

//User Libraries

//Global Constant

//Function Prototype

//Execution starts here

/*
*
*/
int main(int argc, char** argv) {
    
     float charge = 2500; //  current charges for membership
     float chargeF = .04; // new charge increase by 4%
        int year = 1;     // starting at first year with new charges
 
       
        while (year <= 6)
        {
        // calculates for membership charges with counter of 6 years
        charge = (charge * chargeF) + charge;
        cout << setprecision (2) << fixed;
        cout << "Country Club membership for year " << year << " cost: $" << charge << endl;
 
        year++; // counter
        }
        
        //Exit stage right
        return 0;
}