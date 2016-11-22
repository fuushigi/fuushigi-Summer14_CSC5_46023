
/* File: main.cpp
* Author: Tracy Quintos
* Created on July 18, 2014, 11:35 AM
* Purpose Homework Gaddis7thEdChp5Prob11
*/

//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
#include <cmath>
using namespace std;

//Global Constants

//Function Prototypes
void Menu();
int getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
void problem7();
void problem8();
void problem9();
void problem10();
void problem11();


//Execution begins here
int main(int argv,char *argc[]){
	
	system("color f4");
    int inN;
    do{
        Menu();
        inN=getN();
        switch(inN){
        case 1: problem1();break;
        case 2: problem2();break;
        case 3: problem3();break;
        case 4: problem4();break;
        case 5: problem5();break;
        case 6: problem6();break;
        case 7: problem7();break;
        case 8: problem8();break;
        case 9: problem9();break;
        case 10:problem10();break;
        case 11:problem11();break;
            default:;
        };
    }while(inN<12);
    return 0;
}

const int START_CEL = 0; //problem 12
const int END_CEL = 20;
const int INCREMENT = 1;

//Menu Function
void Menu(){
    cout<<"Type 1 for problem 8"<<endl;
    cout<<"Type 2 for problem 12"<<endl;
    cout<<"Type 3 for problem 17"<<endl;
    cout<<"Type 4 for problem 11"<<endl;
    cout<<"Type 5 for problem 2"<<endl;
    cout<<"Type 6 for problem 23"<<endl;
    cout<<"Type 7 for problem 3"<<endl;
    cout<<"Type 8 for problem 4"<<endl;
    cout<<"Type 9 for problem 5"<<endl;
    cout<<"Type 10 for problem 6"<<endl;
    cout<<"Type 11 for problem 10"<<endl;
    cout<<"Type 12 to exit \n"<<endl;
}

//Choose problem number function
int getN(){
    int inN;
    cin>>inN;
    return inN;
}

//Solution to problem 1
void problem1(){
    
float result=0; //holds results (actual answer)
float answer; //holds the user's answer for questions
int choice; //holds menu choices

do
{
//As instructed Problem 8 displays
// Menu with a do-loop and a switch
cout<< " Welcome to Quintos Math Tutor " << endl;
cout<< " 1. Addition\n";
cout<< " 2. Subtraction\n";
cout<< " 3. Multiplication\n";
cout<< " 4. Quit Program\n";
cout<<"Please enter a choice" <<endl;
cin>>choice;

switch (choice) //switch cases 1-3
                       // simple match questions
                      // case 4 holds the output for quitting the program
{
case 1: cout<<"500 + 200 = ?"<<endl;
result = 500 + 200;
break;

case 2: cout<<"500 - 200 = ?"<<endl;
result = 500 - 200;
break;

case 3: cout<<" 600 x 200 = ?"<<endl;
result = 600 * 200;
break;
        
        case 4: cout<<"End Quintos Tutor, Have a nice day! =)"<<endl;
        break;
        
        }
if(choice!=4){
cout<<"what is your answer"<<endl;
}
cin >> answer;

        // if statement, the answer of user must be equal to the result of each question
if (answer == result)
cout << "Congratulations, You are correct!"<<endl; //User is applaud if answer matches result
// if found false, the correct answer will be given and the program will loop.
else
cout << "Sorry the answer you have entered is wrong, the correct answer is: " << result << endl;

}while(choice < 4);
    
}

//Solution to problem 2
void problem2(){
    cout<<"In problem # 12"<<endl<<endl;
    
    
    
    float celcius; //temperature types given as variables(floats)
    float fahrenheit; //holds Fahrenheit conversion after calculations
    
    for (celcius = START_CEL; celcius <=END_CEL; celcius += INCREMENT)
    {
         fahrenheit= 1.8 * celcius + 32; // Celcius to Fahrenheit converter
         
         cout<<celcius<<" Celcius" << " = "<<fahrenheit<<" Fahrenheit "<<endl;
    } 
  
}

//Solution to problem 3
void problem3(){
   cout<<"In problem # 17"<<endl<<endl;
   
   int sales1=0,
sales2=0,
sales3=0,
sales4=0,
sales5=0,
str1=0,
str2=0,
str3=0,
str4=0,
str5=0,
row;


cout<<"Please enter today's sales for five stores." << endl;

        cout<<"Enter sales for store # 1 : ";//entering sales
cin>>sales1;

cout<<"Enter sales for store # 2 : ";
cin>>sales2;

cout<<"Enter sales for store # 3 : ";
cin>>sales3;

cout<<"Enter sales for store # 4 : ";
cin>>sales4;

cout<<"Enter sales for store # 5 : ";
cin>>sales5;


        //Copied chart example straight from book
cout<<"Sales bar graph"<<endl;
cout<<"(each * = $100)"<<endl;
        //Since each '*' represents $100 each, the sales given by user
        //will be divided by 100
str1 = sales1/100;
str2 = sales2/100;
str3 = sales3/100;
str4 = sales4/100;
str5 = sales5/100;

{
            //Each store's sales will be represented by '*'
            //for example if store # 1 had 500 sales
            //*****'s will be represented
if( (sales1 - str1*100 ) >= 50 ) //store # 1 sales
                                                   
str1 = str1+1;

cout<<"Store # 1: ";

for ( row = 0; row < str1; row++)
cout << '*';

if( (sales2 - str2*100 ) >= 50 ) //store # 2 sales

str2 = str2 + 1;
cout<<"Store # 2: ";

for ( row = 0; row < str2; row++)
cout << '*';

if( (sales3 - str3*100 ) >= 50 ) //store # 3 sales

str3 = str3 + 1;

cout<<"Store # 3: ";

for (int row = 0; row < str3; row++)
cout << '*';

if( (sales4 - str4*100 ) >= 50 ) //store # 4 sales

str4 = str4 + 1;

cout<<"Store # 4: ";

for (int row = 0; row < str4; row++)

cout << '*';

if( (sales5 - str5*100 ) >= 50 ) //store # 5 sales

str5 = str5 + 1;

cout<<"Store # 5: ";

for (int row = 0; row < str5; row++)

cout << '*';
}
cout<<endl;
}

//Solution to problem 11
void problem4(){
    cout<<"In problem # 11"<<endl<<endl;
    
    float daysG;//number of days the population will increase
float population_increase;//percentage of increase each day
float population_size;//starting size of population

//User must enter the original number of organisms
cout<<"Please enter the original size of the population: ";
cin>>population_size;

//if the user enters a number less than 2, ask for a number larger than 1
while(population_size < 2)
{
                //as requested by book, user will be prompted to re-enter value
cout << "Sorry, the original number of organism must be greater than 1";
cin >> population_size;
}

        //User must enter the percentage growth of population in decimal form
cout<<"Please enter the % of growth rate in decimal form: ";
cin>>population_increase;

//if the user enters a negative percentage, ask for a positive percentage
while(population_increase < 0.0)
{
                //as requested by book the user is not allowed to enter a negative value for growth %
cout<<"Please do not enter negative %";
cin>>population_increase;
}
        
        //User must enter the number of days the organisms will grow
cout<<"Please enter the number of days the organisms will grow: ";
        cin>>daysG;

//if user enters a number less than 1, ask for a number larger than 0
while(daysG < 1)
{
//The days entered must be higher than 1 day
                cout<<"Number of days must exceed more than 1 day";
cin>>daysG;
}


cout<<setprecision(1)<<fixed;

//increments the days of growth
        for (int count = 1; count <= daysG; count++)
{
//Outputs the incrementing days and the new growth population after calculations
                //Calculations include: New population size being equal to the original population + (growth increase x original population)
cout<<"After day # " << count <<"-----";
                population_size = population_size+(population_increase * population_size);
cout<<"Number of organisms grown is: "<<population_size<<endl;
}
    
}

//Solution to problem 2
void problem5(){
    cout<<"In problem # 2"<<endl<<endl;
    
    for (unsigned char c=0; c<=127; c++)
    {
        cout<<c;
    
    //16 characters will be displayed save for first line
    if (c %16==15)
        
        cout<<endl;
    
    }
}

//Solution to problem 23
void problem6(){
    cout<<"In problem # 23"<<endl<<endl;
    
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
}

void problem7(){
    cout<<"In problem # 3"<<endl<<endl;
    
    float oceanLevelx; //holds ocean levels
        int year; //holds the years
 
        oceanLevelx = 0; //ocean level set to 0
        year = 1; // starts at year 1
 
        // while loop from years 1 to 25
        while(year <= 25){
               
                
                oceanLevelx = oceanLevelx + 1.5;
                //assuming that the ocean level is currently rising at 1.5 milimeters
                //calcultions for ocean level per year
 
                
                cout<<"In " << year << " years = ";
                cout<< oceanLevelx << " milimeters"<<endl;
                year++; //increments years
        }
}
void problem8(){
    cout<<"In problem # 4"<<endl<<endl;
    
     float minutesA, caloriesA;
    for (minutesA = 10; minutesA <= 30; minutesA = minutesA + 5)
        // for loop indicates the increment by 5
        //from 10 minutes to 30 will be calculated

    {
caloriesA = minutesA * 3.9;
cout<<"After "<< minutesA<<" minutes" <<" you have burned ";
cout<<caloriesA<<" calories"<<endl;
    }
  
       
   }

void problem9(){
    cout<<"In problem # 5"<<endl<<endl;
    
    float charge = 2500; // current charges for membership
     float chargeF = .04; // new charge increase by 4%
        int year = 1; // starting at first year with new charges
 
       
        while (year <= 6)
        {
        // calculates for membership charges with counter of 6 years
        charge = (charge * chargeF) + charge;
        cout << setprecision (2) << fixed;
        cout << "Country Club membership for year " << year << " cost: $" << charge << endl;
 
        year++; // counter
        }
}

void problem10(){
    cout<<"In problem # 6"<<endl<<endl;
    
    int distance; //holds distance traveled
int speed; // holds speed of vehicle
int time; //holds the hours the vehicle will have traveled by

cout<<" Please enter the speed of the vehicle in mph? ";
cin>>speed;

while(speed < 0)
{
                //User is prompted to enter a value that is a positive integer for
                //speed of vehicle
cout<<" Please enter a positive number for the speed: ";
cin>>speed;
}
//User is asked how many hours the vehicle has traveled
cout<<"Please enter how many hours has the vehicle traveled? ";
cin>>time;

while(time < 1)
{
                //User must enter a number of hours that exceed 1 as prompted by book
                //Will be prompted to re-enter value
cout<<"Please enter a number greater than 1 for the hours: ";
cin>>time;
}
        
        //formula given by book to figure out distance
        //speed is multiplied by time
distance = speed * time;

//This display is copied from the book to show number of hours and distance traveled
        cout<<endl;
cout<< " Hour(s)" << "\t" << "Distance Traveled"<<endl;
cout<< " ----------------------------------------"<<endl;

for(int count = 1; count <= time; count++)
{
                //Displays the results of the hours and distance traveled by increment
cout<< " " <<count<< "\t\t" <<speed*count<<endl;

}

}

void problem11(){
	system("color a3");

	//Variable Declaration Statements

	//Overview Statement
	cout << "The purpose of this program is to use nested loops to display number of months,\n";
	cout << "total inches of rainfall, and average rainfall.\n";

	//Input

	int yearsEntered = 1; //To hold yearsEntered
	int monthsEntered; //To hold monthsEntered
	double rainfallTotal; //To hold total rainfall
	double rainfallMonth; //To hold monthly rainfall
	double rainfallAverage; //To hold average rainfall
	
	
	cout << "Enter the number of years: ";

	for (int years = 0; years < yearsEntered; years++)
	{
		
		cin >> yearsEntered;
		monthsEntered = yearsEntered * 12;
		rainfallTotal = 0; //Initialize the accumulator

		for (int months = 1; months <= monthsEntered; months++)
		{
			cout << "Enter the rainfall in inches for month " << months << ": ";
			cin >> rainfallMonth;
			rainfallTotal += rainfallMonth;
		}

	//Set the numeric output formatting
	cout << fixed << setprecision(2);

	//Display output
	rainfallAverage = rainfallTotal / monthsEntered;
	cout << "\nNumber of months: " << monthsEntered << endl;
	cout << "Total inches of rainfall: " << rainfallTotal << endl;
	cout << "Average rainfall: " << rainfallAverage << endl << endl;

	}
}


//Exit Comment
void def(int inN){
    cout<<"You typed "<<inN<<" to exit the program"<<endl;
}

