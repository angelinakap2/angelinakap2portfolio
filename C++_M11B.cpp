//
//  main.cpp
//  M11B
//
//  Created by Angelina Kapiniaris on 11/10/20.
//

#include <iostream>
#include <cstring>
#include <string>
using namespace std;


int main()
{
    char cstring1[80];
    string string1;
    
    cout << "Enter a phrase: ";
    cin.getline(cstring1, 80);
    cout << "Enter a second phrase: ";
    getline(cin, string1);
    
    if (string1 == cstring1)
        cout << "The strings are the same! \n";
    else
        cout << "The strings are different! \n";
    
    char cstring2[80];
    cout << "Enter a third phrase: ";
    cin.getline(cstring2, 80);
    
    //cannot use strcat_s
    strcat(cstring1, cstring2);
    
    string string2;
    cout << "Enter a fourth phrase: ";
    getline(cin, string2);
    
    string result = cstring1 + string1 + string2;
    
    cout << "The concatenated string is: " << result << endl;
    
    return 0;
}
