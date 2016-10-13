//
//  6.cpp
//  chapter 4
//
//  Created by Mirna Sumopawiro on 10/13/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    float weight;
    float mass;
    
    cout << "Enter the mass of an object in kilograms: ";
    cin >> mass;
    
    weight = mass * 9.8;
    
    if (weight > 1000)
    {
        cout << "Weight is " << weight << " newtons. Too heavy!\n";
    }
    else if (weight < 10)
    {
        cout << "Weight is " << weight << " newtons. Too light!\n";
    }
    else
    {
        cout << "Weight is " << weight << " newtons. Just right!\n";
    }
    
    return 0;
}
