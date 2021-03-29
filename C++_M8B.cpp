//
//  main.cpp
//  M8B
//
//  Created by Angelina Kapiniaris on 10/20/20.
//

#include <iostream>
#include <cmath>
using namespace std;

class Shape
{
public:
    // accessors
    int getNum();
    double getLength();
    
    // mutators
    void setNum(int newNum);
    void setLength(int newLength);
    
    double Area();
    double Perimeter();
    
private:
    int num;
    double length;
};


int main()
{
    int num = 0;
    int length = 0;
    
    Shape myShape;
    
    cout << "Enter the number of sides: ";
    cin >> num;
    cout << "Enter the length of sides: ";
    cin >> length;
    cout << "Your shape has " << num << " sides each with a length of " << length << endl;
    
    myShape.setNum(num);
    myShape.setLength(length);
    
    cout << "The area is " << myShape.Area() << endl;
    cout << "The perimeter is " << myShape.Perimeter() << endl;
    
    return 0;
}

void Shape::setNum(int newNum)
{
    num = newNum;
}

void Shape::setLength(int newLength)
{
    length = newLength;
}

double Shape::Area()
{
    double area = 0;
    double PI = 3.14159;
    area = (length*length*num)/(4*tan(PI/num));
    
    return area;
}

double Shape::Perimeter()
{
    double perimeter = 0;
    perimeter = num*length;
    
    return perimeter;
}
