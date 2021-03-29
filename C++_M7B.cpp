//
//  main.cpp
//  M7B
//
//  Created by Angelina Kapiniaris on 10/13/20.
//

#include <iostream>
using namespace std;

void fill(int arr[], int size);
void print(int arr[], int size);
double mean(int arr[], double size);
int range(int arr[], int size);

int main()
{
    int size = 0;
    int arr[25];
    
    cout << "How many elements in your array [up to 25]: ";
    cin >> size;
    cout << "Enter " << size << " integers separated by spaces: \n";
    
    fill(arr, size);
    print(arr, size);
    
    cout << "The mean of your array is " << mean(arr, size) << endl;
    cout << "The range of your array is " << range(arr, size) << endl;
    
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

double mean(int arr[], double size)
{
    int store = 0;
    double mean = 0.0;
    for (int i = 0; i < size; i++)
    {
        store += arr[i];
    }
    mean = store/size;
    
    return mean;
}

int range(int arr[], int size)
{
    int min = arr[0];
    int max = arr[0];
    double range = 0;
    
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    
    range = max - min;
    
    return range;
}
