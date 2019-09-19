//
//  ch5exercise3.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/09/18.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <cctype>

int ch5exercise3() {
    const int max_length {1000};
    char text[max_length] {};
    int characters {0};

    std::cout << "Enter a sentence: " << std::endl;
    std::cin.getline(text, max_length);

    int i {0};
    // use do-while
    do {
        // count number on nonwhitespace chars
        //   entered in a given line
        if(isalpha(text[i]) && text[i] != '#') {
            ++characters;
        } else if(text[i] == '#') {
            break;
        }

        i++;
    // end when # character found
    } while(i < max_length || text[i] == '\0');
    
    std::cout << text << std::endl;
    
    std::cout << characters << " characters found. " << std::endl;
        
    return 0;
}
