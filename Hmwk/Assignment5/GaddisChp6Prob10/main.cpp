/*
* File: main.cpp
* Author: Tracy Quintos
* Created on July 23, 2014, 9:27 PM
* Purpose: Homework: GaddisChp6Prob10
*/

#include <iostream>
#include <iomanip>
          
using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution starts here!

void getScore(int &score);
void calcAverage(int score1, int score2, int score3, int score4, int score5, int lowest);
int findLowest(int score1, int score2, int score3, int score4, int score5);

int main ()
{
    
int     score1 = 0, score2 = 0, score3 = 0, score4 = 0, score5 = 0, lowest = 0; //setting scores 1-5 = 0
    
        getScore(score1); // test scores 1-5
        getScore(score2);
        getScore(score3);
        getScore(score4);
        getScore(score5);

        lowest = findLowest(score1, score2, score3, score4, score5);; 
        //looking for the lowest score out of the 5 test scores that will be given by user
        calcAverage(score1, score2, score3, score4, score5, lowest);
        //first we will add the scores together and subtract it by the lowest score given 
        //will be averaged out divded by 4

//exit stage right
return 0;
}
void getScore(int &score) //getScore function
{
     
    // for (int repeat = 0; repeat < 5; repeat++)
         //{
              cout << "Enter a test score between 0 and 100: "; //user must enter in a score from 0 to 100
              cin >> score;
              
              cout << "\n\n";
              
              while ((score < 0) || (score > 100))
                    {
                          cout << "Invalid Input.\n\nEnter a test score between 0 and 100: ";
                          cin >> score; //if score does not accomodate given range the program will ask user to re-enter value
              
                          cout << "\n\n";
                    }
         //}                        
}
int findLowest(int score1, int score2, int score3, int score4, int score5)
{                              //findLowest function determines the lowest value through the use of if statements
    int lowest = score1;
    
    if (score2 < lowest)
       {
           lowest = score2;
       }
    if (score3 < lowest)
       {
           lowest = score3;
       }
    if (score4 < lowest)
       {
           lowest = score4;
       }
    if (score5 < lowest)
       {
           lowest = score5;
       }
       
       cout << "The lowest test score to drop is: " << lowest;
       
       return lowest; //returns the lowest value
}
void calcAverage(int score1, int score2, int score3, int score4, int score5, int lowest)
{ //void function calAverage will take the 5 tests scores and subtract the lowest score
 //it will be dvided by 4
     float average;
     
     average = ((score1 + score2 + score3 + score4 + score5) - lowest) / 4.0;
     
     cout << fixed << showpoint << setprecision(2);
     
     cout << "The average score for the 5 tests is: " << average;
}
 

