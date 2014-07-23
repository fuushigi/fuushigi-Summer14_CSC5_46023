/* 
 * File:   main.cpp
 * Author: Tracy Quintos
 * Created on July 22, 2014, 10:11 PM
 * Purpose: Homework GaddisChp6PRob1
 */

#include <iostream>
#include <iomanip>

using namespace std;

//calculatedRetail function prototype
float calculatedRetail (float cost, float markUp);

/*
 * 
 */
int main(int argc, char** argv) {
    
float retail, cost, markUp; //variables set to double data type

cout<<fixed<<showpoint<<setprecision(2); //set outformat for retail price

cout<<"Enter the wholesale cost for the item: $";
cin >>cost;
//validate the cost price
while (cost<0)
{
cout<<"Please enter a positive number. $"<<endl;
cin >>cost;
}

cout<<"Now please enter its markup percentage: ";
cin >>markUp;
//validate the markup percentage
while (markUp<0)
{
cout<<"Please enter a positive number for markup: ";
cin >>markUp;
}

//convert markup percentage to two decimal point
markUp = (markUp/100);

cout<<"The retail price for the item is: "<<endl;

cout<<"$ " <<calculatedRetail(cost, markUp)<<endl;

return 0;
}

float calculatedRetail (float cost, float markUp)
{
return (cost*markUp)+cost; //calculate retail price and return value to main fuction
}



