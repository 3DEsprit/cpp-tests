//
//  ch4exercise5.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/09/03.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>

int ch4exercise5() {
    // add to example 6 to print additional message
    int mice {};
    int brown {};
    int white {};
    
    std::cout << "How many brown mice do you have? ";
    std::cin >> brown;
    std::cout << "How many white mice do you have? ";
    std::cin >> white;
    
    mice = brown + white;
    
    // if exactly one mouse output message
    std::cout << "You have " << mice << (mice == 1 ? " mouse." : " mice.") << std::endl;
    
    // "it is a brown/white mouse"
    // if multiple mice output correct pluralization
    // "of these mice, N is a/are brown mouse/mice"
    // if no mice no new message needs to be printed
    // mixture of conditional operators and if/else
    if(mice >= 1) {
        
        if(brown == 0) {
            std::cout << (mice == 1 ? "The mouse is not " : "None of these mice are ") << "brown." << std::endl;
        } else {
            std::cout << brown << (brown > 1 ? " mice are brown." : " mouse is brown.") << std::endl;
        }
        
        if(white == 0) {
            std::cout << (mice == 1 ? "The mouse is not " : "None of these mice are ") << "white." << std::endl;
        } else {
            std::cout << white << (white > 1 ? " mice are white." : " mouse is white.") << std::endl;
        }
    } else {
        std::cout << "No white or brown mice." << std::endl;
    }

    return 0;
}
