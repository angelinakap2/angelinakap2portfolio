//
//  main.cpp
//  M8A
//
//  Created by Angelina Kapiniaris on 10/20/20.
//

#include <iostream>
using namespace std;

class Color
{
public:
    // accessors
    int getRed();
    int getGreen();
    int getBlue();
    
    // mutators
    void setRed(int newRed);
    void setGreen(int newGreen);
    void setBlue(int newBlue);
    
    void Display();
    
private:
    int red;
    int green;
    int blue;
};

int main()
{
    int red = 0;
    int blue = 0;
    int green = 0;
    Color myColor;
    
    cout << "Enter the Red, Green, and Blue values, separated by spaces [0 to 255]: ";
    cin >> red >> green >> blue;
    
    myColor.setRed(red);
    myColor.setGreen(green);
    myColor.setBlue(blue);
    myColor.Display();
    
    return 0;
}

// mutators
void Color::setRed(int newRed)
{
    red = newRed;
}

void Color::setGreen(int newGreen)
{
    green = newGreen;
}

void Color::setBlue(int newBlue)
{
    blue = newBlue;
}

void Color::Display()
{
    cout << "Red: " << red << endl;
    cout << "Green: " << green << endl;
    cout << "Blue: " << blue << endl;
}
