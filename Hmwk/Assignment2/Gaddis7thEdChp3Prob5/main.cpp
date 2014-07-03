/* 
 * File:   main.cpp
 * Author: Tracy Quintos
 * Created on July 2, 2014, 4:26 PM
 * Purpose: Homework Gaddis7thEdChp3Prob5
 */

#include <iostream>
#include <iomanip>


//System Libraries
using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution starts here!


/*
 * 
 */
int main(int argc, char** argv) {
    
//Declare variables 
    
    int tixprice_adult = 6, tixprice_child = 3;
    int adulttix; //tickets sold for adults
    int childtix; // tickets sold for children
    int gross_adult; //holds gross amount for adults
    int gross_child; //holds gross amount for children
    int boxofficegross; //holds total box office profit
    int boxofficenet; //theater earnings
    int distributorpay; //distributor earnings
    string movie; // holds movie title
    
    cout<<setprecision(2);
    cout<<fixed;
    
    cout<<"Please enter a movie title: \n";
    cin>>movie;
    cout<<"Please enter the number of adult tickets sold: ";
    cin>>adulttix;
    cout<<"Please enter the number of children tickets sold: ";
    cin>>childtix;
    
    //calculates the gross amount for adult tickets sold
    gross_adult = adulttix * tixprice_adult;
    //calculates the gross amount for children tickets sold
    gross_child = childtix * tixprice_child;
    //calculates total box office profits
    boxofficegross = gross_adult + gross_child;
    //calculates total earning for theater @ 20%
    boxofficenet = boxofficegross * .20;
    //calculates profit for distributor
    distributorpay = boxofficegross - boxofficenet;
    //displays movie title
    cout<<"Daily earnings for movie: $"<<movie<<endl;
    //displays amount of adult tickets sold
    cout<<"Adult tickets sold are: $"<<adulttix<<endl;
    //displays amount of children tickets sold
    cout<<"Children tickets sold are: $"<<childtix<<endl;
    //displays gross amount earning for box office
    cout<<"Gross box office profit: $"<<boxofficegross<<endl;
    //displays net box office profits
    cout<<"Net Box Office profit: $"<<boxofficenet<<endl;
    //displays amount for distributor earnings
    cout<<"Earnings of distributor is: $"<<distributorpay<<endl;
            
    
            
    
    
    
   //Exit stage right
    return 0;
}

