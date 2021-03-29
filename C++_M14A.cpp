//
//  main.cpp
//  M14A
//
//  Created by Angelina Kapiniaris on 12/1/20.
//

#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void speak() = 0;
};

class Pig : public Animal
{
public:
    void speak()
    {
        cout << "Oink!" << endl;
    }
};

class Horse : public Animal
{
public:
    void speak()
    {
        cout << "Neigh!" << endl;
    }
};


int main()
{
    Animal *a;
    Pig p;
    Horse h;
    
    a = &p;
    a -> speak();
    
    a = &h;
    a -> speak();
    
    return 0;
}
