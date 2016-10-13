//
//  8.cpp
//  chapter 4
//
//  Created by Mirna Sumopawiro on 10/13/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    string color1;
    string color2;
    
    cout << "Enter a primary color: ";
    cin >> color1;
    cout << "Enter another primary color and I will mix them: ";
    cin >> color2;
    
    if (color1 != "red" || color1 != "Red" || color1 != "blue" || color1 != "Blue" || color1 != "yellow" || color1 != "Yellow")
    {
        cout << "Error. You should enter a primary color (Red, blue or yellow)";
    }
    else
    {
        if (color1 == "red" || color1 == "Red")
        {
            if (color2 == "blue" || color2 == "Blue")
            {
                cout << "You get PURPLE!\n";
            }
            else if (color2 == "yellow" || color2 == "Yellow")
            {
                cout << "You get ORANGE!\n";
            }
            else
            {
                cout << "Error. You should enter a primary color (Red, blue or yellow)";
            }
        }
    
        if (color1 == "blue" || color1 == "Blue")
        {
            if (color2 == "red" || color2 == "Red")
            {
                cout << "You get PURPLE!\n";
            }
            else if (color2 == "yellow" || color2 == "Yellow")
            {
                cout << "You get GREEN!\n";
            }
            else
            {
                cout << "Error. You should enter a primary color (Red, blue or yellow)";
            }
        }
    
        if (color1 == "yellow" || color1 == "Yellow")
        {
            if (color2 == "blue" || color2 == "Blue")
            {
                cout << "You get GREEN!\n";
            }
            else if (color2 == "red" || color2 == "RED")
            {
                cout << "You get ORANGE!\n";
            }
            else
            {
                cout << "Error. You should enter a primary color (Red, blue or yellow)";
            }
        }

        }
        
        
    
    return 0;
}
