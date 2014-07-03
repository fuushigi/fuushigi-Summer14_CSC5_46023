/* 
 * File:   main.cpp
 * Author: Tracy Quintos
 * Created on July 2, 2014, 6:01 PM
 * Purpose: Homework - Gaddis7thChp3Prob11
 */

//User Libraries
#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;

//User Libraries

//Global Constant

//Function Prototype

//Execution starts here!

/*
 * 
 */
int main(int argc, char** argv) {
    
    //variables given to represent currency for conversion
    int yen_per_dollar = 83.14;
    int euros_per_dollar = 5.7;
    int usDollarY, usDollarEu;
    int dollarY, dollarEu;
    
    cout<<setprecision(2)<<fixed<<endl;
    
    cout<<"Enter the amount of dollars to convert to Yen: "<<endl;
    cin>>usDollarY;
    
    cout<<"Enter the amount of dollars to convert to Euros: "<<endl;
    cin>>usDollarEu;
    //calculates dollars to yen
    dollarY = yen_per_dollar * usDollarY;
    //calculates dollars to euros
    dollarEu = euros_per_dollar * usDollarEu;
    //displays the conversion to respective currency
    cout<<"The dollars converted to Yen is: "<<dollarY<<" Yen"<<endl;
    cout<<"The dollars converted to Euros is: "<<dollarEu<<" Euros"<<endl;
    
    
    
    

    return 0;
}

