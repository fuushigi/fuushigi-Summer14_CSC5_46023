/* 
 * File:   main.cpp
 * Author: Tracy Quintos
 *Created on June 26, 2014, 9:54 PM
 * Purpose: Homework Gaddis7thEdChp2Prob17
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{
 
    float shares = 600, sharePrice = 21.77;
    float commission = 2e-2; //scientific notation
    float totalamntc, totalamnttax;
    
    totalamntc = (shares * sharePrice); // calculates total amount without commission
    totalamnttax = (commission * totalamntc); // calculates the total + commission
    
    
    cout<<"Amount paid for stock shares: $"<<totalamntc<<endl;
    cout<<"Amount of commission paid: "<<"2%"<<endl;
    cout<<"Total amount with commission: $"<<totalamnttax<<endl;
    
      
    return 0;
}

