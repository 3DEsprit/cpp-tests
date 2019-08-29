//
//  ch3exercise5.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/08/24.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>

int ch3exercise5() {
    // create enum of type color
    // add red, green, yellow, purple, blue, black, and white
    // set type un int and set the value of each to
    // match the corresponding RGB value in hex
    enum class Color : unsigned int { Red = 0xFF0000, Green = 0x00FF00, Yellow = 0xFFF833, Purple = 0xB500FF, Blue = 0x0000FF, Black = 0x000000, White = 0xFFFFFF };
    
    // create variables of type Color with following colors
    // yellow
    auto yellow { Color::Yellow };
    
    // purple
    auto purple { Color::Purple };
    
    // green
    auto green { Color::Green };

    
    // access enum value and output the RGB components
    // as separate values
    std::cout << "yellow: " << std::hex << std::showbase << static_cast<int>(yellow) << std::endl;
    std::cout << "purple: " << std::hex << std::showbase << static_cast<int>(purple) << std::endl;
    std::cout << "green:  " << std::hex << std::showbase << static_cast<int>(green) << std::endl;
    
    int yellow_out = static_cast<int>(yellow);
    int purple_out = static_cast<int>(purple);
    int green_out = static_cast<int>(green);
    
    std::cout << "yellow: " << std::hex << std::showbase << yellow_out << std::endl;
    std::cout << "purple: " << std::hex << std::showbase << purple_out << std::endl;
    std::cout << "green:  " << std::hex << std::showbase << green_out << std::endl;

    
    return 0;
}
