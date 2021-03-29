//
//  main.cpp
//  M7C
//
//  Created by Angelina Kapiniaris on 10/15/20.
//

#include <iostream>
using namespace std;

void fill(int arr[], int size);
void print(int arr[], int size);
void print(double arr3[], int size);
void average_arrays(int arr[], int arr2[], double arr3[], int size);

int main()
{
    int size = 0;
    int arr[25];
    int arr2[25];
    double arr3[25];
    
    cout << "How many elements in your array [up to 25]: ";
    cin >> size;
    cout << "Enter " << size << " integers separated by spaces: \n";
    
    fill(arr, size);
    print(arr, size);
    cout << "Enter " << size << " integers separated by spaces: \n";
    fill(arr2, size);
    average_arrays(arr, arr2, arr3, size);
    print(arr3, size);
    return 0;
    
}

void fill(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

}

void print(int arr[], int size)
{
    cout << "You entered: \n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

void average_arrays(int arr[], int arr2[], double arr3[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr3[i] = (arr[i] + arr2[i])/2.0;
    }
}

void print(double arr3[], int size)
{
   
    cout << "Your output array is \n";
    for (int i = 0; i < size; i++)
    {
        cout << arr3[i] << ' ';
    }
    cout << endl;
}
