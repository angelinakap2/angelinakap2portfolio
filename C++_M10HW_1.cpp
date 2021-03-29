//
//  main.cpp
//  M10_HW1
//
//  Created by Angelina Kapiniaris on 11/7/20.
//
/* This code can take in numerous inputs to perform artihmetic operations such as addition, multiplication, subtraction, and division based on the numbers entered (maximum of four). There is also an option to clear the calculator to start operations with a completely new set of values. */
/*
 Pseudocode:
 1. Create a class with the arithmetic functions (public) and public default constructor
 2. Declare the member variables under private
 3. Initialize public default constructor and the variables as 0
 4. Set up intro and user input
 5. Display case scenarios through switch
 6. Define input variable to take in no more than 4 values
 7. Ensure that there are at least 2 values for calculations
 8. Add each input to the array
 9. Define/declare each arithmetic operation function based on test case
 10. Define clear function body
 11. Provide a loop to quit with the option 'q'
 */

#include <iostream>
using namespace std;

// class
class Calculator
{
    // public member functions
public:
    Calculator();
    void addition();
    void subtraction();
    void multiplication();
    void division();
    void input(double num);
    void clear();
    
    // private member variables
private:
    double arr[4];
    int totalNumber;
    double answer;
};

int main()
{
    char choice = 'Z';
    double userInput;
    Calculator data;
    
    cout << "CALCULATOR \n";
    cout << "What would you like to do? \n";
    cout << endl;
    
    do
    {
        cout << "e) Enter number \n";
        cout << "a) Add \n";
        cout << "s) Subtract \n";
        cout << "m) Multiply \n";
        cout << "d) Divide \n";
        cout << "c) Clear calculator \n";
        cout << "q) Quit \n";
        cout << endl << "Choice: ";
        cin >> choice; // get user choice for case
        cout << endl;
        
        // provide case scenarios
        switch(choice)
        {
            case 'e':
                cout << "Enter a number into calculator: ";
                cin >> userInput; // get user value(s)
                cout << endl;
                data.input(userInput);
                break;
            case 'a':
                data.addition();
                break;
            case 's':
                data.subtraction();
                break;
            case 'm':
                data.multiplication();
                break;
            case 'd':
                data.division();
                break;
            case 'c':
                data.clear();
                break;
            case 'q':
                cout << "Quitting... Goodbye!!! \n";
                break;
            default:
                cout << "Invalid input. Try again! \n" << endl;
                break;
        }
    } while (choice != 'q'); // quit option loop
    
    return 0;
}

// initialize public default constructor
Calculator::Calculator()
        :arr{0}, totalNumber(0) //value of 0
{
    
}
// input member function
void Calculator::input(double num)
{
    // check for more than 4 values (invalid)
    if (totalNumber >= 4)
    {
        cout << "Failed to enter the current number! \n";
        cout << "No room left for a new number! \n";
        cout << endl;
    }
    else
    {
        //add value to array
        arr[totalNumber++] = num;
    }
}

void Calculator::addition()
{
    if (totalNumber < 2 && answer == 0) // check for at least 2 values stored (+)
    {
        cout << "Enter at least 2 numbers for calculation! \n" << endl;
    }
    else
    {
        if (answer == 0)
        {
            cout << arr[0];
            answer += arr[0]; // store first array element (+)
            for (int i = 1; i < totalNumber; i++)
            {
                cout << " + " << arr[i];
                answer += arr[i]; // perform addition
            }
            cout << " = " << answer << endl;
            cout << endl;
            totalNumber = 0; // reset total number
        }
        else
        {
            cout << answer;
            for (int i = 0; i < totalNumber; i++)
            {
                cout << " + " << arr[i];
                answer += arr[i]; // perform addition
            }
            cout << " = " << answer << endl;
            cout << endl;
            totalNumber = 0; // reset total number
        }
    }
}

void Calculator::subtraction()
{
    if (totalNumber < 2 && answer == 0) // check for at least 2 values stored (-)
    {
        cout << "Enter at least 2 numbers for calculation! \n" << endl;
    }
    else
    {
        if (answer == 0)
        {
            cout << arr[0];
            answer += arr[0]; // store first array element (-)
            for (int i = 1; i < totalNumber; i++)
            {
                cout << " - " << arr[i];
                answer -= arr[i]; // perform subtraction
            }
            cout << " = " << answer << endl;
            cout << endl;
            totalNumber = 0; // reset total number
        }
        else
        {
            cout << answer;
            for (int i = 0; i < totalNumber; i++)
            {
                cout << " - " << arr[i];
                answer -= arr[i]; // perform subtraction
            }
            cout << " = " << answer << endl;
            cout << endl;
            totalNumber = 0; // reset total number
        }
    }
}

void Calculator::multiplication()
{
    if (totalNumber < 2 && answer == 0) // check for at least 2 values stored (*)
    {
        cout << "Enter at least 2 numbers for calculation! \n" << endl;
    }
    else
    {
        if (answer == 0)
        {
            cout << arr[0];
            answer += arr[0]; // store first array element (*)
            for (int i = 1; i < totalNumber; i++)
            {
                cout << " * " << arr[i];
                answer *= arr[i]; // perform multiplication
            }
            cout << " = " << answer << endl;
            cout << endl;
            totalNumber = 0; // reset total number
        }
        else
        {
            cout << answer;
            for (int i = 0; i < totalNumber; i++)
            {
                cout << " * " << arr[i];
                answer *= arr[i]; // perform multiplication
            }
            cout << " = " << answer << endl;
            cout << endl;
            totalNumber = 0; // reset total number
        }
    }
}

void Calculator::division()
{
    if (totalNumber < 2 && answer == 0) // check for at least 2 values stored (/)
    {
        cout << "Enter at least 2 numbers for calculation! \n" << endl;
    }
    else
    {
        if (answer == 0)
        {
            cout << arr[0];
            answer += arr[0]; // store first array element (/)
            for (int i = 1; i < totalNumber; i++)
            {
                cout << " / " << arr[i];
                answer /= arr[i]; // perform division
            }
            cout << " = " << answer << endl;
            cout << endl;
            totalNumber = 0; // reset total number
        }
        else
        {
            cout << answer;
            for (int i = 0; i < totalNumber; i++)
            {
                cout << " / " << arr[i];
                answer /= arr[i]; // perform division
            }
            cout << " = " << answer << endl;
            cout << endl;
            totalNumber = 0; // reset total number
        }
    }
}

// clear option
void Calculator::clear()
{
    // set variables 0
    totalNumber = 0;
    answer = 0;
    
    cout << "All values are cleared!" << endl;
    cout << endl;
}
