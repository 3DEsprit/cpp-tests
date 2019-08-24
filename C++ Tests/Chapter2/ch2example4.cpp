//
//  ch2example4.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/08/22.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>

int ch2example4() {
    const unsigned feet_per_yard {3};
    const unsigned inches_per_foot {12};
    
    double length {};
    unsigned int yards {};
    unsigned int feet {};
    unsigned int inches {};
    
    std::cout << "Enter a length in yeards as a decimal: ";
    std::cin >> length;
    
    // Get the lenght as yards feet and inches
    yards = static_cast<unsigned int>(length);
    feet = static_cast<unsigned int>((length - yards) * feet_per_yard);
    inches = static_cast<unsigned int>(length * feet_per_yard * inches_per_foot) % inches_per_foot;
    
    std::cout << length << " yards converted to "
        << yards << " yards "
        << feet << " feet "
    << inches << " inches. " << std::endl;
    
    return 0;
}
