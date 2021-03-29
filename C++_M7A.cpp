//
//  main.cpp
//  M7A
//
//  Created by Angelina Kapiniaris on 10/13/20.
//

#include <iostream>
using namespace std;

int main()
{
    int size = 0;
    double arr[50];
    
    cout << "Enter array size (Max:50): ";
    cin >> size;
    
    for (int i = 0; i < size; i++)
    {
        cout << "Enter arr[" << i << "] element: ";
        cin >> arr[i];
        continue;
        
    }
    cout << endl;
    

    cout << "Stored Data in Array: \n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ' ';
    }
    
    cout << endl;
    
    cout << "Duplicate Values in Given Array are: \n";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] == arr[i])
            {
                cout << arr[j] << ' ';
            }
        }
    }
    
    cout << endl;
    return 0;
}
