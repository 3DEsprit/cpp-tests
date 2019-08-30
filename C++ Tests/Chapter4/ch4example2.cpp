//
//  ch4example2.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/08/29.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>
#include <iostream>

int ch4example2() {
    std::cout << "Enter an integer between 50 annd 100: ";
    int value {};
    std::cin >> value;
    
    if(value)
        std::cout << "You have entered a value that is different from zero." << std::endl;
    
    if(value < 50) {
        std::cout << "The value is invalid - it is less than 50." << std::endl;
        return 0;
    }
    
    if(value > 100)
        std::cout << "You entered " << value << std::endl;
}
