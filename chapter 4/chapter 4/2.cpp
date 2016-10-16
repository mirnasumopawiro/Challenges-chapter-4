//
//  2.cpp
//  chapter 4
//
//  Created by Mirna Sumopawiro on 10/13/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    int number;
    
    cout << "Enter a number from 1-10 and I will show you its Roman numeral: ";
    cin >> number;
    
    switch (number)
    {
        case (1): cout << "I\n";
            break;
        case (2): cout << "II\n";
            break;
        case (3): cout << "III\n";
            break;
        case (4): cout << "IV\n";
            break;
        case (5): cout << "V\n";
            break;
        case (6): cout << "VI\n";
            break;
        case (7): cout << "VII\n";
            break;
        case (8): cout << "VIII\n";
            break;
        case (9): cout << "IX\n";
            break;
        case (10): cout << "X\n";
            break;
        default: cout << "Error, you entered a wrong number.\n";
    }
    return 0;
}
