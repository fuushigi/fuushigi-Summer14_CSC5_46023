/* 
 * File:   main.cpp
 * Author: OWNER-PC
 *
 * Created on July 7, 2014, 11:04 PM
 */

//Use Libraries
#include <iostream>

//User Libraries

//Global Constant

//Function Prototype

//Execution Starts here!

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
int choice; //holds the options to choose from
int hours;
float total;
//holds the charge it costs monthly and the additional fees for going over usage
float A = 19.95;
float B = 24.95;
float C = 29.95;
float D = 2.00;
float E = 1.00;

//displays the monthly charges and also the additional hour charges
//user is then asked to choose a package
cout<<"The Internet Service Provider Subscription"<<endl;
cout<<"1.A.$19.95 per month. 11 hours access. Additional Hours are $2.00"<<endl;
cout<<"2.B.$24.95 per month. 22 hours access. Additional hours are $1.00"<<endl;
cout<<"3.C.$29.95 per month. Unlimited access."<<endl;
cout<<"Please choose a package: ";
cin>>choice;

if (choice >=1 && choice <=3)
{
//User is asked to enter additional hours    
//NOTICE!!! Package C is unlimited hour for use.
cout<<"How many hours would you access: ";
cin>>hours;

//switch statement and also the calculations inlcuding charges plus for any addtional hours
//case 1-3 is given
switch (choice)
{
case 1:
{
total = A + (hours - 11)*D;
break;
}
case 2:
{
total = B + (hours - 22)*E;
break;
}
case 3:
{
total = C;
break;
}

default: //statement includdes the charges in total and the default if user enters invalid entry
cout<<"You can only choose from options A,B, or C"<<endl;
}
cout<<"The total charges are: $ "<<total<<endl;
}
else if (choice !=3)
{
cout<<"You can only choose from options A,B, or C";
}

//Exit stage right
return 0;
}

