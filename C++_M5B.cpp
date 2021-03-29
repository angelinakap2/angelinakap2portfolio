//
//  main.cpp
//  M5B
//
//  Created by Angelina Kapiniaris on 9/29/20.
//

#include <iostream>
using namespace std;

//declare functions
void overloadMe(int count);
void overloadMe(double count);
void overloadMe(int count, double num);

int main()
{
    cout << "Result of overloadMe(2); \n";
    overloadMe(2);
    cout << "Result of overloadMe(2.71828); \n";
    overloadMe(2.71828);
    cout << "Result of overloadMe(3, 3.14159); \n";
    overloadMe(3, 3.14159);
}



void overloadMe(int count) // takes in int count
{
    while (count > 0)
    {
        cout << "Hello" << endl;
        count = count - 1; //prints "Hello" count times
    }
}

void overloadMe(double count)
{
    while (count > 0)
    {
        cout << "Hello, my favorite number is " << count << endl;
        break;
    }
    
}


void overloadMe(int count, double num) // takes in double num
{
    while (count > 0)
    {
    cout << "Hello, my favorite number is " << num << endl;
    count = count - 1;
    }
    
}
