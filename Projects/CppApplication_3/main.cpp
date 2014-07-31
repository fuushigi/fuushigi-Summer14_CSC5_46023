/*
* File: testmain.cpp
* Author: Tracy Quintos
* Created on July 28, 2014, 7:59 PM
* Purpose: project 2
*/
#include<iostream>
#include <fstream> //read and writing to a file.
#include <string>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constant

//Function Prototype

//Execution starts here!

/*
*
*/
//void con(); //continue menu
void mainMenu(); //void function for main menu

void questionOne(); //void function for question 1
void questionTwo(); //void function for question 2
void questionThree(); //void function for question 3
void questionFour(); //void function for question 4
void questionFive(); //void function for question 5
void questionSix(); //void function for question 6
void questionSeven(); //void function for question 7
void questionEight(); //void function for question 8
void questionNine(); //void function for question 9
void questionTen(); //void function for question 10
void questionEleven(); //void function for question 11
void questionTwelve(); //void function for question 12
void questionThirteen(); //void function for question 13
void questionFourteen(); //void function for question 14
void questionFifteen(); //void function for question 15

bool areYouSure(); //is this your final answer function
void moneyPoint(int); //void function for moneypoint/money prize
int searchList(int [], int, int); //linear search for user ID #
void cls (int); //pseudo clear screen, int for spaces
void bonusAb(); //bonus question function

int main(int argc, char** argv)
{
const int arraySize = 2; //size of the array that holds how many ID #s there are
int tests[arraySize] = {2123629, 2152573}; //array to hold ID #s

int accountN = 0; //holds the account numbers
int results = 0; //holds what # the account is in the element(inside array))

    cout<<"Please enter a valid ID #"<<endl; //Asks user to input their ID number
    cin >> accountN; //variable forID #

    results = searchList(tests, arraySize, accountN); //linear search result
        
    if (results == -1)//if result(ID number) is -1 (false) cout msg will show
cout << "SORRY, INVALID ENTRY, PLEASE TRY AGAIN.\n"; //if user ID is not valid this message will show, user has to try again.
    else // else the user will be brought to the main menu to begin game, see rules, or quit.
{
mainMenu();//main menu function
}

//Exit stage right
return 0;
}


void mainMenu() //void main menu function
{
    int choice; //holds the choices for menu
    int n; //forgot if needed
    
    ifstream nameFile; //ifstream namefile to read the RULES.txt
    string input; //string input, inputs the rules from txt onto console
    
    cout << "******************************************\n"; //Opening title if void function main menu is opened
    cout << "*\t\tWHO WANTS *\n";
    cout << "*\t\t TO BE A *\n";
    cout << "*\t\tMILLIONAIRE *\n";
    cout << "******************************************\n";
    
    cout<<"1. START GAME\n"; //choice 1 allows player to start the game
    cout<<"2. RULES\n"; //choice 2 opens the RULES.txt file onto console, rules can be read through here
    cout<<"3. QUIT GAME\n";//choice 3 quits the game
    cout<<"PLEASE ENTER CHOICE: \t"; //cout msg for a menu choice
    cin >>choice; //inputs choice
    
    switch (choice) //switch statement which holds the choice inputs
    {
    case 1: //case 1 or START GAME will automatically call question 1
        questionOne();
        break;
    case 2:
        cout << "RULES PLACE HOLDER\n"; //case 2 for rules

nameFile.open("RULES.txt"); //opens file "RULES.txt"(will be placed in same destination as the cpp file

    if (nameFile) //fstream to read from RULES.txt file

    {
    getline(nameFile, input); //namefile, input reads file

    while (nameFile)
    {
    cout<<input<<endl;

    getline(nameFile,input); //getline gets the from the namefils it's input which holds the rules to the game
    }

    nameFile.close(); //file close after opening txt
    }

    else //else statement if txt cannot be read
    {
    cout<<"ERROR:cannot open file.\n"; //incase the file cannot be read this message will be shown
    }
        break;
    case 3: //case 3 will cout a message that you have quit the game
        cout << "******************************************\n";
        cout<<"YOU CHOOSE TO QUIT, HAVE A NICE DAY.\n";
        break;
    default:
    cout<<"INVALID OPTION, TRY AGAIN\n"; //in the event the user enters in an invalid key for choice
    } // an option to try again will be given
//end of switch
}

// template function for questions/comments
void questionOne() //function for question 1
{
    char userInput; //char user input is for the answer the user chooses for question 1
    cls (30); //pseudo clear screen after every user input/ answer. 30 line gap

    cout << "\n##QUESTION 1 #############################################\n"; //question 1 title
    cout << "In what year was RCC established ?\n"; //question 1 display
    cout << "A. 1916\t\t\t C. 1920\n"; //choose answer A,B,C,D
    cout << "B. 1945\t\t\t D. 1975\n";
    cout << "##########################################################\n";
    cout << "YOUR ANSWER IS: \n";//user answer is:
    cin >> userInput; //cin >> user's selected answer
  
    // if user is sure?
    if(areYouSure() == true) //if statement, IS THAT YOUR FINAL ANSWER? (yes/ no) function inside if
    {
        if(toupper(userInput) == 'A')//toupper allows user to use the lowercase or uppercase A/a
        { //if user inputs A/a they are correct
        cls (30); // pseudo clear screen after the correct answer is given
        cout << "YOU ARE CORRECT!\n"; // if right answer give moneyPoints(value)
        moneyPoint(100); //answer question 1 correctly user gets $100
        questionTwo(); // call next questionFunction() question 2
        }
        else //else statement for wrong answer
        { //cout WRONG ANSWER, GAME OVER, THANKS FOR PLAYING
            cout << "WRONG ANSWER! GAME OVER. THANKS FOR PLAYING!\n";
            moneyPoint(0); // $0 will be given if answer is wrong
        }
            
    }
	else
	{
		questionOne();//if areYouSure() == false question one will be called
	}
} 

void questionTwo() //function for question 2
{
    char userInput; //char user input is for the answer the user chooses for question 2

    cout << "\n##QUESTION 2 #############################################\n"; //question 2 title
    cout << "What is the capital of Germany ?\n"; //question 2 display
    cout << "A. Beirut\t\t\t C. Buenos Aires\n"; //choose answer A,B,C,D
    cout << "B. Berlin\t\t\t D. Budapest\n";
    cout << "##########################################################\n";
    cout << "YOUR ANSWER IS: \n"; //user answer is:
    cin >> userInput; //cin >> user's selected answer
  
    // if user is sure?
    if(areYouSure() == true) //if statement, IS THAT YOUR FINAL ANSWER? (yes/ no) function inside if
    {
        if(toupper(userInput) == 'B')//toupper allows user to use the lowercase or uppercase B/b
        { //if user inputs B/b they are correct
			cls (30); // pseudo clear screen after the correct answer is given
            cout << "YOU ARE CORRECT!\n"; // if right answer give moneyPoints(value)
            moneyPoint(200); //answer question 2 correctly user gets $200
            questionThree(); // call next questionFunction() question 3
        }
        else //else statement for wrong answer
        { //cout WRONG ANSWER, GAME OVER, THANKS FOR PLAYING
            cout << "WRONG ANSWER! GAME OVER. THANKS FOR PLAYING!\n";
            moneyPoint(0); // $0 will be given if answer is wrong
        }
            
    }
    else
    {
            questionTwo(); //if areYouSure() == false question two will be called
    }
}

void questionThree() //function for question 3
{
    char userInput; //char user input is for the answer the user chooses for question 3

    cout << "\n##QUESTION 3 ####################################################\n"; //question 3 title
    cout << "Who was the 26th U.S. President ?\n"; //question 3 display
    cout << "A. Grover Cleveland\t\t\t C. Theodore Roosevelt\n"; //choose answer A,B,C,D
    cout << "B. William McKinley\t\t\t D. Harry Truman\n";
    cout << "#################################################################\n";
    cout << "YOUR ANSWER IS: \n"; //user answer is:
    cin >> userInput;//cin >> user's selected answer
  
    // if user is sure?
    if(areYouSure() == true) //if statement, IS THAT YOUR FINAL ANSWER? (yes/ no) function inside if
    {
        if(toupper(userInput) == 'C') //toupper allows user to use the lowercase or uppercase C/c
        {
			cls (30); // pseudo clear screen after the correct answer is given
            cout << "YOU ARE CORRECT!\n"; // if right answer give moneyPoints(value)
            moneyPoint(300); //answer question 3 correctly user gets $300
            questionFour(); //call next questionFunction() question 4
        }
        else //else statement for wrong answer
        { //cout WRONG ANSWER, GAME OVER, THANKS FOR PLAYING
            cout << "WRONG ANSWER! GAME OVER. THANKS FOR PLAYING!\n";
            moneyPoint(0); // $0 will be given if answer is wrong
        }
            
    }
    else
    {
            questionThree(); //if areYouSure() == false question three will be called
    }
}

void questionFour() //function for question 4
{
    char userInput; //char user input is for the answer the user chooses for question 4

    cout << "\n##QUESTION 4 #############################################\n"; //question 4 title
    cout << "What element in the periodic represents PO ?\n";  //question 4 display
    cout << "A. Polonium\t\t\t C. Cobalt\n"; //choose answer A,B,C,D
    cout << "B. Oxygen\t\t\t D. Radon\n";
    cout << "##########################################################\n";
    cout << "YOUR ANSWER IS: \n"; //user answer is:
    cin >> userInput; //cin >> user's selected answer
  
    // if user is sure?
    if(areYouSure() == true) //if statement, IS THAT YOUR FINAL ANSWER? (yes/ no) function inside if
    { //if user inputs A/a they are correct
        if(toupper(userInput) == 'A') //toupper allows user to use the lowercase or uppercase A/a
        {
            cls (30); // pseudo clear screen after the correct answer is given
			cout << "YOU ARE CORRECT!\n";
            moneyPoint(500); //answer question4 correctly user gets $500
            questionFive(); // call next questionFunction() question 5
        }
        else //else statement for wrong answer
        { //cout WRONG ANSWER, GAME OVER, THANKS FOR PLAYING
            cout << "WRONG ANSWER! GAME OVER. THANKS FOR PLAYING!\n";
            moneyPoint(0); // $0 will be given if answer is wrong
        }
            
    }
    else
    {
            questionFour(); //if areYouSure() == false question four will be called
    }
}

void questionFive() //function for question 5
{
    char userInput; //char user input is for the answer the user chooses for question 5

    cout << "\n##QUESTION 5 ##################################################\n"; //question 5 title
    cout << "What is the class code for the c++ progamming morning session ?\n"; //question 5 display
    cout << "A. 47023\t\t\t C. 46023\n"; //choose answer A,B,C,D
    cout << "B. 92577\t\t\t D. 741808\n";
    cout << "###############################################################\n";
    cout << "YOUR ANSWER IS: \n"; //user answer is:
    cin >> userInput; //cin >> user's selected answer
  
    // if user is sure?
    if(areYouSure() == true) //if statement, IS THAT YOUR FINAL ANSWER? (yes/ no) function inside if
    {
        if(toupper(userInput) == 'C') //toupper allows user to use the lowercase or uppercase C/c
        { //if user inputs C/c they are correct
            cls (30); // pseudo clear screen after the correct answer is given
            cout << "YOU ARE CORRECT!\n"; // if right answer give moneyPoints(value)
            moneyPoint(1000); //answer question 5 correctly user gets $100
            questionSix(); // call next questionFunction() question 5
        }
        else //else statement for wrong answer
        { //cout WRONG ANSWER, GAME OVER, THANKS FOR PLAYING
            cout << "WRONG ANSWER! GAME OVER. THANKS FOR PLAYING!\n";
            moneyPoint(1000); // $1000 will be given if answer is wrong
        }
            
    }
    else
    {
            questionFive(); //if areYouSure() == false question five will be called
    }
}

void questionSix() //function for question 6
{
    char userInput; //char user input is for the answer the user chooses for question 6

    cout << "\n##QUESTION 6 ##################################################\n"; //question 6 title
    cout << "In what year was the first manned mission to land on the moon ?\n"; //question 6 display
    cout << "A. 1920\t\t\t C. 2011\n"; //choose answer A,B,C,D
    cout << "B. 1969\t\t\t D. 1972\n";
    cout << "###############################################################\n";
    cout << "YOUR ANSWER IS: \n"; //user answer is:
    cin >> userInput; //cin >> user's selected answer
  
    // if user is sure?
    if(areYouSure() == true) //if statement, IS THAT YOUR FINAL ANSWER? (yes/ no) function inside if
    {
        if(toupper(userInput) == 'B') //toupper allows user to use the lowercase or uppercase B/b
        {  //if user inputs B/b they are correct
            cls (30); // pseudo clear screen after the correct answer is given
			cout << "YOU ARE CORRECT!\n"; // if right answer give moneyPoints(value)
            moneyPoint(2000);  //answer question 6 correctly user gets $2000
            questionSeven(); // call next questionFunction() question 6
        }
        else //else statement for wrong answer
        {  //cout WRONG ANSWER, GAME OVER, THANKS FOR PLAYING
            cout << "WRONG ANSWER! GAME OVER. THANKS FOR PLAYING!\n";
            moneyPoint(1000);  // $1000 will be given if answer is wrong
        }
            
    }
    else
    {
            questionSix(); //if areYouSure() == false question six will be called
    }
}

void questionSeven() //function for question 7
{
    char userInput;//char user input is for the answer the user chooses for question 7

    cout << "\n##QUESTION 7 ##########################################################\n"; //question 7 title
    cout << "Other than 'Global Variables', what is the sure way to fail the class ?\n"; //question 7 display
    cout << "A. Using 'doubles'\t\t\t C. Using 'global constants' \n";//choose answer A,B,C,D
    cout << "B. Using 'shorts'\t\t\t D. Using 'do-while'\n";
    cout << "#######################################################################\n";
    cout << "YOUR ANSWER IS: \n"; //user answer is:
    cin >> userInput; //cin >> user's selected answer
  
    // if user is sure?
    if(areYouSure() == true) //if statement, IS THAT YOUR FINAL ANSWER? (yes/ no) function inside if
    {
        if(toupper(userInput) == 'A') //toupper allows user to use the lowercase or uppercase A/a
        { //if user inputs A/a they are correct
            cls (30); // pseudo clear screen after the correct answer is given
			cout << "YOU ARE CORRECT!\n"; // if right answer give moneyPoints(value)
            moneyPoint(4000); //answer question 7 correctly user gets $4000
            questionEight();  // call next questionFunction() question 8
        }
        else  //else statement for wrong answer
        { //cout WRONG ANSWER, GAME OVER, THANKS FOR PLAYING
            cout << "WRONG ANSWER! GAME OVER. THANKS FOR PLAYING!\n";
            moneyPoint(1000);  // $1000 will be given if answer is wrong
        }
            
    }
    else
    {
            questionSeven(); //if areYouSure() == false question seven will be called
    }
}

void questionEight() //function for question 8
{
    char userInput; //char user input is for the answer the user chooses for question 8

    cout << "\n##QUESTION 8 ############################################################\n"; //question 8 title
    cout << "How many pieces are in the game of chess per side ?\n"; //question 8 display
    cout << "A. 15\t\t\t C. 16\n"; //choose answer A,B,C,D
    cout << "B. 17\t\t\t D. 18\n";
    cout << "##########################################################################\n";
    cout << "YOUR ANSWER IS: \n"; //user answer is:
    cin >> userInput; //cin >> user's selected answer
  
    // if user is sure?
    if(areYouSure() == true) //if statement, IS THAT YOUR FINAL ANSWER? (yes/ no) function inside if
    {
        if(toupper(userInput) == 'C') //toupper allows user to use the lowercase or uppercase C/c
        { //if user inputs C/c they are correct
            cls (30); // pseudo clear screen after the correct answer is given
            cout << "YOU ARE CORRECT!\n";
            moneyPoint(8000); //answer question 8 correctly user gets $8000
            questionNine(); // call next questionFunction() question 8
        }
        else //else statement for wrong answer
        {   //cout WRONG ANSWER, GAME OVER, THANKS FOR PLAYING
            cout << "WRONG ANSWER! GAME OVER. THANKS FOR PLAYING!\n";
            moneyPoint(1000); // $1000 will be given if answer is wrong
        }
            
    }
    else
    {
            questionEight(); //if areYouSure() == false question eight will be called
    }
}

void questionNine() //function for question 9
{
    char userInput; //char user input is for the answer the user chooses for question 9
   
    cout << "\n##QUESTION 9 ############################################################\n"; //question 9 title
    cout << "As of 2012 what is the estimated world population ?\n"; //question 9 display
    cout << "A. 7 Billion\t\t\t C. 3 Billion\n"; //choose answer A,B,C,D
    cout << "B. 5 Billion\t\t\t D. 9 Billion\n";
    cout << "#########################################################################\n";
    cout << "YOUR ANSWER IS: \n"; //user answer is:
    cin >> userInput; //cin >> user's selected answer
  
    // if user is sure?
    if(areYouSure() == true)  //if statement, IS THAT YOUR FINAL ANSWER? (yes/ no) function inside if
    {
        if(toupper(userInput) == 'A') //toupper allows user to use the lowercase or uppercase A/a
        {  //if user inputs A/a they are correct
            cls (30); // pseudo clear screen after the correct answer is given
            cout << "YOU ARE CORRECT!\n";
            moneyPoint(16000); //answer question 9 correctly user gets $160000
            questionTen(); // call next questionFunction() question 10
        }
        else
        {
            cout << "WRONG ANSWER! GAME OVER. THANKS FOR PLAYING!\n";
            moneyPoint(1000); // $1000 will be given if answer is wrong
        }
            
    }
    else
    {
            questionNine(); //if areYouSure() == false question nine will be called
    }
}

void questionTen() //function for question 10
{
    char userInput; //char user input is for the answer the user chooses for question 9

    cout << "\n##QUESTION 10 ############################################################\n"; //question 10 title
    cout << "What is the 5th planet in our solar system ?\n"; //question 10 display
    cout << "A. Jupiter\t\t\t C. Neptune\n"; //choose answer A,B,C,D
    cout << "B. Mars\t\t\t\t D. Uranus\n";
    cout << "##########################################################################\n";
    cout << "YOUR ANSWER IS: \n"; //user answer is:
    cin >> userInput; //cin >> user's selected answer
  
    // if user is sure?
    if(areYouSure() == true)  //if statement, IS THAT YOUR FINAL ANSWER? (yes/ no) function inside if
    {
        if(toupper(userInput) == 'A') //toupper allows user to use the lowercase or uppercase A/a
        { //if user inputs A/a they are correct
            cls (30); // pseudo clear screen after the correct answer is given
            cout << "YOU ARE CORRECT!\n";
            moneyPoint(32000); //answer question 10 correctly user gets $320000
            questionEleven(); // call next questionFunction() question 11
        }
        else
        {
            cout << "WRONG ANSWER! GAME OVER. THANKS FOR PLAYING!\n";
            moneyPoint(1000); // $1000 will be given if answer is wrong
        }
            
    }
    else
    {
            questionTen();  //if areYouSure() == false question ten will be called
    }
}

void questionEleven() //function for question 11
{
    char userInput; //char user input is for the answer the user chooses for question 11
 
    cout << "\n##QUESTION 11 ############################################################\n"; //question 11 title
    cout << "What is the largest animal on earth ?\n"; //question 11 display
    cout << "A. Blue Whale\t\t\t C. Anaconda\n"; //choose answer A,B,C,D
    cout << "B. African Elephant\t\t D. Giraffe\n";
    cout << "##########################################################################\n";
    cout << "YOUR ANSWER IS: \n"; //user answer is:
    cin >> userInput; //cin >> user's selected answer
  
    // if user is sure?
    if(areYouSure() == true) //if statement, IS THAT YOUR FINAL ANSWER? (yes/ no) function inside if
    {
        if(toupper(userInput) == 'A')  //toupper allows user to use the lowercase or uppercase A/a
        { //if user inputs A/a they are correct
            cls (30); // pseudo clear screen after the correct answer is given
            cout << "YOU ARE CORRECT!\n";
            moneyPoint(64000); //answer question 11 correctly user gets $640000
            questionTwelve(); // call next questionFunction() question 12
        }
        else
        {
            cout << "WRONG ANSWER! GAME OVER. THANKS FOR PLAYING!\n";
            moneyPoint(32000); // $32000 will be given if answer is wrong
        }
            
    }
    else
    {
            questionEleven(); //if areYouSure() == false question eleven will be called
    }
}

void questionTwelve() //function for question 12
{
    char userInput; //char user input is for the answer the user chooses for question 12

    cout << "\n##QUESTION 12 ############################################################\n"; //question 12 title
    cout << "In what year did the United States adopt its independence ?\n"; //question 12 display
    cout << "A. 1976\t\t\t C. 1476\n"; //choose answer A,B,C,D
    cout << "B. 1776\t\t\t D. 1876\n";
    cout << "##########################################################################\n";
    cout << "YOUR ANSWER IS: \n";  //user answer is:
    cin >> userInput; //cin >> user's selected answer
  
    // if user is sure?
    if(areYouSure() == true) //if statement, IS THAT YOUR FINAL ANSWER? (yes/ no) function inside if
    { //if user inputs B/b they are correct
        if(toupper(userInput) == 'B') //toupper allows user to use the lowercase or uppercase B/b
        { //if user inputs B/b they are correct
            cls (30); // pseudo clear screen after the correct answer is given
            cout << "YOU ARE CORRECT!\n";
            moneyPoint(125000); //answer question 12 correctly user gets $125000
            questionThirteen(); // call next questionFunction() question 13
        }
        else
        {
            cout << "WRONG ANSWER! GAME OVER. THANKS FOR PLAYING!\n";
            moneyPoint(32000);  // $32000 will be given if answer is wrong
        }
            
    }
    else
    {
            questionTwelve(); //if areYouSure() == false question twelve will be called
    }
}

void questionThirteen() //function for question 13
{
    char userInput; //char user input is for the answer the user chooses for question 12

    cout << "\n##QUESTION 13 ############################################################\n"; //question 13 title
    cout << "What country today was ancient Babylonia ?\n"; //question 13 display
    cout << "A. Iran\t\t\t C. Iraq\n"; //choose answer A,B,C,D
    cout << "B. Istanbul\t\t D. Poland\n";
    cout << "##########################################################################\n";
    cout << "YOUR ANSWER IS: \n"; //user answer is:
    cin >> userInput; //cin >> user's selected answer
  
    // if user is sure?
    if(areYouSure() == true) //if statement, IS THAT YOUR FINAL ANSWER? (yes/ no) function inside if
    {
        if(toupper(userInput) == 'C') //toupper allows user to use the lowercase or uppercase C/c
        {
            cls (30); // pseudo clear screen after the correct answer is given
            cout << "YOU ARE CORRECT!\n";
            moneyPoint(250000);  //answer question 12 correctly user gets $250000
            questionFourteen(); // call next questionFunction() question 14
        }
        else
        {
            cout << "WRONG ANSWER! GAME OVER. THANKS FOR PLAYING!\n";
            moneyPoint(32000); // $32000 will be given if answer is wrong
        }
            
    }
    else
    {
            questionThirteen(); //if areYouSure() == false question thirteen will be called
    }
}

void questionFourteen()
{
    char userInput;

    cout << "\n##QUESTION 14 ############################################################\n"; //question 14 title
    cout << "How many seconds are in 2 minutes? ?\n";
    cout << "A. 180 \t\t\t C. 120\n";
    cout << "B. 450 \t\t\t D. 240\n";
    cout << "##########################################################################\n";
    cout << "YOUR ANSWER IS: \n";
    cin >> userInput;
  
    // if user is sure?
    if(areYouSure() == true)
    {
        if(toupper(userInput) == 'C')
        {
            cls (30);
            cout << "YOU ARE CORRECT!\n";
            moneyPoint(500000);
            questionFifteen();
        }
        else
        {
            cout << "WRONG ANSWER! GAME OVER. THANKS FOR PLAYING!\n";
            moneyPoint(32000);
        }
            
    }
    else
    {
            questionFourteen();
    }
}

void questionFifteen()
{
    char userInput;

    cout << "\n##QUESTION 15 ############################################################\n"; //question 15 title
    cout << "What is the boiling point of water ?\n";
    cout << "A. 101 F\t\t\t C. 198 F\n";
    cout << "B. 212 F\t\t\t D. 72 C\n";
    cout << "##########################################################################\n";
    cout << "YOUR ANSWER IS: \n";
    cin >> userInput;
  
    // if user is sure?
    if(areYouSure() == true)
    {
        if(toupper(userInput) == 'B')
        {
            cls (30);
            cout << "YOU ARE CORRECT!\n";
            moneyPoint(1000000);
            //char bonusInput;
            cout << "WOULD YOU LIKE TO ENTER BONUS ROUND\n";
            //cin >> bonusInput;
            // if user is sure?
            if(areYouSure() == true)
            {
                bonusAb();
            }
            else
            {
                cls (30);
                cout << "NICE TRY, WE'LL DO IT ANYWAY! =)\n";
                bonusAb();
            }
           
        }
            
    }
	else
	{
	questionFifteen();
	}
}

void bonusAb()
{
    ofstream outputFile;

outputFile.open("callsign.txt");
    
string mpaUserInput[2][5] = {
{"ROW0 COL0","ROW0 COL1","ROW0 COL2","ROW0 COL3","ROW0 COL4"},
{"ROW1 COL0","ROW1 COL1","ROW1 COL2","ROW1 COL3","ROW1 COL4"}
};
    //mpa1+2 compensate for string 2D array on ^
string mpa1[5] = {"ALPHA", "BRAVO", "CHARLIE", "DELTA", "ECHO"};
string mpa2[5] = {"FOXTROT", "GOLF", "HOTEL", "INDIA", "JULIET"};


/* show initial value BEFORE cin
for(int row = 0; row < 2; row++)
{
for(int col = 0; col < 5; col++)
{
cout << mpaUserInput[row][col] << endl;
}
cout << endl;
}
*/

    cout << "\n##BONUS QUESTION ##########################################################\n"; // bonus question title
    cout << "WHAT IS THE FIRST TEN MILITARY PHONETIC ALPHABETS ?\n";
    cout << "##########################################################################\n";
    cout << "ENTER PHONETIC ABCDEFGHIJ: " << endl;
// CIN
for(int row = 0; row < 2; row++)
{

for(int col = 0; col < 5; col++)
{
cout << "LETTER #" << (col+1) <<": ";
cin >> mpaUserInput[row][col];
}
cout << endl;
}

//VALIDATING ROW 1
cout << "VALIDATING ROW 1: "<< endl;
for(int col = 0; col < 5; col++)
{
// for loop to caps all columns //validates length of any column in first row
//i.e. userinput has 4 char (alfa)
// if 0 < userinput ++ until reaches length of userinput (4 chars)
for(int i = 0; i < mpaUserInput[0][col].length(); i++)
{
//the char of userinput will (=) become uppercase (ALFA)
(mpaUserInput[0][col])[i] = toupper((mpaUserInput[0][col])[i]);
}
// VALIDATION FOR ROW 1 (see mpa1 arrays)
//if userinput in row 0 any column is the same as mpa1 any column
//i.e. is ALFA the same as ALPHA? if yes, CORRECT else, WRONG
if(mpaUserInput[0][col] == mpa1[col])
{
cout << "CORRECT!" << endl;
}
else
{
cout << "WRONG!!!" << endl;
}
}
cout << endl;

//VALIDATING ROW 2
cout << "VALIDATING ROW 2: "<< endl;
for(int col = 0; col < 5; col++)
{
for(int i = 0; i < mpaUserInput[1][col].length(); i++)
{
(mpaUserInput[1][col])[i] = toupper((mpaUserInput[1][col])[i]);
}
// VALIDATION FOR ROW2 (see mpa2 arrays)
if(mpaUserInput[1][col] == mpa2[col])
{
cout << "CORRECT!" << endl;
}
else
{
cout << "WRONG!!!" << endl;
}
}
cout << endl;

// show initial value AFTER cin
for(int row = 0; row < 2; row++)
{
for(int col = 0; col < 5; col++)
{
cout << mpaUserInput[row][col] << endl;
outputFile << mpaUserInput[row][col] << "\r\n";
}
cout << endl;
outputFile << "\r\n";
}
}

// Revalidate Question
bool areYouSure()
{
    char rysChar;
    cout << "IS THAT YOUR FINAL ANSWER?(Y/n): ";
    cin >> rysChar;
    
    if(toupper(rysChar) == 'Y')
    {
        //test for return: comment out cout
        //cout << "return true\n";
        return true;
    }
    else
    {
        
        return false;
    }
}

void moneyPoint(int value)
{
    int money = value;
    cout << "\nYOU HAVE EARNED: $" << money << endl;
}

void cls (int n)
{
for (int i = 1;i<n;i++)
        {
cout<<endl;
        }
}

 //constant integer variable setting array size 18, corresponds to the account numbers given by book
int searchList(int list[], int numElems, int value)
{
int index = 0; //subscript to search array
int position = -1; //record position of search value
bool found = false; // boolean to indicate if the value was found, found is set to false

while (index < numElems && !found)
{
if (list[index] == value) // If the value is found
{
found = true; // Set the flag
position = index; // Record the value's subscript
}
index++; // Go to the next element
}

return position; // Return the position, or -1
}
