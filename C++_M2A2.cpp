//
//  main.cpp
//  M2A
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
    int sum = 0;
    double avg = 0.0;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    sum = a + b + c + d + e + f;
    
    avg = (a + b + c + d + e + f)/6;
 
    cout<< "The six integers are: a, b, d, d, e, & f" << endl;
    
    cout<< "The sum of the integers is: " <<sum<< endl;
    
    cout<< "The average of the integers is: " <<avg<< endl;
    
    return 0;
}
