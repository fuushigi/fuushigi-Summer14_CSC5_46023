/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on July 10, 2014, 1:12 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int organism1; //holds the starting number of organisms
    int percentageG; //the percentage growth
    int daysMulti; //number of days to multiply
    int organism2; // calculated growth of organism
    
    
    cout<<"Please enter the number of original numbers of organisms";
    cin>>organism1;
    cout<<"Please enter the % growth of the organisms";
    cin>>percentageG;
    cout<<"Please enter the number of days organisms will grow";
    cin>>daysMulti;
    
     daysMulti= 1;
            
    
    while (daysMulti <=20)
    {
        organism2 = (organism1 * percentageG * daysMulti);
        
        cout<<" In "<<daysMulti<<" days ";
        cout<<" there are "<<organism2<<" organism produced"<<endl;
        daysMulti++;
    }
            
    
    

    return 0;
}

