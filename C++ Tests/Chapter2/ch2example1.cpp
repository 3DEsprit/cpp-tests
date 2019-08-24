//
//  example2-1.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/08/11.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <iostream>

int ch2example1() {
    int apple_count { 15 };
    int orange_count { 5 };
    int total_fruit { apple_count + orange_count };
    
    std::cout << "The value of apple_count is " << apple_count << std::endl;
    std::cout << "The value of orange_count is " << orange_count << std::endl;
    std::cout << "The value of total_fruit is " << total_fruit << std::endl;
    
    return 0;
}
