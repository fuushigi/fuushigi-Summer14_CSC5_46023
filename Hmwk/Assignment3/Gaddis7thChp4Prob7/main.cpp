/* 
 * File:   main.cpp
 * Author: Tracy Quitos
 * Created on July 7, 2014, 9:10 PM
 * Purpose: Homework Gaddis7thChp4Prob7
 */

//User Libraries
#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution starts here!

/*
 * 
 */
int main(int argc, char** argv) {
    
  int seconds; //holds the number of seconds for all calculations entered by user
  int minutes, hours, days;
  //holds the minutes, hours, and the days for calculating for how many seconds
  //User is asked to enter any number of seconds 
  cout<<"Please enter a number of seconds:"<<endl;
  cin>>seconds;
 
  if (seconds >= 86400) // calculates the days in seconds, hours, and days
                       //number of seconds must be greater than 86400 seconds
    {
      days = seconds / 86400;//days equal the seconds divided by 86400
      cout<<"Number of days: "<<days<<endl;//outputs the number of days in the seconds entered by user
      seconds = seconds % 86400;
      hours = seconds / 3600;//how many seconds gives the number of hours when divided by 3600
      cout <<"Number of hours: "<<hours<<endl;//outputs the number of hours in seconds entered by user
      seconds = seconds % 3600;
      minutes = seconds / 60;//how many seconds there are in a minute divided by 60 seconds
      cout << "Number of minutes: "<<minutes<<endl;
      seconds = seconds % 60; 
      cout << "Number of seconds: "<<seconds<< endl;
    }
  else if (seconds >= 3600) //calculates the hours in seconds, hours, and days
                           //if statement the number of seconds must be greater than 3600 seconds to calculate hours
    {
      hours = seconds / 3600; //how many seconds there are in an hour divided by 3600 seconds
      cout << "Number of hours: "<<hours<<endl;
      seconds = seconds % 3600;
      minutes = seconds / 60;
      cout << "Number of minutes: "<<minutes<<endl;
      seconds = seconds % 60;
      cout << "Number of seconds: "<<seconds<<endl;
    }
  else if (seconds >= 60)//if statement, number of seconds must be greater than or equal to 60 seconds to calculate minutes
    {
      minutes = seconds / 60; // calculates the minutes in seconds, hours, and days
      cout << "Number of minutes: "<<minutes<<endl;
      seconds = seconds % 60;
      cout << "Number of seconds: "<<seconds<<endl;
    }
  else
    {
      cout <<"Number of seconds: "<<seconds<<endl; //gives the seconds after calculations
    }
 
    //Exit stage right
    return 0;
}

