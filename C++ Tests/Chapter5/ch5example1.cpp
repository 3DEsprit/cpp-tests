//
//  ch5example1.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/09/12.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>
#include <iostream>

int ch5example1() {
    const unsigned size { 6 };
    unsigned height[size] { 26, 37, 47, 55, 62, 75 };
    
    unsigned total {};
    for(size_t i {}; i < size; ++i) {
        total += height[i];
    }
    
    const unsigned average { total/size };
    std::cout << "The average height is " << average << std::endl;
    
    unsigned count {};
    
    for(size_t i {}; i < size; ++i) {
        if(height[i] < average) ++count;
    }
    
    std::cout << count << " people are below average height." << std::endl;
 
    return 0;
}
