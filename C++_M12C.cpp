//
//  main.cpp
//  M12C
//
//  Created by Angelina Kapiniaris on 11/19/20.
//

#include <iostream>
using namespace std;

int* getPositives(int arr[], int size);
void printArray(int arr[], int size);
void printArray(int *arr);

int main()
{
    int size = 10;
    int arr[] = {-32, 66, 1, 5, 0, 7, -4, -1, 3, 9, -1};
    
    cout << "Input array: " << endl;
    printArray(arr, size);
    
    cout << "Positive numbers: " << endl;
    int *ptr = getPositives(arr, size);
    printArray(ptr);
    
    return 0;
}

int* getPositives(int arr[], int size)
{
    int counter = 0;
    int *ptr = new int[size];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= 0)
        {
            ptr[counter] = arr[i];
            counter++;
        }
    }
    ptr[counter] = -1;
    return ptr;
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void printArray(int *arr)
{
    int i = 0;
    while (arr[i] != -1)
    {
        cout << arr[i] << " ";
        i++;
    }
    cout << endl;
}
