/* 
 * File:   main.cpp
 * Author: Tracy Quintos
 * Created on July 22, 2014, 10:11 PM
 * Purpose: Homework GaddisChp6PRob1
 */

#include <iostream>
#include <iomanip> // setprecision

using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution starts here!

//calculatedRetail function prototype
float calculatedRetail (float cost, float markUp); //calculatedRetail function as intruction by book
                                                   //arguements holds the floats: cost and markUp %

/*
 * 
 */
int main(int argc, char** argv) {
    
float retail, cost, markUp; //variables set to double data type

cout<<fixed<<showpoint<<setprecision(2); //setting deicmal place to 2

cout<<"Enter the wholesale cost for the item: $"; // user is asked to enter in the cost of an item
cin >>cost;
//validate the cost price
while (cost<0) //the cost must exceed 0 dollars
{
cout<<"Please enter a positive number. $"<<endl;
cin >>cost;
}

cout<<"Now please enter its markup percentage: "; //user is asked to enter in the markUp
cin >>markUp;
//validate the markup percentage
while (markUp<0) //the cost must exceed 0 %
{
cout<<"Please enter a positive number for markup: ";
cin >>markUp;
}

//convert markup percentage to two decimal point
markUp = (markUp/100);

cout<<"The retail price for the item is: "<<endl;

cout<<"$ " <<calculatedRetail(cost, markUp)<<endl;

//exit stage right
return 0;
}

float calculatedRetail (float cost, float markUp) //function of calculatedRetail
{
return (cost*markUp)+cost; //calculate retail price/markUP % and return value to main fuction
}



