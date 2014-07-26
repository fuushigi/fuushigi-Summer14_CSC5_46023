/* 
 * File:   main.cpp
 * Author: Tracy Quintos
 * Created on July 26, 2014, 12:31 AM
 * Purpose: Homework GaddisChp7Prob9
 */

#include <iostream>

using namespace std;

//User Libraries

//Global Constant

//Function Prototype

//Execution starts here

const int NUM_QUES = 20;//holds the number of questions that is set to 20, as instructed by book
const int MIN_COR = 15; //validated by book the student/user must have at least a 15/20 grade to pass
void checkAnswers(char[], char[], int, int); //void function to check the answers

/*
 * 
 */
int main(int argc, char** argv) {
    
//the 20 answers prefabricated by book into an array
char answers[NUM_QUES] = {
'B', 'D', 'A', 'A', 'C',
'A', 'B', 'A', 'C', 'D',
'B', 'C', 'D', 'A', 'D',
'C', 'C', 'B', 'D', 'A'};
	     
	    char studAns[NUM_QUES]; //char variable holds the array for student answers for the 20 questions
	     
	    //Loop for users answers
	    for (int replies = 0; replies < NUM_QUES; replies++) { //for loop, prompts the student/user to enter in the answers to the test
	        cout<< "Please enter your answers: "              //incremented to 20 questions
	        << (replies + 1) << ": ";
	        cin >> studAns[replies];
	         
	        //input validation for user when entering the answers
                //user/student is tasked to inputing the answers, A,B,C,or D
	        while (studAns[replies] != 'A' && studAns[replies] != 'B' && studAns[replies] != 'C' && studAns[replies] != 'D') {
	            cout << "You must enter A, B, C, or D\n";
	             
	            cout<< "Please enter your answers: "
	            << (replies + 1) << ": ";
	            cin >> studAns[replies];
	        }
	         
	    }
	     
	    checkAnswers(answers, studAns, NUM_QUES, MIN_COR);

    //Exit stage right
    return 0;
}

//void function that checks the student answers and comparing it to the correct answers
//using for loop and if statement: if the answers given by user is equal to student answers
void checkAnswers(char answers1[], char stu_answers1[], int NUM_QUES, int MIN_COR) {
	    //cout << "max: " << NUM_QUES;
	    int correctAnswers = 0;
	     
	    //Check the student's replies against the correct answers
	    for (int i = 0; i < NUM_QUES; i++)  {
	        if (answers1[i] == stu_answers1[i])
	            correctAnswers++;
	    }
	    //displays whether the user/student has failed or passed the exam
            //if the correct answers is greater than or equal to 15 the student passes, else, student fails
	    cout << "\nYou must have at least 15 correct to pass.";
	    if (correctAnswers >= MIN_COR) {
	        cout << "\nStudent passed the exam\n\n";
	    }
	    else {
	        cout <<"\nStudent failed the exam\n\n";
	    }
	     
	    //Displays the number of questions that was answered incorrectly by user/student
	    cout << " answered questions.\n";
	    for (int i = 0; i < NUM_QUES; i++)  {
	        if (answers1[i] != stu_answers1[i])
	            cout << "Question # " << i << " is incorrect." << endl;
	    }
	     
	    //Display the number of correct and incorrect answers provided by the user/student
	    cout << "\nCorrect Answers = " << correctAnswers << endl;
	    cout << "Incorrect Answers = " << NUM_QUES - correctAnswers << endl;
	}