//
//  25.cpp
//  chapter 4
//
//  Created by Mirna Sumopawiro on 10/14/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    char package;
    int minutes;
    int minutesPaid;
    float minuteBill;
    float totalBill;
    
    cout << "Choose a package (A/B/C): ";
    cin >> package;
    cout << "How many minutes were used? ";
    cin >> minutes;
    
    cout << setprecision(2) << fixed;
    if (package == 'a' || package == 'A')
    {
        if (minutes > 450)
        {
            minutesPaid = minutes - 450;
            minuteBill = minutesPaid * 0.45;
        }
        else
        {
            minuteBill = 0;
        }
        
        totalBill = 39.99 + minuteBill;
        cout << "The total amount is $" << totalBill << endl;
    }
    else if (package == 'b' || package == 'B')
    {
        if ( minutes > 900)
        {
            minutesPaid = minutes - 900;
            minuteBill = minutesPaid * 0.40;
        }
        else
        {
            minuteBill = 0;
        }
        totalBill = 59.99 + minuteBill;
        cout << "The total amount is $" << totalBill << endl;
    }
    else if (package == 'c' || package == 'C')
    {
        totalBill = 69.99;
        cout << "The total amount is $" << totalBill << endl;
    }
    else
    {
        cout << "You entered a wrong package. Enter A/B/C.";
    }
    
    return 0;
}
