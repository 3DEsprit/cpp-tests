//
//  ch4exercise3.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/09/03.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>

int ch4exercise3() {
    float integer;
    
    // prompt for number (nonintegral allowed)
    // between 1 - 100
    std::cout << "Enter a number between 1 and 100: ";
    std::cin >> integer;
    
    std::cout << "Integer: " << integer << std::endl;
    // use nested if
    // verify number is within range
    if(integer >= 1 && integer <= 100) {
        
        std::cout << "Integer " << integer;
        // if is, determine if greater than,
        // less than, or equal to 50
        if(integer < static_cast<float>(50)) {
            std::cout << " is less than 50" << std::endl;
        } else if(integer == static_cast<float>(50)) {
            std::cout << " is equal to 50" << std::endl;
        } else {
            std::cout << " is greater than 50" << std::endl;
        }
        
    } else {
        std::cout << "Number is not within the allowed range." << std::endl;
    }
    
    return 0;
}
