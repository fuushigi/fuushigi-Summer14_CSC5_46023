/* 
 * File:   main.cpp
 * Author: Tracy Quintos
 * Created on July 10, 2014, 1:12 PM
 * Purpose: Homework Gaddis7thEdChp5Prob11
 */

//User Libraries
#include <iostream>

using namespace std;

//User Libraries

// Global Constant

//Function Prototype

//Execution starts here!
/*
 * 
 */
int main(int argc, char** argv) {
    
    float organism1; //holds the starting number of organisms
    float percentageG; //the percentage growth
    float daysMulti; //number of days to multiply
    float organism2; // calculated growth of organism
    
    
    cout<<"Please enter the number of original numbers of organisms";
    cin>>organism1;
    cout<<"Please enter the % growth of the organisms";
    cin>>percentageG;
    cout<<"Please enter the number of days organisms will grow";
    cin>>daysMulti;
    
     daysMulti= 1; //starting day of multiplying organisms
            
    
    while (daysMulti <=20) // days of multiplying 
        
    {
        //Calculating new growth by multiplying original # of organism
        // by % of growth multiplied by the days it will have grown in 
        organism2 = (organism1 * percentageG * daysMulti);
        
        cout<<" In "<<daysMulti<<" days ";
        cout<<" there are "<<organism2<<" organism produced"<<endl;
        daysMulti++;
    }
            
    
    
    //Exit stage right 
    return 0;
}
