//
//  16.cpp
//  chapter 4
//
//  Created by Mirna Sumopawiro on 10/14/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    float time1;
    float time2;
    float time3;
    string name1;
    string name2;
    string name3;
    
    cout << "Enter the name of the first runner: ";
    cin >> name1;
    cout << "Enter the time lapse of the first runner: ";
    cin >> time1;
    cout << "Enter the name of the second runner: ";
    cin >> name2;
    cout << "Enter the time lapse of the second runner: ";
    cin >> time2;
    cout << "Enter the name of the third runner: ";
    cin >> name3;
    cout << "Enter the time lapse of the third runner: ";
    cin >> time3;
    
    if (time1 <= time2)
    {
        if (time1 <= time3)
        {
            cout << "First place: " << name1 << "\t\t" << time1 << endl;
        }
        if (time2 <= time3)
        {
            cout << "Second place: " << name2 << "\t\t" << time2 << endl;
            cout << "Third place: " << name3 << "\t\t" << time3 << endl;
        }
        else
        {
            cout << "Second place: " << name3 << "\t\t" << time3 << endl;
            cout << "Third place: " << name2 << "\t\t" << time2 << endl;
        }
    }
    else if (time2 <= time1)
    {
        if (time2 <= time3)
        {
            cout << "First place: " << name2 << "\t\t" << time2 << endl;
        }
        if (time1 <= time3)
        {
            cout << "Second place: " << name1 << "\t\t" << time1 << endl;
            cout << "Third place: " << name3 << "\t\t" << time3 << endl;
        }
        else
        {
            cout << "Second place: " << name3 << "\t\t" << time3 << endl;
            cout << "Third place: " << name1 << "\t\t" << time1 << endl;
        }
    }
    else if (time3 <= time1)
    {
        if (time3 <= time2)
        {
            cout << "First place: " << name3 << "\t\t" << time3 << endl;
        }
        if (time1 <= time2)
        {
            cout << "Second place: " << name1 << "\t\t" << time1 << endl;
            cout << "Third place: " << name2 << "\t\t" << time2 << endl;
        }
        else
        {
            cout << "Second place: " << name2 << "\t\t" << time2 << endl;
            cout << "Third place: " << name1 << "\t\t" << time1 << endl;
        }
        
    }
    
    
    
    return 0;
    
    }