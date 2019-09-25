//
//  ch6example1.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/09/21.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>
#include <iostream>

int ch6example1() {
    // show the size of a pointer versus the variable
    std::cout << sizeof(double) << " > " << sizeof(char) << std::endl;
    std::cout << sizeof(double*) << " == " << sizeof(char*) << std::endl;
    
    return 0;
}
