//
//  14.cpp
//  chapter 4
//
//  Created by Mirna Sumopawiro on 10/13/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int firstBalance;
    int checkAmount;
    int bankCharge = 10;
    int addCharge = 15;
    double plusCharge;
    double totalCharge;
    bool checkCharge;
    
    
    cout << "What is your beginning balance?\n";
    cin >> firstBalance;
    cout << "How many checks were written?\n";
    cin >> checkAmount;
    
    if (checkAmount < 20)
        plusCharge = 0.10;
    else if (checkAmount >= 20 && checkAmount <= 39)
        plusCharge = 0.08;
    else if (checkAmount >= 40 && checkAmount <= 59)
        plusCharge = 0.06;
    else if (checkAmount >= 60)
        plusCharge = 0.04;
    
    if (firstBalance < 400)
    {
        checkCharge = true;
        checkCharge = addCharge;
    }
    else
        checkCharge = false;
    
    totalCharge = firstBalance + bankCharge + plusCharge + addCharge;
    
    cout << "The total service charge is $ " << totalCharge << endl;
    return 0;
}