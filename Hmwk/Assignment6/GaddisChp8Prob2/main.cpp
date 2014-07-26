/*
* File: main.cpp
* Author: Tracy Quintos
* Created on July 26, 2014, 12:25 AM
* Purpose: Homework GaddisChp8Prob2
*/

//User Libraries
#include <iostream>
#include <cstdlib>

using namespace std;

//User Libraries

//Global Constant

//Function Prototype

//Execution starts here!

const int LUCKY_NUMS =10; //"lucky" combinations as given by book
// Function prototype that searches winning ticket number, linear search method
int ticketSearch(const int [], int, int);
/*
*
*/
int main(int argc, char** argv)
{
	//user continues playing the lottery
	char again;

	const char QUIT = 'N';
	//determines if player's ticket is a winner
	int winNum;
	//5 digit "lucky" ticket number entered by user
	int luckyNum;
	//holds winning ticket number
	int ticket;

	//Array holding the winning tickets for each week
	int lotoNum[LUCKY_NUMS] = {13579, 26791, 26792, 33445, 55555,
	62483, 77777, 79422, 85647, 93121};	
	//Player decides if they want to continue playing

			for (int week = 0; week < 10; week++)
			{
				//Winning lotto ticket for each week (10 weeks total)
				ticket = lotoNum[week];
				
				cout << "Please enter your 'lucky' combination; " << (week + 1) << ": " << endl;
				//Player's ticket number
				cin >> luckyNum;
				//Calls linear search for winning lotto ticket
				winNum = ticketSearch(lotoNum, LUCKY_NUMS, luckyNum); 
				//Error message if user's "lucky" number is not the winning ticket
				if ((winNum == -1) || luckyNum != ticket)
				{
				
					cout << "Sorry you did not win! ";
					cout << "Try Again?? (Y/N)";
					cin >> again;
				}
				
				//Player wins the lottery
				else if (luckyNum == ticket)
				{
		
					
					cout << "CONGRATULATIONS! YOU WIN THE LOTTERY!";
					cout << "Play again? (Y/N)";
					cin >> again;
				}
				
				if ((again != 'Y') && (again != 'y')) 
					{
						//exit message
						cout << "Have a nice day! =)";
						//exits the lottery program
						exit(0);
					}
	
                        }
	//Exit stage right
        return 0;
}

//linear search method, to search for the winning lottery numbers
int ticketSearch(const int ticketList[], int numTickets, int winNum)
{
	int index = 0;
	int position = -1;
	bool found = false;

	while ((index < numTickets) && !found) 
	{
		if (ticketList[index] == winNum)
		{
			found = true;
			position = index;
		}
		index ++;
	}
	return position;
}

