/* 
 * File:   main.cpp
 * Author: Tracy Quintos
 * Created on June 26, 2014, 6:13 AM
 * Purpose: Homework Gaddis7thEdChp2Prob4
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{
    
    float mealcost = 44.50,
tax = 0.0675,
tip = .15,
taxmc,
bill,
totalbill,
tptb; //tip from total meal cost

//Calculates tax from meal
taxmc = mealcost * tax;

//Calculates the bill of meal with tax
bill = taxmc + mealcost;

//Calculates the cost of the tip from bill
tptb = bill * tip;

//Calculates the total amount of the bill plus tip
totalbill = bill + tptb;


cout<<"The meal cost without tax: $"<<mealcost<< endl;
cout<<"The tax of meal: $"<<taxmc<<endl;
cout<<"The tip amount: $" << tptb << endl;
cout<<"The total bill: $"<<totalbill<<endl;
    return 0;
}

