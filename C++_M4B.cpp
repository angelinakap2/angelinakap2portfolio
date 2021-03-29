//
//  main.cpp
//  M4B
//
//  Created by Angelina Kapiniaris on 9/22/20.
//

#include <iostream>
#include <cmath>
using namespace std;

double calcConeVolume(double height, double radius);

int main()
{
    double height = 0, radius = 0;
    cout << "Enter the height: ";
    cin >> height;
    cout << "Enter the radius: ";
    cin >> radius;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(4);
    
    cout << "The volume of the cone is: " << calcConeVolume(height, radius) << endl;
}

double calcConeVolume(double height, double radius)
{
    double volume;

    volume = (1.0/3.0)*(3.14159)*(radius)*(radius)*(height);
    
    return volume;
}
