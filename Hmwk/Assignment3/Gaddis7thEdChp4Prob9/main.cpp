/* 
 * File:   main.cpp
 * Author: Tracy Quintos
 * Created on July 7, 2014, 7:44 PM
 * Purpose: Homework Gaddis7thEdChp4Prob9
 */

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

    int answer1; //holds the answer to calculation
    
    cout<<"Please use addition to answer the following: ";
    cout<<"714 + 132 = "; //simple addition
    cin>>answer1;
    
    answer1 = 714 + 132; //Calculation
    
    if(answer1 == 846) // if the answer is equal to 846 the answer is correct
    cout<<"Congratulations! YOU ARE CORRECT!";
    else if (answer1 != 846)  //if the answer is not equal to 846 it is wrong
    cout<<"Sorry your answer is wrong";
    cout<<"The correct answer is '846'";
    //if the answer is wrong the correct answer will be given
    
    

    
    //Exit stage right
    return 0;
}

