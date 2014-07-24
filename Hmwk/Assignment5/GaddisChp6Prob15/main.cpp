/*
* File: main.cpp
* Author: Tracy Quintos
* Created on July 23, 2014, 12:48 PM
* Purpose: Homework GaddisChp6Prob15
*/

#include <iostream>

//****INCOMPLETE

void cvs (float,float,float,float);

using namespace std;

/*
*
*/
int main(int argc, char** argv) {
    
    float poP=0;
    float bR;
    float dR;
    float years;
    cvs(poP, bR, dR, years);
    
    cout<<"Please enter a starting population";
    cin>>poP;
    
    while (poP < 2)
    {
        cout<<"Must enter a starting population that is greater than 1";
        cin>>poP;
    }
    
    cout<<"Please enter an annual birth rate";
    cin>>bR;
    
    while (bR < 0)
    {
        cout<"Must not enter a negative value for annual birth rate";
        cin>>bR;
    }
    
    cout<<"Please enter the annual death rate";
    cin>>dR;
    
    while (dR < 0)
    {
        cout<<"Must not enter a negative value for annual death rate";
        cin>>dR;
        
    }
    
    cout<<"Please enter the number of years";
    cin>>years;
    
    while (years < 1)
    {
        cout<<"The number of years must exceed 1 year";
        cin>>years;
    }
    
    for (float count = 1; count <= years; count ++)
    {
        cout<<"Year"<< count <<"----";
        cout<<"The new population by years is: "<<poP<<endl;
    }
    
    
    return 0;
}

 void cvs (float poP,float bR, float dR, float years)
{
    
    poP = poP + bR - dR;  //***when entering the starting population, it gets outputted as the new population for every year 
                         
    
  
    
}

