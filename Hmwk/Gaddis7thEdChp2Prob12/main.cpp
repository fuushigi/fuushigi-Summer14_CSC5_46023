/* 
 * File:   main.cpp
 * Author: Tracy Quintos
 * Created on June 26, 2014, 5:47 AM
 * Purpose: Homework Gaddis7thEdChp2Prob12
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{
  
int sqfootage = 389767;
int acre = 43560;
int totalacres;

cout<<"1 acre = "<<acre<< "sq ft"<<endl;
cout<<"How many acres in "<<sqfootage<< "sq ft"<<endl;

totalacres = sqfootage / acre;

cout<<"Total of acres is: "<<totalacres<<endl;
    

    return 0;
}

