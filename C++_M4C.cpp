//
//  main.cpp
//  M4C2
//
//  Created by Angelina Kapiniaris on 9/24/20.
//

#include <iostream>
#include <cmath>
using namespace std;

double areaNsidedPolygon(double s, double n);

int main ()
{
    double s = 0;
    double n = 0;
    
    char repeat = 'y';
    while (repeat == 'y')
    {
    cout << "Enter number of sides (at least 3): ";
    cin >> n;
        if (n < 3)
        {
            cout << "Reminder: the number of sides must be at least 3! \n";
            continue;
        }
        do
        {
    cout << "Enter length of any side (a positive length): ";
    cin >> s;
        if (s < 0)
        {
            cout << "Reminder: the length of the side must be positive! \n";
            continue;
        }
        } while (s < 0);
        
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(3);
    cout << "The area of the polygon is " << areaNsidedPolygon(s, n) << endl;
    cout << "Calculate the area of another polygon (y/n)? ";
        cin >> repeat;
    }
    cout << "Goodbye! \n";
    
}

double areaNsidedPolygon(double s, double n)
{
    float x = 3.14159/n;
    double Area = (((s*s)*n)/4) *1/tan(x);
    
    return Area;
}
