/* 
 * File:   main.cpp
 * Author: Tracy Quintos
 * Created on July 2, 2014, 6:34 PM
 * Purpose: Homework Gaddis7thChp3Prob8
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
    
    //User Libraries
    
    int cost_B, replace_M; // cost_B=cost of building 
                          //replace_M = cost to replace for insurance @ 80%    
    
    //Using cost_B to determine cost of build, User must enter amount
    cout<<"Please enter replacement cost of building: $"<<endl;
    cin>>cost_B;
    
    //calcalation to determine the cost of insurance money for replacement
    replace_M = cost_B * .80;
    //displays the minimum amount of insurance money to cover replacement
    cout<<"The minimum amount of insurance money to replace building is: $"<<replace_M<<endl;
    
    
    
    
    //Exit stage right
    return 0;
}

