//
//  main.cpp
//  M5A
//
//  Created by Angelina Kapiniaris on 9/29/20.
//

#include <iostream>
using namespace std;

void getInputs(double& floatNum, int& intNum, char& character);
void print(double floatNum , int intNum, char character);

// cout
int main()
{
    double floatNum;
    int intNum;
    char character;
    getInputs(floatNum, intNum, character);
    print(floatNum, intNum, character);
    
    return 0;
}
// void function getInputs()
void getInputs(double& floatNum, int& intNum, char& character)
{
    cout << "Enter a floating point number: ";
    cin >> floatNum;
    cout << "Enter an integer number: ";
    cin >> intNum;
    cout << "Enter a character: ";
    cin >> character;
}

// void function print()
void print(double floatNum , int intNum, char character)
{
    cout << "Entered floating number: " << floatNum << endl;
    cout << "Entered integer number: " << intNum << endl;
    cout << "Entered character: " << character << endl;
}
