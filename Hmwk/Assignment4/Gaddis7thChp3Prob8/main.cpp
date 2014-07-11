/*
* File: main.cpp
* Author: Tracy Quintos
* Created on July 10, 2014, 6:01 PM
* Purpose: Homework - Gaddis7thChp3Prob8
*/

//User Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constant

//Function Prototype

//Execution starts here!

/*
*
*/
int main(int argc, char** argv)
	{
  
	float result=0; //holds results (actual answer)
	float answer;  //holds the user's answer for questions
	int choice;  //holds menu choices
	 
	do
	{
//As instructed Problem 8 displays
// Menu with a do-loop and a switch
	cout<< " Welcome to Quintos Math Tutor " << endl;
	cout<< " 1. Addition\n";
	cout<< " 2. Subtraction\n";
	cout<< " 3. Multiplication\n";
	cout<< " 4. Quit Program\n";
	cout<<"Please enter a choice" <<endl;
	cin>>choice;
	 
	switch (choice) //switch cases 1-3
                       // simple match questions
                      // case 4 holds the output for quitting the program
	{
	case 1: cout<<"500 + 200 = ?"<<endl;
	result = 500 + 200;
	break;
	 
	case 2: cout<<"500 - 200 = ?"<<endl;
	result = 500 - 200;
	break;
	 
	case 3: cout<<" 600 x 200 = ?"<<endl;
	result = 600 * 200;
	break;
        
        case 4: cout<<"End Quintos Tutor, Have a nice day! =)"<<endl;
        break;
        
        }while(choice!=0);
	cout << "What is your answer?"<<endl;
	cin >> answer;
	
        // if statement, the answer of user must be equal to the result of each question
	if (answer == result)
	cout << "Congratulations, You are correct!"<<endl; //User is applaud if answer matches result
	// if found false, the correct answer will be given and the program will loop. 
	else
	cout << "Sorry the answer you have entered is wrong, the correct answer is: " << result << endl;
	 
	}while(choice < 4);
	
	 
	//Exit stage right 
	return 0;
	}

