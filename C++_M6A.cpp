//
//  main.cpp
//  M6A
//
//  Created by Angelina Kapiniaris on 10/6/20.
//

#include <iostream>
using namespace std;

int SumOfHoles(int n);

int main()
{
    char repeat = 'y';
    while (repeat == 'y')
    {
        int n;
        cout << "Enter a number: ";
        cin >> n;
    
        cout << "The sum of the holes is: " << SumOfHoles(n) << endl;
        
        cout << "Would you like to try again? ";
        cin >> repeat;
    }
    
    cout << "Thank you for using the program." << endl;
    return 0;
}

int SumOfHoles(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int holes = 0;
    int temp = n;
    
        while (n > 0)
        {
            int remainder = n % 10;
            n /= 10;
            if (remainder == 8)
            {
                holes += 2;
            }
            else if (remainder == 0 || remainder == 4 || remainder == 6 || remainder == 9)
            {
                holes += 1;
            }
            else
            {
                holes += 0;
            }
        }
    
    return holes + SumOfHoles(temp - 1);
}
