/* 
 * File:   main.cpp
 * Author: Tracy Quintos
 * Created on July 7, 2014, 9:34 PM
 * Purpose: Homework Gaddis7thEdChp4Prob21
 */

//User Libraries
#include <iostream>
#include <cmath> //for math calculations
#include <iomanip>//for setprecision
using namespace std;

//User Libraries

//Global Constant

//Function Prototype

//Execution starts here!

int main(int argc, char** argv){
    
int selection;//Menu options 1-4
const float PI = 3.14159;//pi as constant
int radius, areaCircle,//area of a circle
length, width, areaRectangle,//area of a rectangle
base, height, areaTriangle; //area of a triangle
 {
//This displays the menu and it's options to choose from, user must choose 1 of 4
cout<<"1.Calculate the Area of a Circle"<<endl;
cout<<"2.Calculate the Area of a Rectangle"<<endl;
cout<<"3.Calculate the Area of a Triangle"<<endl;
cout<<"4.End Program"<<endl;
cout<<"Please enter 1-4 only: "<<endl;
cin>>selection;
cout<<fixed<<showpoint<<setprecision(4); //decimals will be fixed on 4th

//as stated above comments user is only allowed to choose options 1-4
if (selection < 1 || selection > 4) 
{
cout<<"You can only choose options 1 to 4";
}

//switch statement selections of the following and it's calculations
switch (selection)
{
case 1://area of a circle
cout<<"Area of a Circle"<<endl;
cout<<"Please enter radius: ";
cin>>radius;
if (radius < 0)
{
cout<<endl;
cout<<"Radius cannot be a negative.";
}
else
{
areaCircle = PI * pow(radius, 2.0);
cout<<"Area = "<<areaCircle<<" square units";
}
break;

case 2://area of a rectangle
cout<<endl;
cout<<"Area of a rectangle"<<endl;
cout<<"Please enter length: ";
cin>>length;
cout<<"Please enter width: ";
cin>>width;
if (length <= 0 || width <= 0)
{
cout<< endl;
cout<< "Length and width must be positive.";
}
else
{
areaRectangle = length * width;
cout<<"Area = " <<areaRectangle<<" square units";
}
break;

case 3://area of a triangle
cout<<endl;
cout<<"Area of a triangle"<<endl;
cout<<"Please enter base: ";
cin >>base;
cout<<"Please enter height: ";
cin>>height;
if (base <= 0 || height <= 0)
{
cout<<endl;
cout<<"Base and height must be positive.";


}
else
{
areaTriangle = base * height * 0.5;
cout<<"Area = "<<areaTriangle<<" square units";
}

case 4://Option 4 ends the program
cout << "Have a nice day."<<endl;

}
} while(selection != 4);

//Exit stage right
return 0;
}



