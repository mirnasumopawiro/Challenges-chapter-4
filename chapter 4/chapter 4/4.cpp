//
//  4.cpp
//  chapter 4
//
//  Created by Mirna Sumopawiro on 10/13/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    int length1;
    int length2;
    int width1;
    int width2;
    int area1;
    int area2;
    
    cout << "Enter the length of the first rectangle: ";
    cin >> length1;
    cout << "Enter the width of the first rectangle: ";
    cin >> width1;
    cout << "Enter the length of the second rectangle: ";
    cin >> length2;
    cout << "Enter the width of the second rectangle: ";
    cin >> width2;
    
    area1 = length1 * width1;
    area2 = length2 * width2;
    
    if (area1 > area2)
    {
        cout << "The first rectangle has a larger area\n";
    }
    else if (area2 > area1)
    {
        cout << "The second rectangle has a larger area\n";
    }
    else
    {
        cout << "Both rectangle have the same area\n";
    }
    
    return 0;
}
