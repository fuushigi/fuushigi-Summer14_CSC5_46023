/* 
 * File:   main.cpp
 * Author: Tracy Quintos
 * Created on July 7, 2014, 6:56 PM
 * Purpose: Homework Gaddis7thEdChp4Prob6
 */

//User Libraries
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
    
    int weight; //Holds the weight of object
    int mass;   //Holds the mass of object after calculations
    
     cout << "Enter an object's mass (Kilograms): ";
     cin >> mass;

weight = mass * 9.8; //Formula given by Gaddis Book

//if statement- if the weight of the object is greater than 1k newtons
if(weight > 1000)
{
cout << "The mass is: " << weight << " newtons"<<endl;
cout << "The object's mass is too heavy : ";
}
if(weight < 10) // if statement- if the weight of the object is less than 10 newtons
{
cout << "The mass is: " << weight << " newtons";
cout << "The object's mass is too Light!";
}
if(weight >=10 && weight <=1000) //boolean statement
{
cout << "The mass is: " << weight << " newtons"; //calculated newtons
}
            
    //Exit stage right
    return 0;
}

