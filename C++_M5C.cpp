//
//  main.cpp
//  M5C
//
//  Created by Angelina Kapiniaris on 10/1/20.
//

#include <iostream>
using namespace std;

void rotate(int& var1, int& var2, int& var3, int& var4, int& var5);
void PrintNums(int var1, int var2, int var3, int var4, int var5);

int main()
{
    int var1 = 1, var2 = 2, var3 = 3, var4 = 4, var5 = 5;
    PrintNums(var1, var2, var3, var4, var5);
    
    return 0;
}


void rotate(int& var1, int& var2, int& var3, int& var4, int& var5)
{
    int holder = 0;
    holder = var5;
    var5 = var4;
    var4 = var3;
    var3 = var2;
    var2 = var1;
    var1 = holder;
}

void PrintNums(int var1, int var2, int var3, int var4, int var5)
{
    cout << "Original numbers: \n";
    cout << "[ " << var1 << ", " << var2 << ", " << var3 << ", " << var4 << ", " << var5 << " ]" << endl;
    rotate(var1, var2, var3, var4, var5);
    cout << "After one rotation: \n";
    cout << "[ " << var1 << ", " << var2 << ", " << var3 << ", " << var4 << ", " << var5 << " ]" << endl;
    rotate(var1, var2, var3, var4, var5);
    cout << "After another rotation: \n";
    cout << "[ " << var1 << ", " << var2 << ", " << var3 << ", " << var4 << ", " << var5 << " ]" << endl;
}
