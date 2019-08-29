//
//  ch3exercise4.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/08/24.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>

int ch3exercise4() {
    unsigned char a {'a'}, b {'b'}, c {'c'}, d {'d'};
    unsigned int letter_mask {0xFFFFFFFF};
    unsigned int letters {0u};
    unsigned int letter_reverse {0u};
    
//    letters = ~letters;

    // gather input and taken in 4 characters
//    std::cout << "Enter four characters: ";
//    std::cin >> a >> b >> c >> d;
    // take the characters and pack into
//    std::cout << "Letter: " << std::bitset<32>(letters) << std::endl;
    letters ^= a << 24;
    letters ^= b << 16;
    letters ^= c << 8;
    letters ^= d;
    
    unsigned int a_mask {255u << 24};
    unsigned int b_mask {255u << 16};
    unsigned int c_mask {255u << 8};
    unsigned int d_mask {255u};
    
    std::cout << "Bits a: " << std::bitset<8>(a) << " " << std::hex << std::showbase << a << std::endl;
    std::cout << "Bits b: " << std::bitset<8>(b) << " " << std::hex << std::showbase << b << std::endl;
    std::cout << "Bits c: " << std::bitset<8>(c) << " " << std::hex << std::showbase << c << std::endl;
    std::cout << "Bits d: " << std::bitset<8>(d) << " " << std::hex << std::showbase << d << std::endl;
    
    std::cout << "packed: " << std::bitset<32>(letters) << std::hex << letters << std::endl;
    // display the value of packed variable (hex/bin)
//    std::cout << "Mask a: " << std::bitset<32>(a_mask) << std::hex << std::showbase << a_mask << std::endl;
//    std::cout << "Mask b: " << std::bitset<32>(b_mask) << std::hex << std::showbase << b_mask << std::endl;
//    std::cout << "Mask c: " << std::bitset<32>(c_mask) << std::hex << std::showbase << c_mask << std::endl;
//    std::cout << "Mask d: " << std::bitset<32>(d_mask) << std::hex << std::showbase << d_mask << std::endl;
    
    // unpack variables
    char a_out { static_cast<char>((letters & a_mask) >> 24) };
    char b_out { static_cast<char>((letters & b_mask) >> 16) };
    char c_out { static_cast<char>((letters & c_mask) >> 8) };
    char d_out { static_cast<char>((letters & d_mask)) };
    
    std::cout << "First: " << std::bitset<8>(a_out) << " " << std::hex << std::showbase << a_out << std::endl;
    std::cout << "Second: " << std::bitset<8>(b_out) << " " << std::hex << std::showbase << b_out << std::endl;
    std::cout << "Third: " << std::bitset<8>(c_out) << " " << std::hex << std::showbase << c_out << std::endl;
    std::cout << "Fourth: " << std::bitset<8>(d_out) << " " << std::hex << std::showbase << d_out << std::endl;
    
    letter_reverse ^= d << 24;
    letter_reverse ^= c << 16;
    letter_reverse ^= b << 8;
    letter_reverse ^= a;
    
    // display the value of packed variable (hex/bin)
    // output in reverse order
    std::cout << "Reversed: " << std::hex << std::showbase << letter_reverse << std::endl;
    
    // low-order byte first
    return 0;
}
