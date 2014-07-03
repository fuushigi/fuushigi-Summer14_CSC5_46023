/* 
 * File:   main.cpp
 * Author: Tracy Quintos
 * Created on July 2, 2014, 4:56 PM
 * Purpose: Homework Gaddis7thChp3Prob9
 */

//System Libraries
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
    
    float loan_payment, inSurance;
    float mgas, moil, mtires, mmaintenance;
    int mmonthly_cost, mannual_cost;
    
    //The next 6 are costs of the variables in a month's time
    cout<<"Please enter the monthly cost for loan payment."<<endl;
    cin>>loan_payment;
    cin.ignore();
    
    cout<<"Please enter the monthly cost for insurance."<<endl;
    cin>>inSurance;
    cin.ignore();
    
    cout<<"Please enter the monthly cost for gas."<<endl;
    cin>>mgas;
    cin.ignore();
    
    cout<<"Please enter the monthly cost for oil."<<endl;
    cin>>moil;
    cin.ignore();
    
    cout<<"Please enter the monthly cost for tires."<<endl;
    cin>>mtires;
    cin.ignore();
    
    cout<<"Please enter the monthly cost for maintenance."<<endl;
    cin>>mmaintenance;
    cin.ignore();
    
    //calculates the monthly cost for expense
    mmonthly_cost = loan_payment + inSurance + mgas + moil + mtires + mmaintenance;
    
    //calculates the annual cost of expense x 12 months
    mannual_cost = mmonthly_cost * 12;
    
    //results from calculations
    cout<<"The monthly cost from expenses is: $"<<mmonthly_cost<<endl;
    cout<<"The annual cost from expenses is: $"<<mannual_cost<<endl;
    
    
    
    
    
    
    //Exit stage right
    return 0;
}

