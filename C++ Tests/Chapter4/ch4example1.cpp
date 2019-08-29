//
//  ch4example1.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/08/28.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>

int ch4example1() {
    char first {};
    char second {};
    
    std::cout << "Enter a character: ";
    std::cin >> first;
    
    std::cout << "Enter a second character: ";
    std::cin >> second;
    
    std::cout << "The value of the expression " << first << "<" << second << " is: " << (first < second) << std::endl;
    
    std::cout << std::boolalpha;
    std::cout << "The value of the expression " << first << "==" << second << " is: " << (first == second) << std::endl;
 
    return 0;
}
