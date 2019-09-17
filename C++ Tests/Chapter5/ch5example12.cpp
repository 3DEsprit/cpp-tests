//
//  ch5example12.cpp
//  C++ Tests
//  Allocating an array at runtime
//
//  Created by Dennis on 2019/09/17.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <iomanip>

int ch5example12() {
    size_t count {};
    std::cout << "How many heights will you enter? ";
    std::cin >> count;
    
    int height[count];
    
    size_t entered {};
    while(entered < count) {
        std::cout << "Enter a height: ";
        std::cin >> height[entered];
        
        if(height[entered] > 0) {
            ++entered;
        } else {
            std::cout << "A height must be positive - try again.\n";
        }
    }
    
    // Calculate the sum of the heights
    unsigned int total {};
    for(size_t i {}; i < count; ++i) {
        total += height[i];
    }
    
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "The average height is " << static_cast<float>(total) / count << std::endl;
        
    return 0;
}
