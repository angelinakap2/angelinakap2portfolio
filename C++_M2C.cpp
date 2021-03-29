//
//  main.cpp
//  M2C
//
//  Created by Angelina Kapiniaris on 9/10/20.
//  Copyright © 2020 Angelina Kapiniaris. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    int num1=0.0;
    int num2=0.0;
    int remainderWithout=0;
    int remainderModulus=0;
    double geoMean = 0.0;
    
    cout<<"Enter two integers, separated by a space: \n";
    cin>> num1 >>num2;
    
    remainderWithout = num1/num2;
    
    cout<<"The remainder of " <<num1<< " / " <<num2<< " is " << remainderWithout << endl;
    
    remainderModulus = num1%num2;
    
    cout<<"The remainder calculated by the predefined modulus operator % is "<< remainderModulus << endl;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    geoMean = sqrt(num1*num2);
    
    cout<<"The geometric mean of " <<num1<< " and " <<num2<< " is " <<geoMean<< endl;
    
    return 0;
}
