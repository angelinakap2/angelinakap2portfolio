//
//  main.cpp
//  M8C
//
//  Created by Angelina Kapiniaris on 10/22/20.
//

#include <iostream>
using namespace std;

class House
{
public:
    // accessors
    int getPrice();
    int getBeds();
    int getBaths();
    int getStories();
    
    // mutators
    void setPrice(int newPrice);
    void setBeds(int newBeds);
    void setBaths(int newBaths);
    void setStories(int newStories);
    
    void Display();
    
private:
    int price;
    int beds;
    int baths;
    int stories;
};

void printHouseArray(House myHouse[], int size);
double averageHousePrice(House myHouse[], int size);
int main()
{
    int size = 3;
    
    House myHouse[size];
    
    myHouse[0].setPrice(100000);
    myHouse[0].setBeds(1);
    myHouse[0].setBaths(1);
    myHouse[0].setStories(1);
  
    
    myHouse[1].setPrice(200000);
    myHouse[1].setBeds(3);
    myHouse[1].setBaths(2);
    myHouse[1].setStories(1);
 
    
    myHouse[2].setPrice(300000);
    myHouse[2].setBeds(5);
    myHouse[2].setBaths(3);
    myHouse[2].setStories(2);
    
    printHouseArray(myHouse, size);
    
    cout << "The average house price is $" << averageHousePrice(myHouse, size) << endl;
    
    return 0;
}

int House::getPrice()
{
    return price;
}
int House::getBeds()
{
    return beds;
}

int House::getBaths()
{
    return baths;
}

int House::getStories()
{
    return stories;
}
void House::setPrice(int newPrice)
{
    price = newPrice;
}

void House::setBeds(int newBeds)
{
    beds = newBeds;
}

void House::setBaths(int newBaths)
{
    baths = newBaths;
}

void House::setStories(int newStories)
{
    stories = newStories;
}

void House::Display()
{
    cout << "Price: $" << price << endl;
    cout << "Num Bedrooms: " << beds << endl;
    cout << "Num Bathrooms: " << baths << endl;
    cout << "Num Stories: " << stories << endl;
    cout << endl;
}

void printHouseArray(House myHouse[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "House " << i + 1 << endl;
        myHouse[i].Display();
    }
}


double averageHousePrice(House myHouse[], int size)
{
    double avgPrice = 0;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += myHouse[i].getPrice();
    }
    avgPrice = sum/size;
    
    return avgPrice;
}


