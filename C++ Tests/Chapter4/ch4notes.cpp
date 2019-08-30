//
//  ch4notes.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/08/25.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>
#include <iostream>

int ch4notes() {
    int i { -10 };
    int j { 20 };
    double x { 1.5 };
    double y { -0.25E-10 };

    std::cout << std::boolalpha;
//    std::cout << "C1: " << (-1 < y) << std::endl;
//    std::cout << "C2: " << (j < (10 - i)) << std::endl;
//    std::cout << "C3: " << (2.0*x >= (3 + y)) << std ::endl;

    char letter {'A'};
    char newLetter { 'A' };

    char badBrace { '}' };
    char goodBrace { '}' };
    
    // semicolon will cause an empty statement or null statement
    if(letter == 'A'); // nullify condition with semicolon, hence warning =>
        // always executes
        std::cout << "The first capital, alphabetically speaking.\n";

    // ugly but completely legal
    int ii = 0;; ii += 5;; std::cout << ii << std::endl   ;

    // classifying characters provided by the cctype header
    if(isupper(letter))
        std::cout << "char letter is uppercase" << std::endl;

    if(islower(letter))
        std::cout << "char letter is lowercase" << std::endl;

    if(isalpha(letter))
        std::cout << "char letter is in alphabet" << std::endl;

    if(isdigit(letter))
        std::cout << "char is digit" << std::endl;

    if(isxdigit(letter))
        std::cout << "char letter is xdigit" << std::endl;

    if(isalnum(letter))
        std::cout << "char letter is alnum" << std::endl;

    if(isspace(letter))
        std::cout << "char letter is space" << std::endl;

    if(isblank(letter))
        std::cout << "char letter is blank" << std::endl;

    if(ispunct(letter))
        std::cout << "char letter is punctuation" << std::endl;

    if(isprint(letter))
        std::cout << "char letter is printable" << std::endl;

    if(iscntrl(letter))
        std::cout << "char letter is control" << std::endl;

    if(isgraph(letter))
        std::cout << "char letter is graphical" << std::endl;
    
    if(ispunct(badBrace))
        std::cout << "char badBrace is punctuation" << std::endl;
    
    if(ispunct(goodBrace))
        std::cout << "char goodBrace is punctuation" << std::endl;
    
    if(badBrace == goodBrace) {
        std::cout << "badBrace equals goodBrace" << std::endl;
    } else {
        std::cout << "badBrace is notequal and obviously alien" << std::endl;
    }

    return 0;
}
