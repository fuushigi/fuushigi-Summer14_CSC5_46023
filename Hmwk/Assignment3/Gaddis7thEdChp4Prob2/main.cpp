/* 
 * File:   main.cpp
 * Author: Tracy Quintos
 * Created on July 7, 2014, 8:18 PM
 * Purpose: Homework Gaddis7thEdChp4Prob2
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
    
int (roman); //holds the number given by user
cout << "Enter a number 1 to 10: "; //the user is asked to enter a number
cin >> roman;
switch (roman) //switch statement
{
    //Case 1 to 10 depicts the Roman version of the number entered by user
case 1:cout<<"The Roman Numeral of 1 is: I"<<endl; 
break;
case 2:cout<<"The Roman Numeral of 2 is: II"<<endl;
break;
case 3:cout<<"The Roman Numeral of 3 is: III"<<endl;
break;
case 4:cout<<"The Roman Numeral of 4 is: IV"<<endl;
break;
case 5:cout<<"The Roman Numeral of 5 is: V"<<endl;
break;
case 6:cout<<"The Roman Numeral of 6 is: VI"<<endl;
break;
case 7:cout<<"The Roman Numeral of 7 is: VII"<<endl;
break;
case 8:cout<<"The Roman Numeral of 8 is: VIII"<<endl;
break;
case 9:cout<<"The Roman Numeral of 9 is: IX"<<endl;
break;
    case 10:cout<<"The Roman Numeral of 10 is: X"<<endl;
break;
//the user is only allowed to use the numbers from 1 to 10
default:cout<< "Please enter a number 1 through 10"<<endl;
cout<< "Please try again."<<endl;

}
//Exit stage right
return 0;
}

