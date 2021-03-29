//
//  main.cpp
//  M13A
//
//  Created by Angelina Kapiniaris on 11/24/20.
//

#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
    void setInfo(string _species, int _weight);
    void printInfo();
    
protected:
    string species;
    int weight;
};

class Pig : public Animal
{
public:
    void speak();
};

int main()
{
    Animal animal1;
    Pig pig1;
    
    animal1.setInfo("animal", 440);
    animal1.printInfo();
    
    pig1.setInfo("pig", 220);
    pig1.printInfo();
    pig1.speak();
    
    return 0;
}

void Animal::setInfo(string _species, int _weight)
{
    species = _species;
    weight = _weight;
}

void Pig::speak()
{
    cout << "Oink!" << endl;
}

void Animal::printInfo()
{
    cout << "species: " << species << endl;
    cout << "weight: " << weight << endl;
}
