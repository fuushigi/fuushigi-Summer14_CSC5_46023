/* 
 * File:   main.cpp
 * Author: Tracy Quintos
 * Created on July 23, 2014, 11:53 AM
 * Purpose: Homework GaddisChp6Prob6
 */

#include <iostream>
#include <iomanip>


void kinE (float,float); //void function golds kinE (kinetic energy function) and two floats as arguements

using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution starts here!
/*
 * 
 */
int main(int argc, char** argv) {

    float mass; //holds mass of object
    float vel; //holds velocity of object
    
    cout<<fixed<<showpoint<<setprecision(2);
    
    cout<<"Please enter an object's mass in kg"<<endl;
    cin>>mass;
    cout<<"Please enter an objects velocity in mps"<<endl;
    cin>>vel;
    kinE(mass,vel);
    
    //exit stage right
    return 0;
}

void kinE (float mass, float vel)
{
    float ke; //looking for the value if ke, equation is given by book, and calculation will take place
    ke=0.5*mass*vel*vel;
    cout<<"The kinetic energy of the object is: "<<ke<<endl; //ke is acquired through function's calculations
}
