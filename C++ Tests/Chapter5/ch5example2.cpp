//
//  ch5example2.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/09/12.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>
#include <array>

int ch5example2() {
    int values[] { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29 };
    
    std::cout << "There are " << sizeof(values) / sizeof(values[0])
        << " elements in the array." << std::endl;
    
    int sum {};
    for(size_t i {}; i < std::size(values); ++i) {
        sum += values[i];
    }
    
    std::cout << "The sum of the array elements is " << sum << std::endl;
}
