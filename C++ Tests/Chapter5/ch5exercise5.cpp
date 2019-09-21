//
//  ch5exercise5.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/09/18.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>

int ch5exercise5() {
    // copy exercise 4
    // use for or while loop instead (opposite ex4)
    // reverse characters in an array (ltr)
    int max_length {1000};
    char text[max_length];
    
    int char_count {0};
    
    // use std::cin.getline()
    // obtain C-style string with
    //  max 1000 characters from user
    std::cout << "Enter a sentence " << std::endl;
    std::cin.getline(text, max_length);

    int i {0};
    // count characters entered using loop
    for(i; i < max_length; ++i) {
        if(isalpha(text[i])) {
            ++char_count;
        }
        
        if(i == 1000 || text[i] == '\0') {
            break;
        }
    }
    
    // using second loop to print all characters
    // one at a time in reverse order
    for(i; i < max_length; --i) {
        if(isalpha(text[i])) {
            std::cout << text[i] << " ";
        }
        
        if(i < 0) {
            break;
        }
    }
    
    std::cout << "\n" << char_count << " total characters." << std::endl;
    
    return 0;
}
