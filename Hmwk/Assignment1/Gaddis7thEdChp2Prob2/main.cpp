/*
* File: main.cpp
* Author: Tracy Quintos
* Created on November 18, 2016, 11:58 AM
* Purpose: Homework Gaddis7thEdChap2Prob2
*/

#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
 
const float F_PERCENTAGE = 0.62f; 
 
int main(int argc, char** argv) {
	
	system("color c0");
	
	float f_totalSale = 4.6e6f, //$4.6 million
	 	f_percentage = 0.62f;   //The East Coast sales division of a company generates 62 percent of total sales.
	double total;				//total for generate
	
	total = f_totalSale * F_PERCENTAGE; // equation 62% of 4600000 = total
	
	cout << "The East Coast division will generate about $" << setprecision(7)
	<< total << " this year.\n" << endl;
 
system("PAUSE");
    return 0;
}
