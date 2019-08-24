//
//  ch3example1.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/08/23.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <iomanip>

int ch3example1() {
    unsigned int red {0xFF0000u};
    unsigned int white {0xFFFFFFu};
    
    std::cout << std::hex << std::setfill('0');
    std::cout << "Try out bitwise complement, AND and OR operators: " << std::endl;
    std::cout << "Initial value:         red = " << std::setw(8) << red << std::endl;
    std::cout << "Complement:            red = " << std::setw(8) << ~red << std::endl;
    std::cout << "Initial value:       white = " << std::setw(8) << white << std::endl;
    std::cout << "Complement:          white = " << std::setw(8) << ~white << std::endl;
    std::cout << "Bitwise AND:   red & white = " << std::setw(8) << (red & white) << std::endl;
    std::cout << "Bitwise  OR    red | white = " << std::setw(8) << (red | white) << std::endl;
    std::cout << "Now try successive exlusive OR operations:" << std::endl;
    unsigned int mask { red ^ white };
    std::cout << "mask red ^ white = " << std::setw(8) << mask << std::endl;
    std::cout << "      mask ^ red = " << std::setw(8) << (mask ^ red) << std::endl;
    std::cout << "    mask ^ white = " << std::setw(8) << (mask ^ white) << std::endl;
    
    unsigned int flags {0xFF};
    unsigned int bit1mask {0x1};
    unsigned int bit6mask {0b100000};
    unsigned int bit20mask {1u << 19};
    
    std::cout << "Use masks to select or set a particular flag bit:" << std::endl;
    std::cout << "Select bit 1 from flags  : " << std::setw(8) << (flags & bit1mask) << " "
        << std::bitset<24>((flags & bit1mask)) << std::endl;
    std::cout << "Select bit 6 from flags  : " << std::setw(8) << (flags & bit6mask) << " "
        << std::bitset<24>((flags & bit6mask)) << std::endl;
    std::cout << "Switch off bit 6 in flags: " << std::setw(8) << (flags &= ~bit6mask) << " "
        << std::bitset<24>((flags &= ~bit6mask)) << std::endl;
    std::cout << "Switch on bit 20 in flags: " << std::setw(8) << (flags |= bit20mask) << " "
    << std::bitset<24>((flags |= bit20mask)) << std::endl;
    
    return 0;
}
