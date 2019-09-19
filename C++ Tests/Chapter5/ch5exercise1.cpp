//
//  ch5exercise1.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/09/18.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>

int ch5exercise1() {
    unsigned short limit {};
    // prompt for limit
    std::cout << "Enter highest number in a range (max 10000): ";
    std::cin >> limit;
    
    if(limit > 10000 || limit < 1) {
        return 0;
    }
    
    // write output of squares of odd integers from 1 to limit
    for(int i{}; i < limit; ++i) {
        if(i % 2 != 0) {
            std::cout << i << ":" << (i * i) << " ";
        }
    }
    
    return 0;
}
