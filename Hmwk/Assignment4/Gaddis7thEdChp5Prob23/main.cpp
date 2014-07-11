/* 
 * File:   main.cpp
 * Author: Tracy Quintos
 * Created on July 11, 2014, 9:14 AM
 * Purpose: Homework Gaddis7thEdChp5Prob23
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
    
   
    for(int m = 1; m <=10; ++m) //for loop to increment '+' 1 to 10
    {
    for(int x = 0; x < m; ++x)
    cout << '+'; //char as instructed by book
    cout<<endl;
    }
    int n,o;
    for(int n=1;n<=10;n++)//for loop to the increment '+' from 10 to 1
    {
    for(o=n;o<=10;o++)
    {
    cout<<"+"; //char as instructed by book
    }
    cout<<endl;
    }
 
    
    

    return 0;
}

