//
//  main.cpp
//  M2D
//
//  Created by Angelina Kapiniaris on 9/10/20.
//  Copyright © 2020 Angelina Kapiniaris. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    long years=0, months=0, weeks=0, days=0, hours=0, minutes=0, seconds=0, totalSeconds=0;

    cout<<"Enter the years: \n";
    cin>> years;
    
    cout<<"Enter the months: \n";
    cin>> months;
    
    cout<<"Enter the weeks: \n";
    cin>> weeks;
    
    cout<<"Enter the days: \n";
    cin>> days;
    
    cout<<"Enter the hours: \n";
    cin>> hours;
    
    cout<<"Enter the minutes: \n";
    cin>> minutes;
    
    cout<<"Enter the seconds: \n";
    cin>> seconds;
    
    totalSeconds=(years*29030400)+(months*2419200)+(weeks*604800)+(days*86400)+(hours*3600)+(minutes*60) + seconds;
    
    cout<<"The total number of seconds elapsed is " <<totalSeconds<< " seconds. \n";
    
    return 0;
}
