//
//  main.cpp
//  M3A
//
//  Created by Angelina Kapiniaris on 9/15/20.
//  Copyright © 2020 Angelina Kapiniaris. All rights reserved.
//

#include <iostream>
using namespace std;

int main ()
{
    char userInput = 'Z';
    cout<< "Welcome to the auto-printer!\n";
    
    char repeat = 'y';
    while (repeat == 'y')
    {
    cout<< "Enter a character: ";
    cin>> userInput;
    
    int num = 0, i = 0;

    cout<< "How many times do you want to print '" << userInput << "'? \n";
    cin>> num;
        
        
    for (i = 0; i <= num-1; i++)
    {
        cout<< userInput;
    }
        cout<< endl << "Would you like to print something else? (y/n) \n";
    cin>> repeat;
    }
    
    cout<< "Thank you for using auto printer. Goodbye!\n";
    
    return 0;
}
