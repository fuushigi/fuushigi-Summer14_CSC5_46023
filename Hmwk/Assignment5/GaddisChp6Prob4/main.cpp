/* 
 * File:   main.cpp
 * Author: Tracy Quintos
 * Created on July 23, 2014, 9:27 PM
 * Purpose: Homework: GaddisChp6Prob4
 */

#include <iostream>



using namespace std;

float lowNum(float,float,float,float,float);
void display(float);
void acciN (float &, float &, float &, float &, float &);

/*
 * 
 */
int main(int argc, char** argv) {
    
    float low,n1,s2,e3,w4,c5;
    
    acciN(n1,s2,e3,w4,c5);
    
    low = lowNum(n1,s2,e3,w4,c5);
    
    display(low);

     return 0;
}

void acciN (float &n,float &s,float &e,float &w, float &c)
{
    cout<<"Enter the number of accidents"<<endl;
    cin>>n>>s>>e>>w>>c;
}
    void display (float lw)
    {
        cout<<"The lowest accidents are: "<<lw<<endl;
    }
    
    float lowNum (float n1, float s2, float e3, float w4, float c5)
    {
        float low=n1;
        if(s2<low)low=s2;
        if(e3<low)low=e3;
        if(w4<low)low=w4;
        if(c5<low)low=c5;
        return low;
    }


