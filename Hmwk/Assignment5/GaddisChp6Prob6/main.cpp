/* 
 * File:   main.cpp
 * Author: Tracy Quintos
 * Created on July 23, 2014, 11:53 AM
 * Purpose: Homework GaddisChp6Prob6
 */

#include <iostream>
#include <iomanip>


void kinE (float,float);

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    float mass;
    float vel;
    
    cout<<fixed<<showpoint<<setprecision(2);
    
    cout<<"Please enter an object's mass in kg"<<endl;
    cin>>mass;
    cout<<"Please enter an objects velocity in mps"<<endl;
    cin>>vel;
    kinE(mass,vel);
    
    
    return 0;
}

void kinE (float mass, float vel)
{
    float ke;
    ke=0.5*mass*vel*vel;
    cout<<"The kinetic energy of the object is: "<<ke<<endl;
}
