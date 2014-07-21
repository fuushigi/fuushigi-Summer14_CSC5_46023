/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on July 21, 2014, 1:04 PM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    ofstream outputFile;
    string name1;
    
    outputFile.open("NAMES.txt");
    
    cout<<"Enter name.\n";
    cout<<"Contestant: ";
    cin>>name1;
    
    outputFile<<name1<<endl;
    
    outputFile.close();
    
    

    return 0;
}

