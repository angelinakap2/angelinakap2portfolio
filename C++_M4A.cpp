//
//  main.cpp
//  M4A
//
//  Created by Angelina Kapiniaris on 9/22/20.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

char coinFlip();
double heads = 0;
double tails = 0;

int main ()
{
    srand ((unsigned)time(NULL));
    double amount = 0;
    cout << "How many times would you like to toss your coin? \n";
    cin >> amount;
    
    for (int i = 1; i <= amount; i++)
    {
        cout << i << ":     " << coinFlip() << endl;
    }
    double probability = (heads/(heads+tails)*100);
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    cout << "The probability of getting heads is: " << probability << "% \n";
}

char coinFlip()
{
    int headsorTails = ((rand() % 2) + 1);
    if (headsorTails == 1)
    {
        heads = heads + 1;
        return 'H';
    }
    else
    {
        tails = tails + 1;
        return 'T';
    }
}
