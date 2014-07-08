/* 
 * File:   main.cpp
 * Author: Tracy Quintos
 * Created on July 7, 2014, 8:52 PM
 * Purpose: Homework Gaddis7thEdChp4Prob11
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
    
    int (booknum); //holds number of books purchased
    cout<<"Please enter the number of books";
    cout<<" purchased this month: ";
    cin>>booknum; //User is asked to enter the number of books purchased
    switch (booknum) //switch statement holds number of books
    {   
        //Case 1-5 depicts the numbers of points earned thru purchased books
        case 1:cout<<"You have earned O points."<<endl;
        break;
        case 2:cout<<"You have earned 5 points."<<endl;
        break;
        case 3:cout<<"You have earned 15 points."<<endl;
        break;
        case 4:cout<<"You have earned 30 points."<<endl;
        break;
        case 5:cout<<"You have earned 60 points."<<endl;
        break;
        
        //If invalid number of books is given this option will be presented
        default:cout<<"You can only earn up to 60 points"<<endl;
        cout<<"Please enter books 0 to 4 to find out ";
        cout<<"how many points you have earned";
    }
            
    //Exit stage right
    return 0;
}

