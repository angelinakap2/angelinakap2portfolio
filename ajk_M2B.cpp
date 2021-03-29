//
//  main.cpp
//  M2B
//
//  Created by Angelina Kapiniaris on 9/8/20.
//  Copyright © 2020 Angelina Kapiniaris. All rights reserved.
//

#include <iostream>
using namespace std;

int main ()
{
    double initialDistance = 0.0;
    double velocity = 0.0;
    double time = 0.0;
    double acceleration = 0.0;
    double finalDistance = 0.0;
    
    cout<<"What is the initial distance (in meter)?" << endl;
    cin>>initialDistance;
    
    cout<<"What is the initial velocity (in meter/second)?" << endl;
    cin>>velocity;
    
    cout<<"What is the time (in second)?" << endl;
    cin>>time;
    
    cout<<"What is the acceleration (in meter/second^2)?" << endl;
    cin>>acceleration;
    
    cout<<"Calculating the final distance..." << endl;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(4);
    
    finalDistance = initialDistance + ((velocity*time)+(0.5*acceleration*time*time));
    
    cout<<"The final distance: " <<finalDistance<< " meter(s)" << endl;
    
    return 0;
}
