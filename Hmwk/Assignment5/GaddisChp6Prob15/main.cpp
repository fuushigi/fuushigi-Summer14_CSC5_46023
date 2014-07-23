/* 
 * File:   main.cpp
 * Author: Tracy Quintos
 * Created on July 23, 2014, 12:48 PM
 * Purpose: Homework GaddisChp6Prob15
 */

#include <iostream>

//****INCOMPLETE

void cvs (float,float,float);

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    float poP;
    float bR;
    float dR; 
    
    cout<<"Please enter the starting population"<<endl;
    cin>>poP;
    
    cout<<"Please enter the annual birth rate"<<endl;
    cin>>bR;
    
    cout<<"Please enter the annual death rate"<<endl;
    cin>>dR;
    cvs(poP, bR, dR);

    return 0;
}

 void cvs (float poP, float bR, float dR)
{
    float nP;
    nP =(poP + bR) - dR;
    cout<<"The new population size is: "<<nP<<endl;
}

