//
//  9.cpp
//  chapter 4
//
//  Created by Mirna Sumopawiro on 10/13/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    int totalPennies;
    int nickelInput;
    int totalNickel;
    int dimeInput;
    int totalDime;
    int quarterInput;
    int totalQuarter;
    int totalCents;
    
    cout << "Can you make exactly $1?\n";
    cout << "Enter number of penny: ";
    cin >> totalPennies;
    cout << "Enter number of nickel: ";
    cin >> nickelInput;
    cout << "Enter number of dime: ";
    cin >> dimeInput;
    cout << "Enter number of quarter: ";
    cin >> quarterInput;
    
    totalNickel = nickelInput * 5;
    totalDime = dimeInput * 10;
    totalQuarter = quarterInput * 25;
    totalCents = totalPennies + totalNickel + totalDime + totalQuarter;
    
    if (totalCents == 100)
    {
        cout << "Winner winner chicken dinner!\n";
    }
    else if (totalCents > 100)
    {
        cout << "Woops that's more than $1\n";
    }
    else
    {
        cout << "Woops that's less than $1\n";
    }
    
    
    return 0;
}
