//
//  ch4example7.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/09/03.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>
#include <iostream>

int ch4example7() {
    int choice {};
    
    std::cout << "Your electronic recipe book is at your service.\n"
        << "You can choose from the following delicious dishes:\n"
        << "1  Boiled eggs\n"
        << "2  Fried eggs\n"
        << "3  Scrabled eggs\n"
        << "4  Coddled eggs\n\n"
        << "Enter your selecion number: ";
    std::cin >> choice;
    
    switch(choice) {
        case 1:
            std::cout << "Boil some eggs." << std::endl;
            break;
        case 2:
            std::cout << "fry some eggs." << std::endl;
            break;
        case 3:
            std::cout << "Scramble some eggs." << std::endl;
            break;
        case 4:
            std::cout << "Coddle some eggs." << std::endl;
            break;
        default:
            std::cout << "You entered a wrong number - try raw eggs." << std::endl;
            break;
    }
    
    return 0;
}
