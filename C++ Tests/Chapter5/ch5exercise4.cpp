//
//  ch5exercise4.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/09/18.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <cctype>

int ch5exercise4() {
    int max_length {1000};
    char text[max_length];
    
    int char_count {0};
    
    // use std::cin.getline()
    // obtain C-style string with
    //  max 1000 characters from user
    std::cout << "Enter a sentence " << std::endl;
    std::cin.getline(text, max_length);
    
    int i {0};
    bool done {false};

    // count characters entered using loop
    while(!done) {
        if(isalpha(text[i])) {
            ++char_count;
        }
        
        i++;

        if(i == 1000 || text[i] == '\0') {
            done = true;
        }
    }
    
    // using second loop to print all characters
    // one at a time in reverse order
    while(done) {
        if(isalpha(text[i])) {
            std::cout << text[i] << " ";
        }

        --i;

        if(i < 0) {
            break;
        }
    }

    std::cout << "\n" << char_count << " total characters." << std::endl;

    return 0;
}
