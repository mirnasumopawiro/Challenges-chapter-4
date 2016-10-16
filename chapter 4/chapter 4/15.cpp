//
//  15.cpp
//  chapter 4
//
//  Created by Mirna Sumopawiro on 10/13/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    float weight;
    float distance;
    float calculatedDistance;
    float charge;
    
    cout << "How much does your package weigh? ";
    cin >> weight;
    cout << "How far will it be shipped? (miles): ";
    cin >> distance;
    
    
    if (weight <= 0)
    {
        cout << "Error";
    }
    else if (weight <= 2)
    {
        if (distance < 10)
        {
            cout << "We do not ship to destinations less than 10 miles\n";
            return 0;
        }
        else if (distance > 3000)
        {
            cout << "We do not ship to destinations further than 3000 miles\n";
            return 0;
        }
        else if (distance <= 500)
        {
            calculatedDistance = 1;
        }
        else
        {
            calculatedDistance = distance / 500;
        }
        
        charge = calculatedDistance * 1.10;
        
    }
    else if (weight > 2 && weight <= 6)
    {
        if (distance < 10)
        {
            cout << "We do not ship to destinations less than 10 miles\n";
            return 0;
        }
        else if (distance > 3000)
        {
            cout << "We do not ship to destinations further than 3000 miles\n";
            return 0;
        }
        else if (distance <= 500)
        {
            calculatedDistance = 1;
        }
        else
        {
            calculatedDistance = distance / 500;
        }
        
        charge = calculatedDistance * 2.20;
    }
    else if (weight > 6 && weight <= 10)
    {
        if (distance < 10)
        {
            cout << "We do not ship to destinations less than 10 miles\n";
            return 0;
        }
        else if (distance > 3000)
        {
            cout << "We do not ship to destinations further than 3000 miles\n";
            return 0;
        }
        else if (distance <= 500)
        {
            calculatedDistance = 1;
        }
        else
        {
            calculatedDistance = distance / 500;
        }
        
        charge = calculatedDistance * 3.70;
    }
    else if (weight > 10 && weight <= 20)
    {
        if (distance < 10)
        {
            cout << "We do not ship to destinations less than 10 miles\n";
            return 0;
        }
        else if (distance > 3000)
        {
            cout << "We do not ship to destinations further than 3000 miles\n";
            return 0;
        }
        else if (distance <= 500)
        {
            calculatedDistance = 1;
        }
        else
        {
            calculatedDistance = distance / 500;
        }
        
        charge = calculatedDistance * 4.80;
    }
    else
    {
        cout << "We do not ship packages weighing more than 20kg\n";
        return 0;
    }
    
    cout << setprecision(2) << fixed;
    cout << "The total shipping fee is $" << charge << endl;
    return 0;
}
