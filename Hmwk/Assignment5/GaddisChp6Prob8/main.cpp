/* 
 * File:   main.cpp
 * Author: Tracy Quintos
 * Created on July 23, 2014, 7:40 PM
 * Purpose: Homework GaddisChp6Prob8
 */

#include <time.h>
#include <ctime>//sleep/delay effect
#include <iostream>
#include <windows.h> //sleep/delay effect
 
using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution starts here!
int coinToss();
float calculateTotal(int number); //coin tossed function
 
int main(int argc, char** argv)
{
   int number; 
   int head = 0; //heads set to 0
   int tail = 0; //tails set to 0
   int n; // holds the number of times the coin will be tosssed
   
   cout<<"Please enter the number "<<endl;
   cin>>n;
   
 
   for(int i = 0; i < n; i++) //for loop statement to increment the number of coin tosses given by user
   {
      number = coinToss();
      if(number == 1)
      {
        cout<<"HEADS"<<endl;  //50% chance between heads or tails
     
        head ++;    
      }
      else
      {
         cout<<"TAILS"<<endl; 
         
         tail ++;
      }
       Sleep(800); //sleep/ delay example is taken from  a website, to demonstrate time between each coin toss
   }
   
   cout<<"Total # of Heads are: "<<head<<endl; //number of heads and tails will be recorded and outputted
   cout<<"Total # of Tails are: "<<tail<<endl;
 
    //exit stage right
    return 0;
}
 
 
int coinToss()
{
    int num;   
    
 
    srand ((unsigned) time(0));
    num = rand()%2 + 1;  
  
   
    
    return num;
}

