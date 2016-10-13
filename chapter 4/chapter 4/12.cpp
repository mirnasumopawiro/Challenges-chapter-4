//
//  12.cpp
//  chapter 4
//
//  Created by Mirna Sumopawiro on 10/13/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//

#include <iostream>
using namespace std;

int main ()
{
    cout << "How much was sold?\n";
    int amount;
    int pay; // 100 - discount
    int totalcost;
    cin >> amount;
    int singlePrice = 99;
    int packagePrice;
    
    packagePrice = amount * singlePrice;
    
    if (amount <10){
        pay = 100-0; //no discount
    }
    else if (amount >= 10 && amount <= 19)
    {
        pay = 100-20;
    }
    else if (amount >= 20 && amount <= 49)
    {
        pay = 100-30;
    }
    else if (amount >= 50 && amount <= 99)
    {
        pay = 100-60;
    }
    else if (amount >= 100)
    {
        pay = 100-50;
    }
    else
        cout << "Please input a number greater than 0";
    
    totalcost = packagePrice * pay / 100;
    
    cout << "Total cost of purchase is $" << totalcost << endl;

    return 0;
}