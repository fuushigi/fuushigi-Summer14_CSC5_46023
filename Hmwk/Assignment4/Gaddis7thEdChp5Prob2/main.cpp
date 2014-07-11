/* 
 * File:   main.cpp
 * Author: Tracy Quintos
 * Created on July 10, 2014, 12:45 PM
 * Purpose: Homework Gaddis7thEdChp5Prob2
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
    
    for (unsigned char c=0; c<=127; c++)
    {
        cout<<c;
    
    //16 characters will be displayed save for first line
    if (c %16==15)
        
        cout<<endl;
    
    }
    
    //Exit stage right
    return 0;
}

