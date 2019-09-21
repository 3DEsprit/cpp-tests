//
//  ch5exercise6.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/09/18.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>
#include <array>

int ch5exercise6() {
    int upper {};
    
    // prompt user to set x
    std::cout << "Enter a number to represent the interval count (max 1000): ";
    std::cin >> upper;
    // using vector create arbitrary list of numbers
    std::vector<int> list;
    
    if(upper < 0 && upper > 1001) {
        return 0;
    }
    
    // with 1 to x number of elements
    for(int i {0}; i <= upper; i++) {
        list.push_back(i);
    }
    
    int line {0};
    
    // output values that are not multiples of 7 or 13
    // output 10 per line and in aligned columns
    for(int j {0}; j <= upper; j++) {
        if(!(list[j] % 7) || !(list[j] % 13)) {
            
            ++line;
            
            if(line == 10) {
                std::cout << "\n" << std::fixed << std::left << std::setw(5) << list[j] << " ";
                line = 0;
            } else {
                std::cout << std::fixed << std::left << std::setw(5) << list[j] << " ";
            }
        }
    }
    
    return 0;
}
