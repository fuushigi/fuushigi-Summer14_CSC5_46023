/* 
 * File:   main.cpp
 * Author: Tracy Quintos
 * Created on July 1, 2014, 10:40 AM
 * Purpose: Homework Gaddis7thEdChp3Prob3
 */

//System Libraries
#include <iostream>
#include <iomanip> //For Setprecision

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here!

/*
 * 
 */
int main(int argc, char** argv) {
//Declare variables
  
    //Tests 1-5 test scores
    int test1 = 80, test2 = 82, test3 = 95;
    int test4 = 85, test5 = 87;
    int avg5;
    
    cout<<"Please enter test1 score: ";
    cin>>test1;
    cout<<"Please enter test2 score: ";
    cin>>test2;
    cout<<"Please enter test3 score: ";
    cin>>test3;
    cout<<"Please enter test4 score: ";
    cin>>test4;
    cout<<"Please enter test5 score: ";
    cin>>test5;
    
    //Calculates the average of the five tests
    avg5 = (test1 + test2 + test3 + test4 + test5) / 5.0;
    
    cout<<"The average test score is: "<<avg5<<endl;
    cout<<setprecision(3)<<avg5<<endl;
   
    
    
    

    return 0;
}

