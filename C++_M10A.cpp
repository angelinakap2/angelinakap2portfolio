//
//  main.cpp
//  M10A
//
//  Created by Angelina Kapiniaris on 11/3/20.
//

#include <iostream>
using namespace std;

class Grade
{
public:
    Grade();
    Grade(double percentage);
    void print();
    
    bool operator < (const Grade &grade)
    {
        if (percentage < grade.percentage)
            return true;
        else
            return false;
    }
    
    bool operator == (const Grade &grade)
    {
        if (percentage == grade.percentage)
            return true;
        else
            return false;
    }

private:
    double percentage;
    char letterGrade;
};



int main()
{
    cout << "Default grade: \n";
    Grade g0;
    cout << "g0: ";
    g0.print();
    
    cout << "Other grades in the class: \n";
    
    Grade g1(74.5);
    cout << "g1: ";
    g1.print();
    Grade g2(92.3);
    cout << "g2: ";
    g2.print();
    Grade g3(100);
    cout << "g3: ";
    g3.print();
    Grade g4(100);
    cout << "g4: ";
    g4.print();
    
    cout << "comparing g1 to g2..." << endl;
    if (g1 < g2)
        cout << "g1 is less than g2" << endl;
    else
        cout << "g2 is less than g1" << endl;
    
    cout << "comparing g3 to g4..." << endl;
    if (g3 == g4)
        cout << "g3 is the same as g4" << endl;
    else
        cout << "g3 is not the same as g4" << endl;
    
    return 0;
}

Grade::Grade()
:percentage(0), letterGrade('E')
{
    
}

Grade::Grade(double percentage)
    :percentage(percentage)
{
    if (percentage >= 0 && percentage < 60)
        letterGrade = 'E';
    else if (percentage >= 60 && percentage < 70)
        letterGrade = 'D';
    else if (percentage >= 70 && percentage < 80)
        letterGrade = 'C';
    else if (percentage >= 80 && percentage < 90)
        letterGrade = 'B';
    else if (percentage >= 90 && percentage <= 100)
        letterGrade = 'A';
}

void Grade::print()
{
    cout << percentage << "%, " << letterGrade << endl;
}
