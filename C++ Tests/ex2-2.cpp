//
//  ex2-2.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/08/20.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include "ex2-2.hpp"
#include <iostream>

using namespace std;

int ex2two()
{
    unsigned int yards {}, feet {}, inches {};
    
    // convert a distance in yards, feet, and inches to inches
    cout << "Enter a distance as yards, feet, and inches "
        << "with the three values separated by spaces: "
        << endl;
    
    cin >> yards >> feet >> inches;
    
    const unsigned feet_per_yard {3};
    const unsigned inches_per_foot {12};
    
    unsigned total_inches {};
    total_inches = inches + inches_per_foot * (yards * feet_per_yard + feet);
    cout << "The distances coreesponds to " << total_inches << " inches.\n";
    
    // convert a distance in inches to yards feet and inches
    cout << "Enter a distance in inches: ";
    cin >> total_inches;
    
    feet = total_inches / inches_per_foot;
    inches = total_inches % inches_per_foot;
    yards = feet / feet_per_yard;
    feet = feet % feet_per_yard;
    cout << "The distances corresponds to "
        << yards << " yards "
        << feet << " feet "
        << inches << " inches."
        << endl;
    
    return 0;
}
