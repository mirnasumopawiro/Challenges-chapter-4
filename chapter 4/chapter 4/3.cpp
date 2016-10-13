//
//  3.cpp
//  chapter 4
//
//  Created by Mirna Sumopawiro on 10/13/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    int date;
    int month;
    int year;
    
    cout << "Use numeric forms in all sections\n";
    cout << "Enter a date: ";
    cin >> date;
    cout << "Enter a month: ";
    cin >> month;
    cout << "Enter the last two digits of a certain year: ";
    cin >> year;
    
    
    if (year == date * month)
    {
        cout << "\t\t" << "*** IT'S A MAGIC DATE! ***\n";
    }
    else
    {
        cout << "\t\t" << "--- It's not a magic date :( ---\n";
    }
    
    return 0;
}
