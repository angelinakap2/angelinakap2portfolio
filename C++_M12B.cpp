//
//  main.cpp
//  M12B
//
//  Created by Angelina Kapiniaris on 11/17/20.
//

#include <iostream>
using namespace std;

class Container
{
public:
    Container();
    Container(int data);
    int getPointer();
    void setPointer(int newPointer);
    
private:
    int* pointer;
};

int main()
{
    Container def;
    Container custom(22);

    cout << "Trying to access value in default container..." << def.getPointer() << endl;
    cout << "Setting value of 5 in default container..." << endl;
    def.setPointer(5);
    cout << "Value stored in default container is " << def.getPointer() << endl;
    cout << "Trying to access value in custom container..." << custom.getPointer() << endl;
    cout << "Setting value of -1 in custom container..." << endl;
    custom.setPointer(-1);
    cout << "Value stored in custom container is " << custom.getPointer() << endl;
    
    return 0;
}


Container::Container()
        :pointer(nullptr)
{
    
}

Container::Container(int data)
{
    pointer = new int(data);
}

int Container::getPointer()
{
    if (pointer == nullptr)
        return 0;
    else
        return *pointer;
}

void Container::setPointer(int newPointer)
{
    if (pointer == nullptr)
        pointer = new int(newPointer);
    else
        *pointer = newPointer;
}
