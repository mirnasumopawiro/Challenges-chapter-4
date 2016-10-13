//
//  main.cpp
//  chapter 4
//
//  Created by Mirna Sumopawiro on 10/13/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    int number1;
    int number2;
    
    cout << "Enter a number: \n";
    cin >> number1;
    cout << "Enter another number: \n";
    cin >> number2;
    
    if (number1 < number2)
    {
        cout << number1 << " is smaller than " << number2 << endl;
        cout << number2 << " is greater than " << number1 << endl;
    }
    else
    {
        cout << number2 << " is smaller than " << number1 << endl;
        cout << number1 << " is greater than " << number2 << endl;
    }
    
    return 0;
}
