/*
* File: main.cpp
* Author: Tracy Quintos
* Created on July 23, 2014, 10:49 AM
* Purpose: Homework Assignment5Menu 
*/

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <cmath>

using namespace std;


//User Libraries

//Function Prototypes
//Asks User to press enter to continue
void con();

float calculatedRetail (float cost, float markUp);
//Function to calculate mark-up
//Gaddis required to name variable calculateRetail

void getScore(int &score);
void calcAverage(int score1, int score2, int score3, int score4, int score5, int lowest);
int findLowest(int score1, int score2, int score3, int score4, int score5);

float getSpools(float &ordered, float &stock, float &charges); //getspools function and variables with &
void displayOrder(float, float, float); //displayOrder function and float variables

bool IsPrime(int); //isPrime function given by book, using bool statement

float lowNum(float,float,float,float,float); //function for accident numbers, holds 5 floats
void display(float); //displays the low variable
void acciN (float &, float &, float &, float &, float &); // accident numbers using &

void cvs (float, float); //function for falling distance, holds two floats will be used later

void kinE (float,float); //void function golds kinE (kinetic energy function) and two floats as arguements

float cvs (int fahrenheit); // function celcius

const int START_FAH = 0, //constants is taken from a previous assignment, modified it to use a function
          END_FAH = 20,
          INCREMENT = 1;

float CVS = 1.0e-2f; //The conversion for percentage

float population(float, float, float);


//Global Constants

//Execution starts here!
int main(int argc, char** argv) {
    
    int choice;
 
   do{
       
   
    do{
            cout<<" [1] Problem 1 - Gaddis Chapter 6 "<<endl;
            cout<<" [2] Problem 10 - Gaddis Chapter 6 "<<endl;
            cout<<" [3] Problem 13 - Gaddis Chapter 6 "<<endl;
            cout<<" [4] Problem 21 - Gaddis Chapter 6 "<<endl;
            cout<<" [5] Problem 4 - Gaddis Chapter 6 "<<endl;
            cout<<" [6] Problem 5 - Gaddis Chapter 6 "<<endl;
            cout<<" [7] Problem 8 - Gaddis Chapter 6 "<<endl;
            cout<<" [8] Problem 6 - Gaddis Chapter 6 "<<endl;
            cout<<" [9] Problem 7 - Gaddis Chapter 6 "<<endl;
            cout<<" [10] Problem 15 - Gaddis Chapter 6 "<<endl;
               
            cout<<" [0] Exit Program "<<endl;
               
            cout<<" Enter choice: ";
            cin>>choice;
            cin.ignore();
        }while(choice<0||choice >10);
        
        switch(choice){
            case 0:
            {
                break;
            }
            case 1:
            {
                cout<<"Problem 1"<<endl;
                con(); //question 1 is it in the right place though
                
                float retail, cost, markUp; //variables set to double data type

cout<<fixed<<showpoint<<setprecision(2); //setting deicmal place to 2

cout<<"Enter the wholesale cost for the item: $"; // user is asked to enter in the cost of an item
cin >>cost;
//validate the cost price
while (cost<0) //the cost must exceed 0 dollars
{
cout<<"Please enter a positive number. $"<<endl;
cin >>cost;
}

cout<<"Now please enter its markup percentage: "; //user is asked to enter in the markUp
cin >>markUp;
//validate the markup percentage
while (markUp<0) //the cost must exceed 0 %
{
cout<<"Please enter a positive number for markup: ";
cin >>markUp;
}

//convert markup percentage to two decimal point
markUp = (markUp/100);

cout<<"The retail price for the item is: "<<endl;

cout<<"$ " <<calculatedRetail(cost, markUp)<<endl;
                
                    
                    
                    con();
                    break;
            }
                    
           
            case 2:
            {
                cout<<"Problem 10"<<endl;
                con();
                
                int score1 = 0, score2 = 0, score3 = 0, score4 = 0, score5 = 0, lowest = 0; //setting scores 1-5 = 0
    
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
                

                
                con();
                break;
            }
                
            case 3:
            {
                cout<<"Problem 13"<<endl;
                con();
                
                float charges, ordered, stock;
    
getSpools(ordered, stock, charges);

displayOrder(ordered, stock, charges);
                
                
                con();
                break;
            }
            
            case 4:
            {
                
                
                cout<<"Problem 21"<<endl;
                con();
                
                	int number;

cout << "Enter an integer that is greater than 1: "; //user is asked to enter in a number greater than 1
cin >> number;

if (IsPrime(number)) //if statement to determine from function if number given is a prime or not
{
cout << number << " is a prime." << endl;
}
else
{
cout << number << " is not a prime." << endl;
}
                
                
              

                break;
            }
            case 5:
            {
                
                cout<<"Problem 4"<<endl;
                con();
               
                float low,n1,s2,e3,w4,c5; //varibles of the regions that will be used to determine lowest accidents
    
    acciN(n1,s2,e3,w4,c5);
    
    low = lowNum(n1,s2,e3,w4,c5);
    
    display(low);
                
                con();
                break;
            }
                 
                case 7:
                {
                    cout<<"Problem 5";
                    con();
                    
                   float g = 9.8; //holds g, given by book
    float t; //holds the amonut of time, in seconds
    
    cout<<fixed<<showpoint<<setprecision(2);
    
    cout<<"Please enter the amount of time"<<endl; //user is asked to enter in the time of falling object
    cin>>t;
    cvs(g,t); 
                
                con();
                break;
                }
            
            case 8:
            {
                cout<<"Program 9"<<endl;
                con();
                
                float mass; //holds mass of object
    float vel; //holds velocity of object
    
    cout<<fixed<<showpoint<<setprecision(2);
    
    cout<<"Please enter an object's mass in kg"<<endl;
    cin>>mass;
    cout<<"Please enter an objects velocity in mps"<<endl;
    cin>>vel;
    kinE(mass,vel);
               
                con();
                break;
            }
        
        
        case 9:
        {
            cout<<" Program 7"<<endl;
            con();
            
            float celcius;
    cout<<fixed<<showpoint<<setprecision(2);
    
    for(int fahrenheit = START_FAH; fahrenheit <= END_FAH; fahrenheit ++) //fahrenheit conversion to celcius incremented by 20
    {
        celcius=cvs(fahrenheit);
        cout<<fahrenheit<<" Fahrenheit"<<" = "<<celcius<<" Celcius"<<endl;
    }
            
            con();
            break;
        }
        
            case 10:
            {
                cout<<"Problem 15"<<endl;
                con();
                
                //Declare Variables
    float n; //New population size
    float p; //Previous population size
    float b; //Birth Rate
    float d; //Death Rate
    unsigned short yr; //Number of years to display
    
    cout << "What is the starting size of a population?" << endl;
    cin >> p;
    //Using while loop for validation
    while(p<2){
        cout << "Invalid Entry. The starting size has to be more than 2." <<endl;
        cin >> p;
    }
    cout << "What is the annual birth rate?" << endl;
    cin >> b;
    while(b<0){
        cout << "Invalid Entry. Please enter a positive birth rate." << endl;
        cin >> b;
    }
    cout << "What is the annual death rate?" << endl;
    cin >> d;
    while(d<0){
        cout << "Invalid Entry. Please enter a positive death rate." << endl;
        cin >> d;
    }
    cout << "What is the number of years to display?" << endl;
    cin >> yr;
    while(yr<1){
        cout << "Invalid Entry. Please enter more than 1 year." << endl;
        cin >> yr;
    }
    
    //Display Result
    cout << "Starting Population" << setw(15) << "Birth Rate" << setw(15)
         << "Death Rate" << setw(20) << "Number of Years" << setw(18)
         << "New Population" << endl;
    for (int i=0; i<=85; i++){
        cout << "-";
    }cout << endl;
    for(int i=1; i<=yr; i++){
        cout << fixed << showpoint << setprecision(2);
        cout << setw(10) << p << setw(20) << b << setw(17) << d
             << setw(17) << i << setw(17) << population(p, b, d) << endl;
        p = p + b*CVS*p - d*CVS*p;
    }
                
                
                 con();
                 break;
            }

            }

                
        

    
    
   }while(choice);
    cout<<"Ending program"<<endl;

    return 0;
}


void con(){
    cout<<"Press Enter to continue...";
    cin.ignore();
}

float calculatedRetail (float cost, float markUp) //function of calculatedRetail
{
return (cost*markUp)+cost; //calculate retail price/markUP % and return value to main fuction
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
{ //findLowest function determines the lowest value through the use of if statements
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

float getSpools(float &ordered, float &stock, float &charges)
{
     char specialChargeYN;
     
     cout << "The number of spools ordered: "; //user is asked how many spools of copper are ordered
     cin >> ordered;
     
     while (ordered < 1)
           {
                    cout << "\n\nInvalid Input.\n\n\nEnter a number higher than 1: ";
                    cin >> ordered; //input validation, the number of spools must exceed 1
           }
           
     cout << "\n\nThe number of spools in stock: "; //stock holds the number of spools the company has in stock
     cin >> stock;
     
     while (stock < 0)
           {
                    cout << "\n\nInvalid Input.\n\n\nEnter a number higher than 0: ";
                    cin >> stock; //input validation, the stocked spools must exceed 0
           }
           
     cout << "\n\nAny special shipping and handling (Y/N)? ";
     cin >> specialChargeYN; //option given by book, gives the user an option to decided whether
                            //the order has a special charges or not
     
     if ((specialChargeYN == 'Y') || (specialChargeYN == 'y'))
        {
                    cout << "\n\nWhat are the special charges per spool? $";
                    cin >> charges;
                    
                    while (charges <= 10)
                          {
                                  cout << "\n\nInvalid Input.\n\n\nEnter a number higher than 10: ";
                                  cin >> charges;
                                  
                                  charges;
                          }
        }
     else
        {
                    charges = 10.00; //default arguement from book***
        }
}
void displayOrder(float ordered, float stock, float charges) //displayOrder function holds the following variables:
{ //shipping, perSpool, total cost and special charges
     float backOrder = 0, shipping, perSpool, totalCost, specialCharges;
     
     cout << "\n\nThe number of spools ready to ship from stock: " << ordered; //ordered spools ready for shipment
     
     if (ordered > stock)
        {
                 backOrder = abs(stock - ordered); //in stock is subtracted by the number of spool that user ordered
                 
                 cout << "\n\nThe number of ordered spools on back order: " << backOrder;
        }
        
        cout << fixed << showpoint << setprecision(2);
        
        shipping = ordered - backOrder;
        
        perSpool = shipping * 100.00; //perSpool is calculted by shiping x $100.00 **copied from book
        
     cout << "\n\nThe total selling price of the portion ready to ship $" << perSpool;
     
        specialCharges = shipping * charges; //special charges calculations
     
     cout << "\n\nThe total shipping and handling charges on the portion ready to ship $" << specialCharges;
     
        totalCost = perSpool + specialCharges; //total charges calculation
        
     cout << "\n\nThe total of the order ready to ship $" << totalCost; //totalcost calculated and is given
     
       
}

bool IsPrime(int number)
{	
int i; //holds i

for (i=2; i<number; i++) //for-loop statement to determine if number is a prime or non-prime
{
if (number % i == 0)
{
return false; //is not prime
}
}

return true;	//is a prime
}

void acciN (float &n,float &s,float &e,float &w, float &c)
{
    cout<<"Enter the number of accidents"<<endl;
    cin>>n>>s>>e>>w>>c;
}
    void display (float lw)
    {
        cout<<"The lowest accidents are: "<<lw<<endl;
    }
    
    float lowNum (float n1, float s2, float e3, float w4, float c5)
    {
        float low=n1; //if statement to compare the accident numbers from regions and gets the lowest number
        if(s2<low)low=s2;
        if(e3<low)low=e3;
        if(w4<low)low=w4;
        if(c5<low)low=c5;
        return low; //low is returned to the main function
    }

void cvs (float g, float t)
{
    float d; //looking for value of d, we multiplied 1/2 times g times t squared.
    d = 0.5*g*t*t;
  cout<<"The distance of falling object is: "<<d<< " meters"<<endl; //d is given after calculations
}

void kinE (float mass, float vel)
{
    float ke; //looking for the value if ke, equation is given by book, and calculation will take place
    ke=0.5*mass*vel*vel;
    cout<<"The kinetic energy of the object is: "<<ke<<endl; //ke is acquired through function's calculations
}

float cvs (int fahrenheit) //function holds the fahrenheit variable.
{
    return (static_cast<float>(fahrenheit)-32)*5/9; //calcultes the conversion between fahernheit to
}

float population(float p, float b, float d){
    
   
    return (p + b*CVS*p - d*CVS*p);
}