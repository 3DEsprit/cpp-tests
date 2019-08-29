//
//  ch3exercise6.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/08/24.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>

int ch3exercise6() {
    int a {2};
    int b {3};
    
    // prompt for two integer values
    std::cout << "Enter two integers: ";
    // store as int values a and b
    std::cin >> a >> b;
    std::cout << "Starting with int 1: " << a << " int 2: " << b << std::endl;
    // swap the values without another variable
    a += b; // 5
    b = a - b; // 2
    a = a - b;

    // need one single compound assignment operator
//    a &= b;
    
    // output the swapped values
    cout << "int 1: " << a << std::endl;
    cout << "int 2: " << b << std::endl;

    return 0;
}
