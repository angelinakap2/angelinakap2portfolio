//
//  main.cpp
//  M14B
//
//  Created by Angelina Kapiniaris on 12/1/20.
//

#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void speak() const = 0;
};

class Pig : public Animal
{
public:
    void speak() const
    {
        cout << "Oink!" << endl;
    }
};

class Horse : public Animal
{
public:
    void speak() const
    {
        cout << "Neigh!" << endl;
    }
};

void Speak3Times(const Animal& object);

int main()
{
    Pig p;
    Horse h;
    
    Speak3Times(p);
    Speak3Times(h);
    
    return 0;
}

void Speak3Times(const Animal& object)
{
    object.speak();
    object.speak();
    object.speak();
}
