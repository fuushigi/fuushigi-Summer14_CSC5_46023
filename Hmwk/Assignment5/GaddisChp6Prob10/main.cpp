/*
* File: main.cpp
* Author: Tracy Quintos
* Created on July 23, 2014, 9:27 PM
* Purpose: Homework: GaddisChp6Prob10
*/

#include <iostream>
#include <iomanip>
          
using namespace std;

void getScore(int &score);
void calcAverage(int score1, int score2, int score3, int score4, int score5, int lowest);
int findLowest(int score1, int score2, int score3, int score4, int score5);

int main ()
{
    
int     score1 = 0, score2 = 0, score3 = 0, score4 = 0, score5 = 0, lowest = 0;
    
        getScore(score1);
        getScore(score2);
        getScore(score3);
        getScore(score4);
        getScore(score5);

        lowest = findLowest(score1, score2, score3, score4, score5);;

        calcAverage(score1, score2, score3, score4, score5, lowest);


return 0;
}
void getScore(int &score)
{
     
    // for (int repeat = 0; repeat < 5; repeat++)
         //{
              cout << "Enter a test score between 0 and 100: ";
              cin >> score;
              
              cout << "\n\n";
              
              while ((score < 0) || (score > 100))
                    {
                          cout << "Invalid Input.\n\nEnter a test score between 0 and 100: ";
                          cin >> score;
              
                          cout << "\n\n";
                    }
         //}                        
}
int findLowest(int score1, int score2, int score3, int score4, int score5)
{
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
       
       return lowest;
}
void calcAverage(int score1, int score2, int score3, int score4, int score5, int lowest)
{
     float average;
     
     average = ((score1 + score2 + score3 + score4 + score5) - lowest) / 4.0;
     
     cout << fixed << showpoint << setprecision(2);
     
     cout << "The average score for the 5 tests is: " << average;
}
 

