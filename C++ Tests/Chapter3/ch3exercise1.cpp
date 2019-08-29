//
//  ch3exercise1.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/08/24.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <iomanip>

int ch3exercise1() {
    
    int number {1};
//    // prompt for input of intege r
    std::cout << "Enter a number: ";
    // store as int
    std::cin >> number;
    
    // invert the above value and store result (not sure why)
    int invert = ~number;
    // right align all values
    // original value; inverted value ; inverted value +1
    std::cout << std::setw(14) << std::right << "Original";
    std::cout << std::setw(14) << std::right << "Inverted";
    std::cout << std::setw(14) << std::right << " Inverted + 1" << std::endl;
    
    // output in hex from one line
    // all hex values should have leading 0x
    std::cout << std::hex << std::showbase << std::right
        << std::setw(14) << std::right << number
        << std::setw(14) << std::right << ~number
        << std::setw(14) << std::right << ~number + 1u << std::endl;
    // above values in decimal and line up with line 1
    std::cout << std::dec << std::showbase << std::right
        << std::setw(14) << std::right << number
        << std::setw(14) << std::right << ~number
        << std::setw(14) << std::right << ~number + 1u << std::endl;
    // extra: add binary row
    std::cout << std::right
        << std::setw(14) << std::right << std::bitset<8>(number)
        << std::setw(14) << std::right << std::bitset<8>(~number)
        << std::setw(14) << std::right << std::bitset<8>(~number + 1u) << std::endl;

    return 0;
}
