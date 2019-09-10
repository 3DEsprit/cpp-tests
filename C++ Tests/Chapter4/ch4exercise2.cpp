//
//  ch4exercise2.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/09/03.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>

int ch4exercise2() {
    int int_one, int_two;

    // prompt for two integers
    std::cout << "Enter two integers: ";
    std::cin >> int_one >> int_two;
    
    std::cout << "Integer ";
    // negative and zero rejected
    if(int_one > 0 || int_two > 0) {
        // check whether one of the numbers
        // is an exact multiple of the other
        // e.g. 63 is multiple of 1,3,7,9,21,63
        // shouldnt matter if first number is largest
        if(int_one < int_two) {
            std::cout << int_one;
            
            if(int_two % int_one == 0) {
                std::cout << " is a multiple of " << int_two << std::endl;
            } else {
                std::cout << " is not a multiple of " << int_two << std::endl;
            }
        } else {
            std::cout << int_two;
            
            if(int_one % int_two == 0) {
                std::cout << " is a multiple of " << int_one << std::endl;
            } else {
                std::cout << " is not a multiple of " << int_one << std::endl;
            }
        }
    } else {
        std::cout << "Integers should be positive and greater than zero." << std::endl;
    }
    
    return 0;
}
