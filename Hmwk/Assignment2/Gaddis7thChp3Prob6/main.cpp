/* 
 * File:   main.cpp
 * Author: Tracy Quitos
 * Created on July 2, 2014, 6:58 PM
 * Purpose: Homework Gaddis7thChp3Prob6
 */

//User Libraries
#include <iostream>
#include <cmath>

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
    
    int widget = 9.2;
    int paletW; //weight of pallet by itself
    int paletn; //weight of pallet with widgets on it
    int totaln; //number of widgets on pallet
    
    //User is asked how heavy the pallet is by itself, can enter any weight
    cout<<"How much does the pallet weight by itself?"<<endl;
    cin>>paletW; 
    //User is asked the total weight of pallet with widgets
    cout<<"How much is the weight of the pallet including the widgets?"<<endl;
    cin>>paletn;
    
    //calculates the total amount of widgets by
    //first subtracting pallet weight with widgets
    //minus the weight of the pallet by itself
    //divided by weight of the widget given up above(and in book)
    totaln = (paletn - paletW) / widget;
    //displays the number of widgets on pallet after calculations
    cout<<"There are: "<<totaln<<" widgets on pallet."<<endl;
    
    
    
    
    //Exit stage right
    return 0;
}

