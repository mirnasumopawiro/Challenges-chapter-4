//
//  5.cpp
//  chapter 4
//
//  Created by Mirna Sumopawiro on 10/13/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    
    float weight;
    float height;
    float bmi;
    const float MIN_BMI = 18.5;
    const float MAX_BMI = 25;
    
    cout << "Enter your weight in pounds: ";
    cin >> weight;
    cout << "Enter your height in inches: ";
    cin >> height;
    
    bmi = (weight * 703) / pow (height, 2);
    
    if (bmi >= MIN_BMI && bmi <= MAX_BMI)
    {
        cout << "Congratulations, you have optimal weight!\n";
    }
    else if (bmi < MIN_BMI)
    {
        cout << "Oh no! You're underweight.\n";
    }
    else
    {
        cout << "Oh no! You're overweight.\n";
    }
    
    return 0;
}
