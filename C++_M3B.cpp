//
//  main.cpp
//  M3B
//
//  Created by Angelina Kapiniaris on 9/15/20.
//  Copyright © 2020 Angelina Kapiniaris. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    cout<< "Welcome to the infinite geometric series calculator! \n";
    
    char repeat = 'y';
    while (repeat == 'y')
    {double a1 = 0.0, r = 0.0;
        cout << "Enter the vaules for a1 and r, separated by a space: ";
        cin >> a1 >> r ;
        
        if (r > -1 && r < 1)
        {
            cout.setf(ios::fixed);
            cout.setf(ios::showpoint);
            cout.precision(4);
            
            double convergeFormula = (a1 / (1 - r));
            cout<< "The series converges to a value of " << convergeFormula << endl;
        }
        else
        {
            cout << "The series does not converge!\n";
        }
        
        cout<< "Would you like to calculate another infinite geometric series? (y/n) ";
        cin>> repeat;
    }
    cout<< "Thank you for using the infinite geometric series calculator. Goodbye! \n";
    
    return 0;
}
