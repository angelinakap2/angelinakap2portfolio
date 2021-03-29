//
//  main.cpp
//  M3C
//
//  Created by Angelina Kapiniaris on 9/17/20.
//

#include <iostream>
using namespace std;

int main()
{
    char userChoice;
    
    cout << "Choose a special character (*, $, #): ";
    
    while ((userChoice = ('*' & '$' & '#')))
    {
    cin >> userChoice;

    if (userChoice == '*')
    {
        for (int row = 0; row < 7; row++)
        {
            for (int col = 0; col < 7; col++) // set up 5*5 matrix
            {
                if (row >= col)
                    cout << '*'; // print *
                else
                    cout << ' '; // print space
            }
            cout << endl;
        }
        for (int row = 6; row >= 0; row--)
        {
            for (int col = 0; col < 7; col++) // set up 5*5 matrix
            {
                if (row >= col)
                    cout << '*'; // print *
                else
                    cout << ' '; // print space
            }
            cout << endl;
        }
    }
    
    else if (userChoice == '$')
    {
        for (int row = 0; row < 14; row++)
        {
            for (int col = 0; col < 15; col++)  // set up 15*15 matrix
            {
                if (row < col && row + col <= 13)
                    cout << ' '; // print space
                else
                    cout << '$'; // print $
            }
            cout << endl;
        }
    }
    else if (userChoice == '#')
    {
        for (int row = 0; row <= 14; row++)
        {
            for (int col = 0; col <= 14; col++)  // set up 15*15 matrix
            {
                if (((row%2 == 1 || col%2 == 0) && (row%2 == 0 || col%2 == 1)) || row ==0 || row == 14 || col == 0 || col == 14)
                    cout << '#'; // print #
                else
                    cout << ' '; // print space
            }
            cout << endl;
        }
    }
        else if (userChoice != ('*' & '$' & '#')) // set up error
        {
            cout<< "Character MUST be *, $, or #! \n";
            cout<< "Choose again: ";
            continue;
        }
    }
        return 0;
}
