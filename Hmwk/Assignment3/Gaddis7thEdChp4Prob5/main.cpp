/* 
 * File:   main.cpp
 * Author: Tracy Quintos
 * Created on July 7, 2014, 6:24 PM
 * Purpose: Homework Gaddis7thEdChp4Prob5
 */

#include <iostream>

//User Libraries

//Global Constant

//Function Prototype

//Execution starts here!

using namespace std;

//User Libraries

/*
 * 
 */
int main(int argc, char** argv) {
    
    int weight; //Holds the user's weight in lbs
  float height,BMI; //Holds the user's height in inches
                   //Holds overall BMI of the user  

    cout<<"Please enter your weight in pounds: "; //User is asked to enter weight
    cin>>weight;
    cout<<"Please enter your height in inches: ";//User is asked to enter height
    cin>>height;

    //BMI calculations  bmi=weight times 703 divided by height squared.
    //Multiplied height by itself.
    BMI =weight*703/(height*height); 
    cout<<"Your body mass index is: "<<BMI<<endl;

    if (BMI>25)
    cout<<"You are overweight.";
    else if (BMI<18.5)
    cout<<"You are underweight.";
    else if (BMI>18.5 && BMI <25);
    
    cout<<"Congratulations! You are within optimal BMI for your height and weight!";
    
    
    
   //Exit stage right
    return 0;
}

