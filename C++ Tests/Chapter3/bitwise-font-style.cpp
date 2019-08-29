//
//  bitwise-font-style.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/08/23.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>

int fontstyle() {
    // bitwise
    unsigned short number {16387};
    
    std::cout << std::dec << "original: " << number << std::endl;
    auto result { static_cast<unsigned short>(number << 2) };
    std::cout << std::dec << "result: " << result << std::endl;
    
    signed char bit_value {-104}; // 10011000
    
    std::bitset<8> x(bit_value);
    std::cout << "Orig: " << x << std::endl;
    
    // shift two places and propogate 1's on the left for signed
    bit_value >>= 2; // 11100110
    
    std::bitset<8> y(bit_value);
    std::cout << "Shift: " << y << std::endl;
    
    unsigned char bit_value2 {104}; // 0110 1000
    std::bitset<8> a(bit_value2);
    std::cout << "Orig: " << a << std::endl;
    
    // shift two places and propogate 0's on the left for unsigned
    bit_value2 >>= 2; // 00011010
    
    std::bitset<8> b(bit_value2);
    std::cout << "Shift: " << b << std::endl;
    
    // return 4 4 byte words as a multiple configuration option for fonts
    // word 1: unused
    // word 2: font-style
    // word 3: font-weight
    // word 4: font-size
    unsigned short font {0x064C}; // 0000 0110 0010 1100
    // or set binary
    // can also use digit grouping to visuall separate words
    //    unsigned short font_binary { 0b000001100'0'10'01100 };
    
    std::bitset<16> font_binary(font);
    std::cout << "Font New:      " << font_binary << std::endl;
    
    // assign bit mask to extract specific words with 1's
    unsigned short size_mask { 0x1F }; // 0000 0000 0001 1111
    // usigned short size_mask { 0b11111 };
    
    // using the mask against the value returns the masked
    // portion of the font variable
    auto size { static_cast<unsigned short>(font & size_mask)}; // 0000 0000 0000 1100
    
    std::cout << "Font Size:     " << std::bitset<16>(font) << std::endl;
    
    // create a mask for the style
    unsigned short style_mask {0xFF00};  // 1111 1111 0000 0000
    
    // mask bits and shift 8 bits right to return result in 1st word
    auto style {static_cast<unsigned short>((font & style_mask) >> 8)}; // returns 0000 0000 0000 0110
    
    std::cout << "Font Styl:     " << std::bitset<16>(font) << std::endl;
    
    // set specific bit on style
//    unsigned short italic {0x40}; // 0100 0000
//    unsigned short bold {0x20}; // 0010 0000
    
    // can also use literal to specify a specific bit
    auto italic { static_cast<unsigned short>(1u << 6) }; // 0100 0000
    auto bold { static_cast<unsigned short>(1u << 5) }; // 0010 0000
    
    // set bold
    font |= bold; // set weight to bold
    // set bold and italic
    font |= bold | italic;
    
    // show font style in binary
    std::cout << "Font Bold/Ita: " << std::bitset<16>(font) << std::endl;
    
    // turn bold off using AND using complement
    font &= ~bold;
    
    // turn both bold and italic off using AND complements
    font &= ~bold & ~italic;
    
    // more terse option use OR
    font &= ~(bold | italic);
    
    // show font style in binary
    std::cout << "Font Bold Off: " << std::bitset<16>(font) << std::endl;
    
    
    // toggle font bold with XOR without compliment
    font ^= bold;
    
    // show bold off
    std::cout << "Font BoldXOR1: " << std::bitset<16>(font) << std::endl;
    
    
    // toggle font bold back on with XOR without compliment
    font ^= bold;
    
    // show bold on
    std::cout << "Font BoldXOR0: " << std::bitset<16>(font) << std::endl;
    
    // can use XOR for parity bit of RAID drives, by replacing the
    // XOR'ed bit from the two remaining drives to make the missing bit
    // e.g.
    // Drive 1   : 1010 0111 0110 0011
    // Drive 2   : 0110 1100 0010 1000
    // ParityDriv: 1100 1011 0100 1011
    // Replace missing Drive 2
    // Drive 1   : 1010 0111 0110 0011
    // ParityDriv: 1100 1011 0100 1011
    // RecoverXOR: 0110 1100 0010 1000
    
    return 0;
}
