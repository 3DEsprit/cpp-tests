//
//  ch5example10.cpp
//  C++ Tests
//  Classifying the letters in a C-style string
//
//  Created by Dennis on 2019/09/14.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>

int ch5example10() {
    const int max_length {100};
    char text[max_length] {};
    
    std::cout << "Enter a line of text:" << std::endl;
    // call getline method using a direct member selection operator
    std::cin.getline(text, max_length);
    std::cout << "You entered:\n" << text << std::endl;
    
    size_t vowels {};
    size_t consonants {};
    
//    for(int i {}; text[i] != '\0'; i++) {
    // null character from text converts to false through coercion
    // so condition can be simplified
    for(int i {}; text[i]; i++) {
        if(std::isalpha(text[i])) {
            switch(std::tolower(text[i])) {
                case 'a': case 'e': case 'i': case 'o': case 'u':
                    ++vowels;
                    break;
                default:
                    ++consonants;
                    break; // superflouous
            }
        }
    }
    
    std::cout << "Your input contained " << vowels << " vowels and "
        << consonants << " consonants." << std::endl;
    
    return 0;
}
