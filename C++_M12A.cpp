//
//  main.cpp
//  M12A
//
//  Created by Angelina Kapiniaris on 11/17/20.
//

#include <iostream>
#include <cmath>
using namespace std;

int* powersOf2(int size);
void printArray(int* dynamicArray, int size);

int main()
{
    int size = 0;
    int* ptr;
    
    cout << "Enter the number of powers of two you want: ";
    cin >> size;
        
    ptr = powersOf2(size);
    printArray(ptr, size);
    
    delete[] ptr;
    ptr = nullptr;
    
    return 0;
}


int* powersOf2(int size)
{
    if (size >= 1)
    {
        int* dynamicArray = new int[size];
            
        for (int i = 0; i < size; i++)
        {
            dynamicArray[i] = pow(2, i);
        }
        
        return dynamicArray;
    }
    
    else
        cout << "Array does not exist!";
        return nullptr;
}


void printArray(int* dynamicArray, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << dynamicArray[i] << " ";
    }
    
    cout << endl;
}
