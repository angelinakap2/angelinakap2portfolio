//
//  main.cpp
//  M13B
//
//  Created by Angelina Kapiniaris on 11/24/20.
//

#include <iostream>
using namespace std;

class SingleItem
{
public:
    SingleItem();
    SingleItem(double _price);
    void displayPrice();
    
protected:
    double price;
};

class MultipleItem : public SingleItem
{
public:
    MultipleItem();
    MultipleItem(double _price, double _quantity);
    void displayPrice();
private:
    int quantity;
};

int main()
{
    SingleItem single;
    MultipleItem multiple;
    
    single.displayPrice();
    multiple.displayPrice();
    
    multiple = MultipleItem(10.99, 1);
    multiple.displayPrice();
    
    multiple = MultipleItem(10.99, 7);
    multiple.displayPrice();
    
    return 0;
}


SingleItem::SingleItem()
        :price(1.99)
{}

SingleItem::SingleItem(double _price)
        :price(_price)
{}

void SingleItem::displayPrice()
{
    cout << "Cost for a single item: $" << price << endl;
}

MultipleItem::MultipleItem()
        :SingleItem(), quantity(2)
{}

MultipleItem::MultipleItem(double _price, double _quantity)
        :SingleItem(_price), quantity(_quantity)
{}

void MultipleItem::displayPrice()
{
    cout << "Cost for " << quantity << " item(s): $" << quantity * price << endl;
}
