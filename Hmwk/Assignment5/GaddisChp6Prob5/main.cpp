/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on July 23, 2014, 12:32 PM
 */

#include <iostream>
#include <iomanip>

void cvs (float, float);

using namespace std;



/*
 * 
 */
int main(int argc, char** argv) {
    
    float g = 9.8;
    float t;
    
    cout<<fixed<<showpoint<<setprecision(2);
    
    cout<<"Please enter the amount of time"<<endl;
    cin>>t;
    cvs(g,t);

    return 0;
}

void cvs (float g, float t)
{
    float d;
    d = 0.5*g*t*t;
  cout<<"The distance of falling object is: "<<d<< " meters"<<endl;
}

