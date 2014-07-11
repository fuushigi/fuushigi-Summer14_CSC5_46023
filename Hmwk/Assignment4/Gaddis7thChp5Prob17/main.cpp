/* 
 * File:   main.cpp
 * Author: Tracy Quintos
 * Created on July 10, 2014, 12:25 AM
 * Purpose: Homework Gaddis7thChp5Prob17
 * 
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
int main(int argc, char** argv) {

                //Sales 1-5 represents the each store sales
                //Whiles etting strings for '*' //1-5 (stores) to 0
    int         sales1=0,
		sales2=0,
		sales3=0,
		sales4=0,
		sales5=0,
		str1=0,
		str2=0,
		str3=0,
		str4=0,
		str5=0,
		row;


	cout<<"Please enter today's sales for five stores." << endl;

        cout<<"Enter sales for store # 1 : ";//entering sales
	cin>>sales1;

	cout<<"Enter sales for store # 2 : ";
	cin>>sales2;

	cout<<"Enter sales for store # 3 : ";
	cin>>sales3;

	cout<<"Enter sales for store # 4 : ";
	cin>>sales4;

	cout<<"Enter sales for store # 5 : ";
	cin>>sales5;


        //Copied chart example straight from book
	cout<<"Sales bar graph"<<endl;
	cout<<"(each * = $100)"<<endl;
        //Since each '*' represents $100 each, the sales given by user
        //will be divided by 100
	str1 = sales1/100;
	str2 = sales2/100; 
	str3 = sales3/100; 
	str4 = sales4/100; 
	str5 = sales5/100; 

	{ 
            //Each store's sales will be represented by '*'
            //for example if store # 1 had 500 sales 
            //*****'s will be represented
		if( (sales1 - str1*100 ) >= 50  )  //store # 1 sales
                                                   
			str1 = str1+1; 

		cout<<"Store # 1: "; 

		for ( row = 0; row < str1; row++) 
			cout << '*';   

		if( (sales2 - str2*100 ) >= 50  )  //store # 2 sales

			str2 = str2 + 1; 
		cout<<"Store # 2: "; 

		for ( row = 0; row < str2; row++)    
			cout << '*';   

		if( (sales3 - str3*100 ) >= 50  )  //store # 3 sales

			str3 = str3 + 1; 

		cout<<"Store # 3: ";

		for (int row = 0; row < str3; row++) 
			cout << '*';  

		if( (sales4 - str4*100 ) >= 50  ) //store # 4 sales

			str4 = str4 + 1; 

		cout<<"Store # 4: ";

		for (int row = 0; row < str4; row++)  

			cout << '*';  

		if( (sales5 - str5*100 ) >= 50  ) //store # 5 sales

			str5 = str5 + 1;  

		cout<<"Store # 5: "; 

		for (int row = 0; row < str5; row++)   

			cout << '*';
	}
	cout<<endl;

	//Exit stage right
        return 0;
}
   

