//
//  main.cpp
//  M10B
//
//  Created by Angelina Kapiniaris on 11/3/20.
//

#include <iostream>
using namespace std;

class Monster
{
public:
    Monster();
    Monster(int healthPoint, int attackPower, int defensePower);
    int getAttackPower() const;
    
    void print() const;
    
    const Monster operator + (const Monster &object)
    {
        return Monster(healthPoint + object.healthPoint, attackPower + object.attackPower, defensePower + object.defensePower);
    }
    
   
private:
    int healthPoint;
    int attackPower;
    int defensePower;
};

class Character
{
public:
    Character();
    Character(int healthPoint, int attackPower, int defensePower);
    int getAttackPower() const;
    
    void print() const;
    
    bool operator < (const Monster &object)
    {
        if (attackPower > object.getAttackPower())
            return true;
        else
            return false;
    }
    
private:
    int healthPoint;
    int attackPower;
    int defensePower;
};

int main()
{
    Monster object1(50, 7, 10), object2(100, 14, 20), combined(object1 + object2);
    
    cout << "Small slime information: \n";
    object1.print();
    
    cout << "Big slime information: \n";
    object2.print();
    
    cout << "If both slimes are combined, it becomes... \n";
    combined.print();
    
    Character info(100, 24, 30);
    cout << "Character information \n";
    info.print();
    
    if (info.getAttackPower() > combined.getAttackPower())
        cout << "The character has a stronger attack power than both of the slimes combined! \n";
    else
        cout << "The slimes combined have a stronger attack power then the character! \n";
    
        return 0;
}

Monster::Monster()
    :healthPoint(0), attackPower(0), defensePower(0)
{
    
}

Monster::Monster(int healthPoint, int attackPower, int defensePower)
    :healthPoint(healthPoint), attackPower(attackPower), defensePower(defensePower)
{
    
}

Character::Character()
    :healthPoint(0), attackPower(0), defensePower(0)
{
    
}

Character::Character(int healthPoint, int attackPower, int defensePower)
    :healthPoint(healthPoint), attackPower(attackPower), defensePower(defensePower)
{
    
}


int Monster::getAttackPower() const
{
    return attackPower;
}

int Character::getAttackPower() const
{
    return attackPower;
}


void Monster::print() const
{
    cout << "Health point - " << healthPoint << endl;
    cout << "Attack - " << attackPower << endl;
    cout << "Defense - " << defensePower << endl;
    
}

void Character::print() const
{
    cout << "Health Point - " << healthPoint << endl;
    cout << "Attack - " << attackPower << endl;
    cout << "Defense - " << defensePower << endl;
}
