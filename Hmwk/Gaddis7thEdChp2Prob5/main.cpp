/* 
 * File:   main.cpp
 * Author: OWNER-PC
 *
 * Created on June 26, 2014, 7:18 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{
    int a=28, b=32, c=37, d=24, e=33;
float sum = 0.0;
float avg = 0.0;

cout<<"the sum of 28 32 37 24 & 33 is: "<<endl;

sum = (a + b + c + d + e);
cout<<sum<<endl; 

cout<<"the average of 28 32 37 24 & 33 is:"<<endl;

avg = (a + b + c + d + e) / 5.0;
cout<<avg<<endl;

return 0;
}

