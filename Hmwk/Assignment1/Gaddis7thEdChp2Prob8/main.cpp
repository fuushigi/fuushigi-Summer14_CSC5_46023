/* 
 * File:   main.cpp
 * Author: 
 *
 * Created on June 26, 2014, 11:24 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{ 
    float num1, num2, num3, num4, num5;
    num1 = 12.95, num2 = 24.95, num3 = 6.95, 
    num3 = 6.95, num4 = 14.95, num5 = 3.95;
    float tax = 6e-2f;
    float sum, total; 
    
    sum = num1 + num2 + num3 + num4 + num5;
    total = (sum * tax ) + sum; 
    
    cout<<"Price of item 1 =" <<" $12.95"<<endl;
    cout<<"Price of item 2 =" <<" $24.95"<<endl;
    cout<<"Price of item 3 =" <<" $6.95"<<endl;
    cout<<"Price of item 4 =" <<" $14.95"<<endl;
    cout<<"Price of item 5 =" <<" $3.95"<<endl;
    cout<<"The sum of the five items are: " <<sum<<endl;
    cout<<"The total with tax is: "<<total<<endl;
   
   return 0;
}

