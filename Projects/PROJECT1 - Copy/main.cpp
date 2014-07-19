/* 
 * File:   main.cpp
 * Author: Tracy Quintos
 * Created on July 18, 2014, 9:57 AM
 * Purpose: Project1
 */

//User Libraries
#include <iostream>
#include <string>

//User Libraries

//Global Constant

//Function Prototype

//Execution starts here!

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
        char userInput;
	char choiceA = 'A';
	char choiceB = 'B';
	char choiceC = 'C';
	char choiceD = 'D';
	int reward;
	int choice;

    // use for while
    bool startGame = false;
	
	string question1 = "In what year was RCC established ?";
	string question2 = "What is the capital of Germany ?";
	string question3 = "Who was the 26th U.S. President ?";
	string question4 = "What element in the periodic represents PO ?";
	string question5 = "What is the class code for the c++ progamming morning session ?";

	string question6 = "In what year was the first manned mission to land on the moon ?";
	string question7 = "Other than 'Global Variables', what is the sure way to fail the class ?";
	string question8 = "How many pieces are in the game of chess ?";
	string question9 = "As of 2012 what is the estimated world population ?" ;
	string question10 = "What is the 5th planet in our solar system ?" ;

	string question11 = "What is the largest animal on earth?" ;
	string question12 = "In what year did the United States adopt its independence?" ;
	string question13 = "What country today was ancient Babylonia" ;
	string question14 = "How many seconds are in 2 minutes?" ;
	string question15 = "What is the boiling point of water?" ;
	
cout<<"      WELCOME CONTESTANT!\n" 
    <<"++WHO WANTS TO BE A MILLIONAIRE!++\n"<<endl;
cout<<"################### MAIN MENU ###################\n"; 
cout<<"1. START GAME\n";
cout<<"2. RULES\n";
cout<<"3. QUIT GAME\n";
cout<<"PLEASE ENTER CHOICE: \t";
cin >>choice;

switch (choice)
{
case 1:
    startGame = true;
    break;
case 2:
    cout << "RULES PLACE HOLDER\n";
    break;
case 3:
    startGame = false;
    cout<<"YOU CHOOSE TO QUIT\n";
    break;
default: 
cout<<"INVALID OPTION, TRY AGAIN\n";
}

while(startGame)
{
    // QUESTION LOOP FILE
    cout<<"# QUESTION 1 #############################################\n";
    cout<<question1<<endl;
    cout<<"A. 1916 \t\t C. 1920\n"
        <<"B. 1945 \t\t D. 1975\n";
    cout<<"##########################################################\n";
    cout<<"Choose Answer: ";
    cin>>userInput;
    
    if((toupper(userInput)) == choiceA)
    {
        
        reward = 100;
        cout<<"CORRECT!"<< "\t\t\t YOU HAVE EARNED: $"<<reward<<endl<<endl;
        cout<<"# QUESTION 2 #############################################\n";
        cout<<question2<<endl;
        cout<<"A. Beirut \t\t C. Buenos Aires\n"
            <<"B. Berlin \t\t D. Budapest\n";
        cout<<"##########################################################\n";
        cout<<"Choose Answer: ";
        cin>>userInput;
    
        if((toupper(userInput)) == choiceB)
        {
            reward = 200;
            cout<<"CORRECT!"<< "\t\t\t YOU HAVE EARNED: $"<<reward<<endl<<endl;
            cout<<"# QUESTION 3 #############################################\n";
            cout<<question3<<endl;
            cout<<"A. Grover Cleveland \t\t C. Theodore Roosevelt\n"
                <<"B. William McKinley \t\t D. Harry Truman\n";
            cout<<"##########################################################\n";    
            cout<<"Choose Answer: ";
            cin>>userInput;
            
            if((toupper(userInput)) == choiceC)
            {
                reward = 300;
                cout<<"CORRECT!"<< "\t\t\t YOU HAVE EARNED: $"<<reward<<endl<<endl;
                cout<<"# QUESTION 4 #############################################\n";
                cout<<question4<<endl;
                cout<<"A. Polonium \t\t C. Cobalt\n"
                    <<"B. Oxygen \t\t D. Radon\n";
                cout<<"##########################################################\n";   
                cout<<"Choose Answer: ";
                cin>>userInput;
                
                if((toupper(userInput)) == choiceA)
                {
                    reward = 500;
                    cout<<"CORRECT!"<< "\t\t\t YOU HAVE EARNED: $"<<reward<<endl<<endl;
                    cout<<"# QUESTION 5 #############################################\n";
                    cout<<question5<<endl;
                    cout<<"A. 47023 \t\t C. 46023\n"
                        <<"B. 92577 \t\t D. 741808\n";
                    cout<<"##########################################################\n";
                    cout<<"Choose Answer: ";
                    cin>>userInput;
                    
                    if((toupper(userInput)) == choiceC)
                    {
                        reward = 1000;
                        cout<<"CORRECT!"<< "\t\t\t YOU HAVE EARNED: $"<<reward<<endl<<endl;
                        cout<<"# QUESTION 6 #############################################\n";
                        cout<<question6<<endl;
                        cout<<"A. 1920 \t\t C. 2011\n"
                            <<"B. 1969 \t\t D. 1972\n";
                        cout<<"##########################################################\n";
                        cout<<"Choose Answer: ";
                        cin>>userInput;
                        
                        if((toupper(userInput)) == choiceB)
                        {
                            reward = 2000;
                            cout<<"CORRECT!"<< "\t\t\t YOU HAVE EARNED: $"<<reward<<endl<<endl;
                            cout<<"# QUESTION 7 #############################################\n";
                            cout<<question7<<endl;
                            cout<<"A. Using 'doubles' \t\t C. Using 'global constants'\n"
                                <<"B. Using 'shorts' \t\t D. Using 'do-while'\n";
                            cout<<"##########################################################\n";
                            cout<<"Choose Answer: ";
                            cin>>userInput;
                            
                            if((toupper(userInput)) == choiceA)
                            {
                                reward = 4000;
                                cout<<"CORRECT!"<< "\t\t\t YOU HAVE EARNED: $"<<reward<<endl<<endl;
                                cout<<"# QUESTION 8 #############################################\n";
                                cout<<question8<<endl;
                                cout<<"A. 15 \t\t C. 16\n"
                                    <<"B. 17 \t\t D. 18\n";
                                cout<<"##########################################################\n";
                                cout<<"Choose Answer: ";
                                cin>>userInput;
                                
                                if((toupper(userInput)) == choiceC)
                                {
                                    reward = 8000;
                                    cout<<"CORRECT!"<< "\t\t\t YOU HAVE EARNED: $"<<reward<<endl<<endl;
                                    cout<<"# QUESTION 9 #############################################\n";
                                    cout<<question9<<endl;
                                    cout<<"A. 7 Billion \t\t C. 3 Billion\n"
                                        <<"B. 5 Billion \t\t D. 9 Billion\n";
                                    cout<<"##########################################################\n";
                                    cout<<"Choose Answer: ";
                                    cin>>userInput;
                                    if((toupper(userInput)) == choiceA)
                                    {
                                        reward = 16000;
                                        cout<<"CORRECT!"<< "\t\t\t YOU HAVE EARNED: $"<<reward<<endl<<endl;
                                        cout<<"# QUESTION 10 ############################################\n";
                                        cout<<question10<<endl;
                                        cout<<"A. Jupiter \t\t C. Neptune\n"
                                            <<"B. Mars \t\t D. D. Uranus\n";
                                        cout<<"##########################################################\n";
                                        cout<<"Choose Answer: ";
                                        cin>>userInput;
                                        
                                        if((toupper(userInput)) == choiceA)
                                        {
                                            reward = 32000;
                                            cout<<"CORRECT!"<< "\t\t\t YOU HAVE EARNED: $"<<reward<<endl<<endl;
                                            cout<<"# QUESTION 11 ############################################\n";
                                            cout<<question11<<endl;
                                            cout<<"A. Blue Whale \t\t C. Anaconda\n"
                                                <<"B. African Elephant \t\t D. Giraffe\n";
                                            cout<<"##########################################################\n";
                                            cout<<"Choose Answer: ";
                                            cin>>userInput;
                                            if((toupper(userInput)) == choiceA)
                                            {
                                                reward = 64000;
                                                cout<<"CORRECT!"<< "\t\t\t YOU HAVE EARNED: $"<<reward<<endl<<endl;
                                                cout<<"# QUESTION 12 ############################################\n";
                                                cout<<question12<<endl;
                                                cout<<"A. 1976 \t\t C. 1476\n"
                                                    <<"B. 1776 \t\t D. 1876\n";
                                                cout<<"##########################################################\n";
                                                cout<<"Choose Answer: ";
                                                cin>>userInput;
                                                
                                                if((toupper(userInput)) == choiceB)
                                                {
                                                    reward = 125000;
                                                    cout<<"CORRECT!"<< "\t\t\t YOU HAVE EARNED: $"<<reward<<endl<<endl;
                                                    cout<<"# QUESTION 13 ############################################\n";
                                                    cout<<question13<<endl;
                                                    cout<<"A. Iran \t\t C. Iraq\n"
                                                        <<"B. Istanbul \t\t D. Poleland\n";
                                                    cout<<"##########################################################\n";
                                                            cout<<"Choose Answer: ";
                                                            cin>>userInput;
                                                    
                                                    if((toupper(userInput)) == choiceC)
                                                    {
                                                        reward = 250000;
                                                        cout<<"CORRECT!"<< "\t\t\t YOU HAVE EARNED: $"<<reward<<endl<<endl;
                                                        cout<<"# QUESTION 14 ############################################\n";
                                                        cout<<question14<<endl;
                                                        cout<<"A. 180 \t\t C. 120\n"
                                                            <<"B. 450 \t\t D. 240\n";
                                                        cout<<"##########################################################\n";  
                                                        cout<<"Choose Answer: ";
                                                        cin>>userInput;
                                                        
                                                        if((toupper(userInput)) == choiceC)
                                                        {
                                                            reward = 500000;
                                                            cout<<"CORRECT!"<< "\t\t\t YOU HAVE EARNED: $"<<reward<<endl<<endl;
                                                            cout<<"# !!FINAL QUESTION!! #########################################\n";
                                                            cout<<question15<<endl;
                                                            cout<<"A. 101 F \t\t C. 198 F\n"
                                                                <<"B. 212 F \t\t D. 72 C\n";
                                                            cout<<"##########################################################\n";
                                                            cout<<"Choose Answer: ";
                                                            cin>>userInput;
                                                            
                                                            if((toupper(userInput)) == choiceB)
                                                            {
                                                                cout<<"CONGRATULATIONS YOU WON A MILLION DOLLARS\n";
                                                                cout<<"SUBARASHI DESSSSUUUUUUUUU\n";
                                                            }
                                                            else
                                                            {
                                                                reward = 32000;
                                                                cout<<"WRONG ANSWER!"<<endl;
                                                                cout<<"GAME OVER!"<<"YOU HAVE EARNED:"<< "\t\t\t $"<<reward<<endl;
                                                            }
                                                        }
                                                        else
                                                        {
                                                            reward = 32000;
                                                            cout<<"WRONG ANSWER!"<<endl;
                                                            cout<<"GAME OVER!"<<"YOU HAVE EARNED:"<< "\t\t\t $"<<reward<<endl;
                                                        }
                                                    }
                                                    else
                                                    {
                                                        reward = 32000;
                                                        cout<<"WRONG ANSWER!"<<endl;
                                                        cout<<"GAME OVER!"<<"YOU HAVE EARNED:"<< "\t\t\t $"<<reward<<endl;
                                                    }
                                                }
                                                else
                                                {
                                                    reward = 32000;
                                                    cout<<"WRONG ANSWER!"<<endl;
                                                    cout<<"GAME OVER!"<<"YOU HAVE EARNED:"<< "\t\t\t $"<<reward<<endl;
                                                }
                                            }
                                            else
                                            {
                                                reward = 32000;
                                                cout<<"WRONG ANSWER!"<<endl;
                                                cout<<"GAME OVER!"<<"YOU HAVE EARNED:"<< "\t\t\t $"<<reward<<endl;
                                            }
                                        }
                                        else
                                        {
                                            cout<<"WRONG ANSWER!"<<endl;
                                        }
                                    }
                                    else
                                    {
                                        reward = 1000;
                                        cout<<"WRONG ANSWER!"<<endl;
                                        cout<<"GAME OVER!"<<"YOU HAVE EARNED:"<< "\t\t\t $"<<reward<<endl;
                                    }
                                }
                                else
                                {
                                    reward = 1000;
                                    cout<<"WRONG ANSWER!"<<endl;
                                    cout<<"GAME OVER!"<<"YOU HAVE EARNED:"<< "\t\t\t $"<<reward<<endl;
                                }
                            }
                            else
                            {
                                reward = 1000;
                                cout<<"WRONG ANSWER!"<<endl;
                                cout<<"GAME OVER!"<<"YOU HAVE EARNED:"<< "\t\t\t $"<<reward<<endl;
                            }
                        }
                        else
                        {
                            reward = 1000;
                            cout<<"WRONG ANSWER!"<<endl;
                            cout<<"GAME OVER!"<<"YOU HAVE EARNED:"<< "\t\t\t $"<<reward<<endl;
                        }
                    }
                    else
                    {
                        reward = 1000;
                        cout<<"WRONG ANSWER!"<<endl;
                        cout<<"GAME OVER!"<<"YOU HAVE EARNED:"<< "\t\t\t $"<<reward<<endl;
                    }
                }
                else
                {
                    reward = 0;
                    cout<<"WRONG ANSWER!"<<endl;
                    cout<<"GAME OVER!"<<"YOU HAVE EARNED:"<< "\t\t\t $"<<reward<<endl;
                }
            }
            else
            {
                reward = 0;
                cout<<"WRONG ANSWER!"<<endl;
                cout<<"GAME OVER!"<<"YOU HAVE EARNED:"<< "\t\t\t $"<<reward<<endl;
            }
        }
        else
        {
            reward = 0;
            cout<<"WRONG ANSWER!"<<endl;
            cout<<"GAME OVER!"<<"YOU HAVE EARNED:"<< "\t\t\t $"<<reward<<endl;
        }
    }
    else
    {
        reward = 0;
        cout<<"WRONG ANSWER!"<<endl;
        cout<<"GAME OVER!"<<"YOU HAVE EARNED:"<< "\t\t\t $"<<reward<<endl;
    }
} //end of do

                                                                                                                            
    //Exit stage right
    return 0;
}