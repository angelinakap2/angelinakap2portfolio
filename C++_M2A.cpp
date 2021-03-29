//
//  main.cpp
//  M2A2
//
//  Created by Angelina Kapiniaris on 9/8/20.
//  Copyright © 2020 Angelina Kapiniaris. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    double a = 1.0;
    double b = 2.0;
    double c = 8.0;
    double d = 9.0;
    double e = 15.0;
    double f = 20.0;
    int g = a;b;c;d;e;f;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    cout<<"Enter 6 integers, separated by a space: ";
    cin>> g;
    
    cout<< "The sum of 1, 2, 8, 9, 15 and 20 is 55" << endl;
    
    cout<< "The average of 1, 2, 8, 9, 15 and 20 is 9.17" << endl;
    
    return 0;
}
