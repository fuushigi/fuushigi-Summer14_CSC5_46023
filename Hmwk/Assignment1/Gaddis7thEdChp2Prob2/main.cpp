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
	
	
	float f_totalSale = 4.6e6f;
	float f_percentage = 0.62f;
	double total;
	
	total = f_totalSale * F_PERCENTAGE;
	
	
	cout << "The East Coast division will generate about $" << setprecision(7)
	<< total << " this year" << endl;
 
	
    
    return 0;
}
