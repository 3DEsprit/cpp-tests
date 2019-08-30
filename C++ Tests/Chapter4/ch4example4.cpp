//
//  ch4example4.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/08/30.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>
#include <iostream>

int ch4example4() {
    long number {};
    std::cout << "Enter an integer less than 2 billion: ";
    std::cin >> number;
    
    if(number % 2) {
        std::cout << "Your number is odd." << std::endl;
    } else {
        std::cout << "Your number is even." << std::endl;
    }
    return 0;
}
