//
//  ch3exercise3.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/08/24.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>

int ch3exercise3() {
    // without running, work out what the following
    // code will produce as output
    
    auto k {430u}; // work out int to binary // 0100 0011 0000
    // 1 1010 1110
    std::cout << "k: " << std::bitset<12>(k >> 4) << endl;
    // move bits of k 4 bits right // 0000 0001 1010
    // take empty bit mask(0000 0000), invert bits (1111 1111), move
    // 3 bits left (1111 1000), then invert again (0000 0111)
    auto j {(k >> 4) & ~(~0u << 3)}; // after mask 0000 0010
     std::cout << "j: " << std::bitset<12>(j) << endl;
    std::cout << j << std::endl; // 2

    return 0;
}
