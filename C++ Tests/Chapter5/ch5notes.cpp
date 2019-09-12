//
//  ch5notes.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/09/12.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>
#include <array>

int ch5notes() {
    // initialize array
    double temperatures[366];
    // initialize with set amount of elements C-like
    double testArray[] { 12, 23, 34, 45, 56 };
    
    // obtain array size
    std::cout << "Array Size: " << std::size(testArray) << std::endl;
    
    // copy array
    double rain[12] { 1.1, 2.8, 3.4, 3.7, 2.1, 2.3, 1.8, 0.0, 0.3, 0.9, 0.7, 0.5 };
    double copy[12];
    
    for(size_t i {}; i < 12; ++i) {
        copy[i] = rain[i];
        std::cout << copy[i] << std::endl;
    }

    // constant array size
    const size_t size { 12 };
    double rainfall[12] { 1.1, 2.8, 3.4, 3.7, 2.1, 2.3, 1.8, 0.0, 0.3, 0.9, 0.7, 0.5 };
    double copyrain[size] {};
    
    for(size_t i {}; i < size; ++ i) {
        copyrain[i] = rainfall[i];
    }
    
 
    return 0;
}
