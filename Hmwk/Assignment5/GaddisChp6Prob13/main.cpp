/* 
 * File:   main.cpp
 * Author: Tracy Quintos
 * Created on July 23, 2014, 9:44 PM
 * Purpose: GaddisChp6Prob13
 */

#include <iostream>
#include <iomanip>
#include <cmath>
          
using namespace std;

float getSpools(float &ordered, float &stock, float &charges);
void displayOrder(float, float, float);

int main ()
{

float charges, ordered, stock;    
    
getSpools(ordered, stock, charges);

displayOrder(ordered, stock, charges);

 
return 0;
}
float getSpools(float &ordered, float &stock, float &charges)
{
     char   specialChargeYN;
     
     cout << "The number of spools ordered: ";
     cin >> ordered;
     
     while (ordered < 1)
           {
                    cout << "\n\nInvalid Input.\n\n\nEnter a number higher than 1: ";
                    cin >> ordered;
           }
           
     cout << "\n\nThe number of spools in stock: ";
     cin >> stock;
     
     while (stock < 0)
           {
                    cout << "\n\nInvalid Input.\n\n\nEnter a number higher than 0: ";
                    cin >> stock;
           }
           
     cout << "\n\nAny special shipping and handling (Y/N)? ";
     cin >> specialChargeYN;
     
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
                    charges = 10.00;
        }
}
void displayOrder(float ordered, float stock, float charges)
{
     float backOrder = 0, shipping, perSpool, totalCost, specialCharges;
     
     cout << "\n\nThe number of spools ready to ship from stock: " << ordered;
     
     if (ordered > stock)
        { 
                 backOrder = abs(stock - ordered);
                 
                 cout << "\n\nThe number of ordered spools on back order: " << backOrder;
        }
        
        cout << fixed << showpoint << setprecision(2);
        
        shipping = ordered - backOrder;
        
        perSpool = shipping * 100.00;
        
     cout << "\n\nThe total selling price of the portion ready to ship $" << perSpool;
     
        specialCharges = shipping * charges;
     
     cout << "\n\nThe total shipping and handling charges on the portion ready to ship $" << specialCharges;
     
        totalCost = perSpool + specialCharges;
        
     cout << "\n\nThe total of the order ready to ship $" << totalCost;
     
       
}

