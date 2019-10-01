//
//  ch6example4.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/09/30.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <array>

int ch6example4() {
    const char* pstars[] {
        "Fatty Arbuckle", "Clara Bow", "Lassie",
        "Slim Pickens", "Boris Karloff", "Mae West",
        "Oliverr Hardy", "Greta Garbo"
    };
    
    std::cout << "Pick a lucky star! Enter a number between 1 and "
        << std::size(pstars) << ": ";
    size_t choice {};
    std::cin >> choice;
    
    if(choice >= 1 && choice <= std::size(pstars)) {
        std::cout << "Your lucky star is " << pstars[choice - 1] << std::endl;
    } else {
        std::cout << "Sorry, you haven't got a lucky star." << std::endl;
    }
    
    return 0;
}
