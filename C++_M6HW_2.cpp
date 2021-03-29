//
//  main.cpp
//  M6HW_2
//
//  Created by Angelina Kapiniaris on 10/12/20.
//
/*
    This program calculates the value of PI based on the amount of summation terms given by the user. The greater amount of terms, the closer the accuracy to the actual value of PI.
 
 Pseudocode:
 1. Declare functions
 2. Declare variables
 3. Prompt user for amount of terms in main
 4. Call the PI calculation function
 5. The factorial function is called in the PI calculation function as it's included in the formula for PI
 6. The factorial calculation function takes the integer and returns the factorial, or 1
 7. PI value is returned
 8. Specify amount of decimals needed
 9. Display output in main
 10. Present option to repeat, and create repeat loop
 */

#include <iostream>
#include <cmath>
using namespace std;

// function prototypes
double calculateFactorial(int userInput);
double piValue(double userInput);

int main()
{
    // declare variables
    int userInput = 0;
    char repeat = 'y';
    
    while (repeat == 'y') // repeat loop
    {
        cout << "How many terms would you like to add? ";
        cin >> userInput; // prompt user for summation terms
        
        cout << "The value of PI with " << userInput << " terms is: ";
        
        cout << piValue(userInput) << endl; // call PI calculation function
        
        cout << endl;
        cout << "Want to calculate PI again (y/n)? ";
        cin >> repeat;
        cout << endl;
    }
    
    cout << "Thank you for using this program. Goodbye! \n";
    
    return 0;
}

double calculateFactorial(int userInput)
{
   if (userInput > 1)
   {
       return userInput*calculateFactorial(userInput - 1); // return factorial
   }
    else
        return 1; // return 1
}

double piValue(double userInput)
{
    double PI = 0;
    for (int i = 0; i < userInput; i++)
    {
        // call factorial function and include in formula
        PI += (pow(calculateFactorial(i), 2.0)*pow(2, i + 1))/calculateFactorial(2*i + 1); // add each term based on number of sums
    }
    
    // specify decimal places
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(12);
    
    return PI; // return PI value
}
