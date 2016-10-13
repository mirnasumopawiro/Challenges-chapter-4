//
//  13.cpp
//  chapter 4
//
//  Created by Mirna Sumopawiro on 10/13/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    cout << "How many books have you purchased this month?\n";
    int amount;
    cin >> amount;
    
    if (amount == 0)
        cout << "You have earned 0 points\n";
    else if (amount == 1)
        cout << "You have earned 5 points\n";
    else if (amount == 2)
        cout << "You have earned 15 points\n";
    else if (amount == 3)
        cout << "You have earned 30 points\n";
    else if (amount >= 4)
        cout << "You have earned 60 points\n";
    else
        cout << "You have entered an incorrect number. Please try again\n";
    return 0;
}
