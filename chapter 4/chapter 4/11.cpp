//
//  11.cpp
//  chapter 4
//
//  Created by Mirna Sumopawiro on 10/13/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
    unsigned seed = time(0);
    srand (seed);
    
    int num1,
    num2,
    total,
    maxNum = 999,
    minNum = 100;
    
    num1 = (rand() % (maxNum - minNum + 1)) + minNum;
    num2 = (rand() % (maxNum - minNum + 1)) + minNum;
    
    cout << setw(5) << num1 << endl;
    cout << setw(5) << num2 << endl;
    cout << "+_____" << endl;
    cin >> total;
    
    if (total == num1+num2)
    {
        cout << "You are correct" << endl;
    }
    else
    {
        cout << "Wrong answer, the answer is: " << total << endl;
    }
    
    return 0;
}