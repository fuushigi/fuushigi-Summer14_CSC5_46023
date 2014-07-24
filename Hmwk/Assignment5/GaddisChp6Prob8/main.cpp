/* 
 * File:   main.cpp
 * Author: Tracy Quintos
 * Created on July 23, 2014, 7:40 PM
 * Purpose: Homework GaddisChp6Prob8
 */

#include <time.h>
#include <ctime>
#include <iostream>
#include <windows.h>
 
using namespace std;
int coinToss();
float calculateTotal(int number);
 
int main(int argc, char** argv)
{
   int number;
   int head = 0;
   int tail = 0;
   int n;
   
   cout<<"Please enter the number "<<endl;
   cin>>n;
   
 
   for(int i = 0; i < n; i++)
   {
      number = coinToss();
      if(number == 1)
      {
        cout<<"HEADS"<<endl;  
     
        head ++;    
      }
      else
      {
         cout<<"TAILS"<<endl; 
         
         tail ++;
      }
       Sleep(800);
   }
   
   cout<<"Total # of Heads are: "<<head<<endl;
   cout<<"Total # of Tails are: "<<tail<<endl;
 
    return 0;
}
 
 
int coinToss()
{
    int num;   
    
 
    srand ((unsigned) time(0));
    num = rand()%2 + 1;  
  
   
    
    return num;
}

