//
//  7.cpp
//  chapter 4
//
//  Created by Mirna Sumopawiro on 10/13/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    int seconds;
    int days;
    int hours;
    int minutes;
    
    cout << "Enter a number of seconds: ";
    cin >> seconds;
    
    if (seconds >= 86400)
    {
        days = seconds / 86400;
        cout << "There is/are " << days << " day/s in " << seconds << " seconds.\n";
    }
    else if (seconds >= 3600)
    {
        hours = seconds / 3600;
        cout << "There are " << hours << " hours in " << seconds << " seconds.\n";
    }
    else if (seconds >= 60)
    {
        minutes = seconds / 60;
        cout << "There are " << minutes << " minutes in " << seconds << " seconds.\n";
    }
    else
    {
        cout << "You entered " << seconds << " seconds.\n";
    }
    
    
    return 0;
}
