//
//  ch4exercise1.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/09/03.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>
#include <iostream>

int ch4exercise1() {
    int int_one, int_two;
    
    // prompt for two integers
    std::cout << "Enter two integers: ";
    std::cin >> int_one >> int_two;
    
    // use if-else that states whether the integers
    // are the same
    std::cout << "Integers " << int_one << " and " << int_two << " are the ";
    if(int_one == int_two) {
        std::cout << "same." << std::endl;
    } else {
        std::cout << "different." << std::endl;
    }
    return 0;
}
