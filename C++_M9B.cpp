//
//  main.cpp
//  M9B
//
//  Created by Angelina Kapiniaris on 10/27/20.
//

#include <iostream>
using namespace std;

class Data
{
public:
    Data();
    Data(int member, double member2, char member3);
    int getMember() const;
    int getMember2() const;
    int getMember3() const;
    
private:
    int member;
    double member2;
    char member3;
};


int main()
{
    Data def;
    def.getMember();
    def.getMember2();
    def.getMember3();
    
    cout << endl;
    cout << "After assigning anonymous object... \n";
    
    Data custom;
    custom = Data(15, -2.5, 'Z');
    custom.getMember();
    custom.getMember2();
    custom.getMember3();
    
    return 0;
}


Data::Data()
    :member(0), member2(0), member3('a')
{
    
}

Data::Data(int member, double member2, char member3)
    :member(member), member2(member2), member3(member3)
{
    
}

int Data::getMember() const
{
    cout << "intNum: " << member << endl;
    
    return 0;
}

int Data::getMember2() const
{
    cout << "floatNum: " << member2 << endl;
    
    return 0;
}

int Data::getMember3() const
{
    cout << "letter: " << member3 << endl;
    
    return 0;
}
