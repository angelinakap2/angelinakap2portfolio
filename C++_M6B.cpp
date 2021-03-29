//
//  main.cpp
//  M6B
//
//  Created by Angelina Kapiniaris on 10/7/20.
//

#include <iostream>
using namespace std;

void printHex(int num);


int main()
{
    int n = 0;
    char repeat = 'y';

    cout << "Welcome to the hexadecimal number printer! \n";
    
    while (repeat == 'y')
    {
        cout << "What number do you want the hex representation of? ";
        cin >> n;
        printHex(n);
        cout << endl;
        cout << "Want to find the hex representation of another number (y/n)? ";
        cin >> repeat;
    }
    
    cout << "Thank you for using this program. Goodbye! \n";
    
    return 0;
}


void printHex(int n)
{
    int remainder = n % 16;
    
    if (n < 16)
    {
        cout << "The hex representation of 0 is 0x" << remainder;
    }
    
    else
    {
        printHex(n/16);
        if (remainder == 10)
            cout << 'A';
        else if (remainder == 11)
            cout << 'B';
        else if (remainder == 12)
            cout << 'C';
        else if (remainder == 13)
            cout << 'D';
        else if (remainder == 14)
            cout << 'E';
        else if (remainder == 15)
            cout << 'F';
        else
        cout << remainder;
    }
    
}
