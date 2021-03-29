//
//  main.cpp
//  M9C
//
//  Created by Angelina Kapiniaris on 10/29/20.
//

#include <iostream>
using namespace std;


class Strict
{
    
public:
    Strict();
    Strict(int num);
    int getNum() const;
    
private:
    int num;
    
};


int main()
{
    int num = 0;
    char repeat = 'y';
    
    Strict def;
    def.getNum();
    cout << "Default Strict object num value is " << num << endl;
    
    while (repeat == 'y')
    {
        cout << "Enter a new value for num: ";
        cin >> num;
    
        Strict custom;
        custom = Strict(num);
        custom.getNum();
    
        
        
        cout << "Try a new num (y/n)? ";
        cin >> repeat;
    }
    
    return 0;
}


Strict::Strict()
    :num(0)
{
    
}


Strict::Strict(int num)
    :num(num)
{
    if (num % 2 == 0)
    {
        num = num;
        cout << "Custom Strict object num value is " << num << endl;
    }
    else
    {
        num = 0;
        cout << "EVEN numbers ONLY!!! >:( \n";
        cout << "Custom Strict object num value is " << num << endl;
    }
}


int Strict::getNum() const
{
    return num;
}
