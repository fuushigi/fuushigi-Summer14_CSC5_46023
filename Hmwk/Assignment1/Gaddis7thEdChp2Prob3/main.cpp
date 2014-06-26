/* 
 * File:   main.cpp
 * Author: Tracy Quintos
 * Created on June 26, 2014, 12:45 PM
 * Purpose: Homework Gaddis7thEdChp2Prob3 
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{
    float purchase, totalStatetax, countytax, statetax, totalcountytax, total;
     purchase = 52;
     statetax = 4e-2f;
     countytax = 2e-2f;
    
    totalStatetax = purchase * statetax;
    totalcountytax = purchase * countytax;
    
    total = totalStatetax + totalcountytax;
    
    cout<<"The total with state and county tax is: $ "<<total<<endl;
    
    
    
    
    
    
   
    
    return 0;
}

