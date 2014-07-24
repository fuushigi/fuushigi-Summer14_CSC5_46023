/* 
 * File:   main.cpp
 * Author: Tracy Quintos
 * Created on July 23, 2014, 9:44 PM
 * Purpose: GaddisChp6Prob13
 */

#include <iostream>
#include <iomanip> //setprecision
#include <cmath> //for calculations
          
using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution starts here!

float getSpools(float &ordered, float &stock, float &charges); //getspools function and variables with &
void displayOrder(float, float, float);                        //displayOrder function and float variables

int main(int argc, char** argv)
{

float charges, ordered, stock;    
    
getSpools(ordered, stock, charges);

displayOrder(ordered, stock, charges);

//exit stage right 
return 0;
}
float getSpools(float &ordered, float &stock, float &charges)
{
     char   specialChargeYN;
     
     cout << "The number of spools ordered: "; //user is asked how many spools of copper are ordered
     cin >> ordered;
     
     while (ordered < 1)
           {
                    cout << "\n\nInvalid Input.\n\n\nEnter a number higher than 1: ";
                    cin >> ordered; //input validation, the number of spools must exceed 1
           }
           
     cout << "\n\nThe number of spools in stock: "; //stock holds the number of spools the company has in stock
     cin >> stock;
     
     while (stock < 0)
           {
                    cout << "\n\nInvalid Input.\n\n\nEnter a number higher than 0: ";
                    cin >> stock; //input validation, the stocked spools must exceed 0
           }
           
     cout << "\n\nAny special shipping and handling (Y/N)? ";
     cin >> specialChargeYN; //option given by book, gives the user an option to decided whether
                            //the order has a special charges or not
     
     if ((specialChargeYN == 'Y') || (specialChargeYN == 'y'))
        {
                    cout << "\n\nWhat are the special charges per spool? $";
                    cin >> charges;
                    
                    while (charges <= 10) 
                          {
                                  cout << "\n\nInvalid Input.\n\n\nEnter a number higher than 10: ";
                                  cin >> charges;
                                  
                                  charges;
                          }
        }
     else
        {
                    charges = 10.00; //default arguement from book***
        }
}
void displayOrder(float ordered, float stock, float charges) //displayOrder function holds the following variables:
{                                                           //shipping, perSpool, total cost and special charges
     float backOrder = 0, shipping, perSpool, totalCost, specialCharges;
     
     cout << "\n\nThe number of spools ready to ship from stock: " << ordered; //ordered spools ready for shipment
     
     if (ordered > stock)
        { 
                 backOrder = abs(stock - ordered); //in stock is subtracted by the number of spool that user ordered
                 
                 cout << "\n\nThe number of ordered spools on back order: " << backOrder; 
        }
        
        cout << fixed << showpoint << setprecision(2);
        
        shipping = ordered - backOrder;
        
        perSpool = shipping * 100.00; //perSpool is calculted by shiping x $100.00 **copied from book
        
     cout << "\n\nThe total selling price of the portion ready to ship $" << perSpool;
     
        specialCharges = shipping * charges; //special charges calculations
     
     cout << "\n\nThe total shipping and handling charges on the portion ready to ship $" << specialCharges;
     
        totalCost = perSpool + specialCharges; //total charges calculation
        
     cout << "\n\nThe total of the order ready to ship $" << totalCost; //totalcost calculated and is given
     
       
}

