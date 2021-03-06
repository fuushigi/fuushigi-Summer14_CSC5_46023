/* 
 * File:   main.cpp
 * Author: Tracy Quintos
 * Created on July 25, 2014, 11:06 AM
 * Purpose: Homework GaddisChp7Prob3
 */

//User Libraries
#include <iostream>
#include <string> 


using namespace std;

//User Libraries

//Global Constant

//Function Prototype

//Execution starts here!

/*
 * 
 */
int main(int argc, char** argv) {
    
string names[5];
int sales[5]; //0-5 array for the # of jars sold
int i; // in an array i will hold values of jars sold/names of salsa used in the if statements below
int HighSell=0; //setting the highest salsa sold to 0
int HiName;  //holds the highest selling salsa name
int LowSell=0; //holds the lowest selling salsa sold to 0
int LowName; //holds the lowest selling salsa name
int total=0; //holds the total number of jars (salsa) sold

names[0] = "Mild"; //these are the 5 salsa names given by book arrays 0-4 (total of 5 flavors)
names[1] = "Medium";
names[2] = "Sweet";
names[3] = "Hot";
names[4] = "Zesty";

for (i=0;i<=4;i++)
{ //for loop will prompt the user to enter in the number of jars sold for each salsa flavor

    cout<<"Enter number of sold "<<names[i]<<" jars: ";

    cin>>sales[i]; //it is then stores as i in the array

    total = total + sales[i]; //calculations will add total to the amount of sales in array (5 flavors) = total

if (i==0) //setting i to 0
{ 
    
    HighSell = sales[i]; HiName = i; LowSell=sales[i]; LowName = i;  //setting the salsa names/sales with the lowest and highest sold = i
} 
    if (HighSell<sales[i]) 
    { 
        
        HighSell=sales[i]; HiName = i; 
    }
        if (LowSell>sales[i]) 
        { 
    
            LowSell=sales[i]; LowName = i; 
        }

}

cout<<"The number of jars sold for each salsa are:\r\n";
for (i=0;i<=4;i++){ //for loop to display the # of jars sold
cout<<sales[i]<<" "<<names[i]<<" jars"<<"\r\n"; //sales-salsa names
}

//displays the total sales and also the highest , and lowest selling salsa
//from if statements we can determine what were the names of both high or low selling salsa and as well as the sales (i=0)
cout<<"The total sales: "<<total<<" jars\r\n";
cout<<"The highest sales: "<<HighSell<<" ("<<names[HiName]<<" salsa)\r\n";
cout<<"The lowest sales: "<<LowSell<<" ("<<names[LowName]<<" salsa)\r\n"; 

    //Exit stage right
    return 0;
}

