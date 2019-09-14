//
//  ch5example8.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/09/13.
//  Copyright © 2019 Dennis. All rights reserved.
//
// use continue statement to display ASCII character codes

#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <cctype>
#include <limits>

int ch5example8() {
    // output column headings
    std::cout << std::setw(11) << "Character " << std::setw(13) << "Hexadecimal "
        << std::setw(9)  << "decimal " << std::endl;
    std::cout << std::uppercase; // uppercase hex digits
    
    // output characters and correspondibg codes
    unsigned char ch {};

    do {
        // use this to only output basic ASCII characters
        // if(!std::isprint(ch))
        if(std::iscntrl(ch))
            continue;
        std::cout << std::setw(static_cast<int>(ch) > 127 ? 3 : 6) << ch                          // char
            << std::hex << std::setw(12) << static_cast<int>(ch) // hex
            << std::dec << std::setw(10) << static_cast<int>(ch) // dec
            << std::endl;
    } while(ch++ < std::numeric_limits<unsigned char>::max());
    
    return 0;
}
