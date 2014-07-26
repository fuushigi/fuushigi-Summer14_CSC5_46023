/* 
 * File:   main.cpp
 * Author: Tracy Quintos
 * Created on July 26, 2014, 1:39 AM
 * Purpose: Homework GaddisChp7Prob8
 */

//User Libraries
#include <iostream>
#include<iomanip> //setprecision


//User Libraries
using namespace std;

//User Libraries

//Global Constant

//Function Prototype

//Execution starts here!

/*
 * 
 */
int main(int argc, char** argv) {
    
int x; //holds employee ID number/wages
int empld[7] = {5658845,4520125,7895122,8777541,8451277,1302850,750489}; //holds the IDs given by book
float rate; //holds the wages
float hour; //holds the number of hours the employee has worked
float wages[7]; //float array holds the wages for the 7 employees

for(x=0;x<=6;x++) //for loop to display the 7 employee IDs
{
cout << "Employee number : " << empld[x] << endl;

cout << "\nPlease enter the employee's hour : "; //user is asked to enter in the number of hours worked
cin >> hour;
cout << "Please enter employee's pay rate : "; //user is asked to enter the pay rate by which the employees are paid
cin >> rate;

wages[x] = hour * rate; //this calculation determines the wages for the employees
cout << "\n";
}

for(x=0;x<=6;x++)
{
cout << "Employee ID # : " << empld[x] << endl; //displays the employees ID number
cout << "Employee is paid : " << fixed << setprecision(2) << wages[x] << endl; //displays the paid amount to the employee after calculations
cout << "\n";
}

    //Exit stage right
    return 0;
}

