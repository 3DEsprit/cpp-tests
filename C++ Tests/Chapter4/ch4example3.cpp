//
//  ch4example3.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/08/30.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>

int ch4example3() {
    char letter {};
    
    std::cout << "Enter a letter: ";
    std::cin >> letter;
    
    if(letter >= 'A') {
        if(letter <= 'Z') {
            std::cout << "You entered an uppcase letter." << std::endl;
            return 0;
        }
    }
    
    if(letter >= 'a') {
        if(letter <= 'z') {
            std::cout << "You entered a lowercase letter." << std::endl;
            return 0;
        }
    }

    std::cout << "You did not enter a letter." << std::endl;
    return 0;
}
