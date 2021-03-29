//
//  main.cpp
//  M9A
//
//  Created by Angelina Kapiniaris on 10/27/20.
//

#include <iostream>
using namespace std;

class Person
{
public:
    Person();
    Person(int age, int height, int weight);
    
    void print();
    
private:
    int age;
    int height;
    int weight;
};

int main()
{
    cout << "Personal Information \n";
    cout << "-------------------- \n";
    
    Person def;
    def.print();
    cout << endl;
    
    cout << "Personal Information \n";
    cout << "-------------------- \n";
    
    Person custom(18, 178, 57);
    custom.print();
    
    return 0;
}


Person::Person()
    :age(0), height(0), weight(0)
{
    
}


Person::Person(int age, int height, int weight)
    :age(age), height(height), weight(weight)
{
    
}


void Person::print()
{
    cout << "Age: " << age << " years old" << endl;
    cout << "Height: " << height << " cm" << endl;
    cout << "Weight: " << weight << " kg" << endl;
}
