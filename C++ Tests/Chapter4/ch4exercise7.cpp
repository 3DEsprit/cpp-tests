//
//  ch4exercise7.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/09/03.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>

int ch4exercise7() {
    char letter;
    
    //    auto bin_vowel_a = std::bitset<8>('a');
    //    auto bin_vowel_e = std::bitset<8>('e');
    //    auto bin_vowel_i = std::bitset<8>('i');
    //    auto bin_vowel_o = std::bitset<8>('o');
    //    auto bin_vowel_u = std::bitset<8>('u');
    
    // prompt for input of letter
    std::cout << "Enter a letter: ";
    std::cin >> letter;
    
    //    std::cout << "a: " << bin_vowel_a << std::endl;
    //    std::cout << "e: " << bin_vowel_e << std::endl;
    //    std::cout << "i: " << bin_vowel_i << std::endl;
    //    std::cout << "o: " << bin_vowel_o << std::endl;
    //    std::cout << "u: " << bin_vowel_u << std::endl;
    
    bool is_vowel { false };
    bool is_upper { false };
    
    // a 00001 +
    // e 00101 +
    // i 01001 +
    // o 01111 +
    // u 10101 +
    // letter is a vowel
    // make sure char is letter
    if(letter & (1 << 6) && !(letter & (1 << 7))) {

        // check for a e i o u
        // check first 2 bits: 1st on 2nd off
        if(letter & 1) {
            
            if(!(letter & (1 << 1))) {
                // check 3rd on
                if(letter & (1 << 2)) {
                    // check 4th bit (e, u) 00101 / 10101
                    is_vowel = (!(letter & (1 << 3)) ? true : false);
                // 3rd off
                } else {
                    // check 5th (a, i) 00001 / 01001
                    is_vowel = (!(letter & (1 << 4)) ? true : false);
                }
            // check for o, the only one with 2nd bit set
            } else {
                is_vowel = (letter & (1 << 2) && letter & (1 << 3) && !(letter & (1 << 4)) ? true : false);
            }
        }
    }
    
    // letter is lowercase
    if(!(letter & (1 << 5))) {
        is_upper = true;
    }
    
    // output result
    std::cout << "Letter" << " is " << (is_vowel ? "" : "not ") << "a vowel, and " << "is " << (is_upper ? "uppercase." : "lowercase.") << std::endl;
    // output lowercase letter together
    // with char code and binary value
    // use binary integral literals for bin
    std::cout << letter << std::setbase(2) << " 0b" << std::bitset<8>(letter) << std::endl;
    std::cout << static_cast<char>(letter ^ (1 << 5)) << " 0b" << std::bitset<8>(letter ^ (1 << 5)) << std::endl;
    
    std::cout << "\nBits Set\n\n" << std::endl;
    std::cout << " 8 7 6 5 4 3 2 1 " << std::endl;
    std::cout << "-----------------" << std::endl;
    std::cout << "|" << ((letter & (1 << 7)) ? "1" : "0") << "|"
        << ((letter & (1 << 6)) ? "1" : "0") << "|"
        << ((letter & (1 << 5)) ? "1" : "0") << "|"
        << ((letter & (1 << 4)) ? "1" : "0") << "|"
        << ((letter & (1 << 3)) ? "1" : "0") << "|"
        << ((letter & (1 << 2)) ? "1" : "0") << "|"
        << ((letter & (1 << 1)) ? "1" : "0") << "|"
        << ((letter & (1)) ? "1" : "0") << "|" << std::endl;
    std::cout << "-----------------\n" << std::endl;
    
    return 0;
}
