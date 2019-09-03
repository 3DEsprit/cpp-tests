//
//  ch4example8.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/09/03.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>

int ch4example8() {
    char letter {};
    
    std::cout << "Enter a letter: ";
    std::cin >> letter;
    
    if(std::isalpha(letter)) {
        switch(std::tolower(letter)) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
                std::cout << "You entered a vowel." << std::endl;
                break;
            default:
                std::cout << "You entered a consonant." << std::endl;
                break;
        }
    } else {
        std::cout << "YOu did not enter a letter." << std::endl;
    }
    
    return 0;
}
