//
//  main.cpp
//  M11C
//
//  Created by Angelina Kapiniaris on 11/12/20.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int size = 0;
    string string[5];
    
    cout << "How many strings do you want to create [up to 5]: ";
    cin >> size;
    cout << endl << "You will now enter " << size << " strings: \n" << endl;
    
    cin.ignore(1000, '\n');
    for (int i = 0; i < size; i++)
    {
        cout << "Enter string[" << i <<"]: ";
        getline(cin, string[i]);
    }

    cout << endl << "You entered the following strings: \n" << endl;
    
    for (int i = 0; i < size; i++)
    {
        cout << "string[" << i << "]: " << string[i] << endl;
    }
    
    return 0;
}
