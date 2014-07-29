/* 
 * File:   testmain.cpp
 * Author: Tracy Quintos
 * Created on July 28, 2014, 7:59 PM
 * Purpose: project 2
 */
#include<iostream>
#include <cstdlib>
#include <fstream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

//User Libraries

//Global Constant

//Function Prototype

//Execution starts here!

/*
 * 
 */
//void con(); //continue menu
void mainMenu();

void questionOne();
void questionTwo();
void questionThree();
void questionFour();
void questionFive();
void questionSix();
void questionSeven();
void questionEight();
void questionNine();
void questionTen();
void questionEleven();
void questionTwelve();
void questionThirteen();
void questionFourteen();
void questionFifteen();

bool areYouSure();
void moneyPoint(int);

int main(int argc, char** argv) 
{
    // summon questionOne() function;
    mainMenu();

    return 0;
}

void mainMenu()
{
    int choice;
    
    ifstream nameFile;
    string input;
    
    cout << "******************************************\n";
    cout << "*\t\tWHO WANTS                *\n";
    cout << "*\t\t TO BE A                 *\n";
    cout << "*\t\tMILLIONAIRE              *\n";
    cout << "******************************************\n";
    
    cout<<"1. START GAME\n";
    cout<<"2. RULES\n";
    cout<<"3. QUIT GAME\n";
    cout<<"PLEASE ENTER CHOICE: \t";
    cin >>choice;
    
    switch (choice)
    {
    case 1:
        questionOne();
        break;
    case 2:
        cout << "RULES PLACE HOLDER\n"; //case 2 for rules


        nameFile.open("RULES.txt"); //opens file "RULES.txt"(will be placed in same destination as the cpp file

    if (nameFile)

    {
    getline(nameFile, input);

    while (nameFile)
    {
    cout<<input<<endl;

    getline(nameFile,input); //allows for console to read the whole file
    }

    nameFile.close();
    }

    else
    {
    cout<<"ERROR:cannot open file.\n"; //incase the file cannot be read this message will be shown
    }
        break;
    case 3:
        cout << "******************************************\n";
        cout<<"YOU CHOOSE TO QUIT, HAVE A NICE DAY.\n";
        break;
    default:
    cout<<"INVALID OPTION, TRY AGAIN\n"; //in the even the user enters in an invalid key, an option to try again will be given
    }
//end of switch 
}

// template function for questions
void questionOne()
{
    char userInput;
    cout << "\n##QUESTION 1 #############################################\n";
    cout << "In what year was RCC established ?\n";
    cout << "A. 1916\t\t\t   C. 1920\n";
    cout << "B. 1945\t\t\t   D. 1975\n";
    cout << "##########################################################\n";
    cout << "YOUR ANSWER IS: \n";
    cin >> userInput;
  
    // if user is sure?
    if(areYouSure() == true)
    {
        if(toupper(userInput) == 'A')
        {
           cout << "YOU ARE CORRECT!\n"; // if right answer give moneyPoints(value)
            // call next questionFunction()
            moneyPoint(100);
            questionTwo();
        }
        else
        {
            cout << "WRONG ANSWER! GAME OVER.\n";
        }
            
    }
    else
    {
        questionOne();
    }
}

void questionTwo()
{
    char userInput;
    cout << "\n##QUESTION 2 #############################################\n";
    //clear screen here if it works
    //system("CLS");
    cout << "What is the capital of Germany ?\n";
    cout << "A. Beirut\t\t\t    C. Buenos Aires\n";
    cout << "B. Berlin\t\t\t   D. Budapest\n";
    cout << "##########################################################\n";
    cout << "YOUR ANSWER IS: \n";
    cin >> userInput;
  
    // if user is sure?
    if(areYouSure() == true)
    {
        if(toupper(userInput) == 'B')
        {
            cout << "YOU ARE CORRECT!\n";
            moneyPoint(200);
            questionThree();
        }
        else
        {
            cout << "WRONG ANSWER! GAME OVER.\n";
        }
            
    }
    else
    {
        questionTwo();
    }
}

void questionThree()
{
    char userInput;
    //clear screen here if it works
    //system("CLS");
    cout << "\n##QUESTION 3 #############################################\n";
    cout << "Who was the 26th U.S. President ?\n";
    cout << "A. Grover Cleveland\t\t\t    C. Theodore Roosevelt\n";
    cout << "B. William McKinley\t\t\t    D. Harry Truman\n";
    cout << "##########################################################\n";
    cout << "YOUR ANSWER IS: \n";
    cin >> userInput;
  
    // if user is sure?
    if(areYouSure() == true)
    {
        if(toupper(userInput) == 'C')
        {
            cout << "YOU ARE CORRECT!\n";
            moneyPoint(300);
            questionFour();
        }
        else
        {
            cout << "WRONG ANSWER! GAME OVER.\n";
        }
            
    }
    else
    {
        questionThree();
    }
}

void questionFour()
{
    char userInput;
    //clear screen here if it works
    //system("CLS");
    cout << "\n##QUESTION 4 #############################################\n";
    cout << "What element in the periodic represents PO ?\n";
    cout << "A. Polonium\t\t\t    C. Cobalt\n";
    cout << "B. Oxygen\t\t\t    D. Radon\n";
    cout << "##########################################################\n";
    cout << "YOUR ANSWER IS: \n";
    cin >> userInput;
  
    // if user is sure?
    if(areYouSure() == true)
    {
        if(toupper(userInput) == 'A')
        {
            cout << "YOU ARE CORRECT!\n";
            moneyPoint(500);
            questionFive();
        }
        else
        {
            cout << "WRONG ANSWER! GAME OVER.\n";
        }
            
    }
    else
    {
        questionFour();
    }
}

void questionFive()
{
    char userInput;
    //clear screen here if it works
    //system("CLS");
    cout << "\n##QUESTION 5 #############################################\n";
    cout << "What is the class code for the c++ progamming morning session ?\n";
    cout << "A. 47023\t\t\t    C. 46023\n";
    cout << "B. 92577\t\t\t    D. 741808\n";
    cout << "##########################################################\n";
    cout << "YOUR ANSWER IS: \n";
    cin >> userInput;
  
    // if user is sure?
    if(areYouSure() == true)
    {
        if(toupper(userInput) == 'C')
        {
            cout << "YOU ARE CORRECT!\n";
            moneyPoint(1000);
            questionSix();
        }
        else
        {
            cout << "WRONG ANSWER! GAME OVER.\n";
        }
            
    }
    else
    {
        questionFive();
    }
}

void questionSix()
{
    char userInput;
    //clear screen here if it works
    //system("CLS");
    cout << "\n##QUESTION 6 ###################################################\n";
    cout << "In what year was the first manned mission to land on the moon ?\n";
    cout << "A. 1920\t\t\t    C. 2011\n";
    cout << "B. 1969\t\t\t    D. 1972\n";
    cout << "################################################################\n";
    cout << "YOUR ANSWER IS: \n";
    cin >> userInput;
  
    // if user is sure?
    if(areYouSure() == true)
    {
        if(toupper(userInput) == 'B')
        {
            cout << "YOU ARE CORRECT!\n";
            moneyPoint(2000);
            questionSeven();
        }
        else
        {
            cout << "WRONG ANSWER! GAME OVER.\n";
        }
            
    }
    else
    {
        questionSix();
    }
}

void questionSeven()
{
    char userInput;
    //clear screen here if it works
    //system("CLS");
    cout << "\n##QUESTION 7 ############################################################\n";
    cout << "Other than 'Global Variables', what is the sure way to fail the class ?\n";
    cout << "A. Using 'doubles'\t\t\t    C. Using 'global constants' \n";
    cout << "B. Using 'shorts'\t\t\t    D. Using 'do-while'\n";
    cout << "###########################################################################\n";
    cout << "YOUR ANSWER IS: \n";
    cin >> userInput;
  
    // if user is sure?
    if(areYouSure() == true)
    {
        if(toupper(userInput) == 'A')
        {
            cout << "YOU ARE CORRECT!\n";
            moneyPoint(4000);
            questionEight();
        }
        else
        {
            cout << "WRONG ANSWER! GAME OVER.\n";
        }
            
    }
    else
    {
        questionSeven();
    }
}

void questionEight()
{
    char userInput;
    //clear screen here if it works
    //system("CLS");
    cout << "\n##QUESTION 8 ############################################################\n";
    cout << "How many pieces are in the game of chess ?\n";
    cout << "A. 15\t\t\t    C. 16\n";
    cout << "B. 17\t\t\t    D. 18\n";
    cout << "##########################################################################\n";
    cout << "YOUR ANSWER IS: \n";
    cin >> userInput;
  
    // if user is sure?
    if(areYouSure() == true)
    {
        if(toupper(userInput) == 'C')
        {
            cout << "YOU ARE CORRECT!\n";
            moneyPoint(8000);
            questionNine();
        }
        else
        {
            cout << "WRONG ANSWER! GAME OVER.\n";
        }
            
    }
    else
    {
        questionEight();
    }
}

void questionNine()
{
    char userInput;
    //clear screen here if it works
    //system("CLS");
    cout << "\n##QUESTION 9 ############################################################\n";
    cout << "As of 2012 what is the estimated world population ?\n";
    cout << "A. 7 Billion\t\t\t    C. 3 Billion\n";
    cout << "B. 5 Billion\t\t\t    D. 9 Billion\n";
    cout << "##########################################################################\n";
    cout << "YOUR ANSWER IS: \n";
    cin >> userInput;
  
    // if user is sure?
    if(areYouSure() == true)
    {
        if(toupper(userInput) == 'C')
        {
            cout << "YOU ARE CORRECT!\n";
            moneyPoint(16000);
            questionTen();
        }
        else
        {
            cout << "WRONG ANSWER! GAME OVER.\n";
        }
            
    }
    else
    {
        questionNine();
    }
}

void questionTen()
{
    char userInput;
    //clear screen here if it works
    //system("CLS");
    cout << "\n##QUESTION 10 ############################################################\n";
    cout << "What is the 5th planet in our solar system ?\n";
    cout << "A. Jupiter\t\t\t    C. 3 Neptune\n";
    cout << "B. Mars\t\t\t       D. Uranus\n";
    cout << "##########################################################################\n";
    cout << "YOUR ANSWER IS: \n";
    cin >> userInput;
  
    // if user is sure?
    if(areYouSure() == true)
    {
        if(toupper(userInput) == 'A')
        {
            cout << "YOU ARE CORRECT!\n";
            moneyPoint(32000);
            questionEleven();
        }
        else
        {
            cout << "WRONG ANSWER! GAME OVER.\n";
        }
            
    }
    else
    {
        questionTen();
    }
}

void questionEleven()
{
    char userInput;
    //clear screen here if it works
    //system("CLS");
    cout << "\n##QUESTION 11 ############################################################\n";
    cout << "What is the largest animal on earth ?\n";
    cout << "A. Blue Whale\t\t\t    C. 3 Anaconda\n";
    cout << "B. African Elephant\t\t\t    D. 9 Giraffe\n";
    cout << "##########################################################################\n";
    cout << "YOUR ANSWER IS: \n";
    cin >> userInput;
  
    // if user is sure?
    if(areYouSure() == true)
    {
        if(toupper(userInput) == 'A')
        {
            cout << "YOU ARE CORRECT!\n";
            moneyPoint(64000);
            questionTwelve();
        }
        else
        {
            cout << "WRONG ANSWER! GAME OVER.\n";
        }
            
    }
    else
    {
        questionEleven();
    }
}

void questionTwelve()
{
    char userInput;
    //clear screen here if it works
    //system("CLS");
    cout << "\n##QUESTION 12 ############################################################\n";
    cout << "In what year did the United States adopt its independence ?\n";
    cout << "A. 1976\t\t\t    C. 3 1476\n";
    cout << "B. 1776\t\t\t    D. 1876\n";
    cout << "##########################################################################\n";
    cout << "YOUR ANSWER IS: \n";
    cin >> userInput;
  
    // if user is sure?
    if(areYouSure() == true)
    {
        if(toupper(userInput) == 'B')
        {
            cout << "YOU ARE CORRECT!\n";
            moneyPoint(125000);
            questionThirteen();
        }
        else
        {
            cout << "WRONG ANSWER! GAME OVER.\n";
        }
            
    }
    else
    {
        questionTwelve();
    }
}

void questionThirteen()
{
    char userInput;
    //clear screen here if it works
    //system("CLS");
    cout << "\n##QUESTION 13 ############################################################\n";
    cout << "In what year did the United States adopt its independence ?\n";
    cout << "A. 1976\t\t\t    C. 3 1476\n";
    cout << "B. 1776\t\t\t    D. 1876\n";
    cout << "##########################################################################\n";
    cout << "YOUR ANSWER IS: \n";
    cin >> userInput;
  
    // if user is sure?
    if(areYouSure() == true)
    {
        if(toupper(userInput) == 'B')
        {
            cout << "YOU ARE CORRECT!\n";
            moneyPoint(250000);
            questionFourteen();
        }
        else
        {
            cout << "WRONG ANSWER! GAME OVER.\n";
        }
            
    }
    else
    {
        questionThirteen();
    }
}

void questionFourteen()
{
    char userInput;
    //clear screen here if it works
    //system("CLS");
    cout << "\n##QUESTION 14 ############################################################\n";
    cout << "How many seconds are in 2 minutes? ?\n";
    cout << "A. 180 \t\t\t    C. 120\n";
    cout << "B. 450 \t\t\t    D. 240\n";
    cout << "##########################################################################\n";
    cout << "YOUR ANSWER IS: \n";
    cin >> userInput;
  
    // if user is sure?
    if(areYouSure() == true)
    {
        if(toupper(userInput) == 'C')
        {
            cout << "YOU ARE CORRECT!\n";
            moneyPoint(500000);
            questionFifteen();
        }
        else
        {
            cout << "WRONG ANSWER! GAME OVER.\n";
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
    //clear screen here if it works
    //system("CLS");
    cout << "\n##QUESTION 15 ############################################################\n";
    cout << "What is the boiling point of water ?\n";
    cout << "A. 101 F\t\t\t    C. 198 F\n";
    cout << "B. 212 F\t\t\t    D. 72 C\n";
    cout << "##########################################################################\n";
    cout << "YOUR ANSWER IS: \n";
    cin >> userInput;
  
    // if user is sure?
    if(areYouSure() == true)
    {
        if(toupper(userInput) == 'C')
        {
            cout << "YOU ARE CORRECT!\n";
            moneyPoint(1000000);
            cout<<"MOVE TO THE BONUS ROUNDS, GOODLUCK!";
        }
        else
        {
            cout << "WRONG ANSWER! GAME OVER.\n";
        }
            
    }
    else
    {
        questionFourteen();
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
        cout << "return false\n";
        return false;
    }
}

void moneyPoint(int value)
{
    int money = value;
    cout << "\nYOU HAVE EARNED: $" << money << endl;
}

