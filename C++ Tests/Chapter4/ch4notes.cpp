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
    
    // short circuit evaluation
    int z = 2;
//    if(z < 0 && (z*z + 632*z == 1268))
    if(z == 2 || (z*z + 632*z == 1268))
        std::cout << "Congrats: " << z << " is the correct solution!" << std::endl;

    int age = 21;
    int balance = 10'000;
    int income = 25'000;
    int loan;

    // XOR evaluation
    if((age > 20) ^ (balance >= 1'000'000))
        std::cout << "boo" << std::endl;

    // how the above is evaluated
//    if((age < 20 || balance >= 1'000'000) && !(age < 20 && balance >= 1'000'000))
    // or
//    if((age < 20 && balance < 1'000'000) || (age >= 20 && balance >= 1'000'000))
    
    // conditonal operator (ternary operator)
    int a {1}, b {2}, c;
    
    c = a > b ? a : b;
    
    loan = 2 * income < balance / 2 ? 2 * income : balance / 2;
    
    int number {2};
    
    switch(number) {
        case 1:
            std::cout << "Number 1" << std::endl;
            break;
        case 2:
            std::cout << "Number 2" << std::endl;
            [[fallthrough]];
        default:
            std::cout << "No Other numbers" << std::endl;
            break;
    }
    
    char input {'a'};
    
    // initialization statements
    if(auto lower { static_cast<char>(std::tolower(input)) }; lower >= 'a' && lower <= 'r') {
        std::cout << "Entered letter '" << lower << '\'' << std::endl;
    }
    
    return 0;
}
