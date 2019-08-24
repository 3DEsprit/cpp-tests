//
//  notes.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/08/11.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include "notes.hpp"

int notes() {
    // braced initializer form
    // uniform initialization
    int apples { 5 };
    int oranges { 7 };
    
    int total_fruit { apples + oranges };
    
    // narrowing conversion
    short lemons { 2 };
    short grapes { 1 };
    long total_sour { lemons + grapes };
    
    // functional notation
    int bananas(7);
    int banana_count(7.5); // narrowing conversion, may warn
    // narrowing conversion, will error
//    int papaya_count{0.3};
    
    // assignment notation
    int limes = 6;
    int coconut_count = 5.3; // narrowing conversion, may warn
    
    std::cout << "\nTotal: " << total_fruit
        << "\nSour: " << total_sour
        << "\nBananas: " << bananas
        << "\nBanana Count: " << banana_count
        << "\nCoconut: " << coconut_count
        << "\nLimes: " << limes
        << std::endl;
    
    // multi-variable statement
    int foot_count { 2 }, toe_count { 10 }, head_count { 1 };
    
    // zero initialization
    int counter { 0 };
    int counter_two { };
    
    // fixed variables
    const unsigned toes { 10 };
    
    // literals
    long literal_one { -123L };
    short literal_two { +123 };
    long literal_three { 22333 };
    unsigned int literal_four { 98U };
    long long literal_five { -1234LL };
    unsigned long long literal_six { 12345ULL };
    long literal_seven { 22333 };
    
    // Can use single quote as placement commas in C++ 14 and above
    // 22'333 -1'234LL 12'345ULL
    unsigned long age { 99UL };
    unsigned short price { 10u };
    long long distance { 15'000'000LL };
    
    // doesn't need to be groups of 3 either
    // 1'50'00'000LL
    
    // narrowing conversion again
//    unsigned char high_score { 513U };
//    unsigned int high_score { -1 };
    
    // hexadecimal literals
    unsigned int color { 0x0f0d0e };
    unsigned int mask { 0XFF00FF00 };
    unsigned long value { 0xDEADlu };
    
    // octal literals
    int otest { 0657 };
    unsigned int otest2 { 0443U };
    long otest3 { 012L };
    int otest4 { 06255 };
    int otest5 { 0377 };
    
    // binary literals
    int small { 0B110101111 };
    unsigned int btest { 0b100100011U };
    long btest2 { 0b1010L };
    int btest3 { 0b110010101101 };
    int btest4 { 0b11111111 };
    
    // calculations
    // 2         *         3
    // operand   operator  operand
    // * binary operator (requires two operands)
    // - uniary operator (requires one operand in cases like -Value)
    
    int height {74};
    
    std::cout << "The height variable occupies " << sizeof height << " bytes." << std::endl;
    std::cout << "Type \"long long\" occupies " << sizeof(long long) << " bytes." << std::endl;
    std::cout << "The result of the expression height * height/2 occupies "
        << sizeof(height * height/2) << " bytes." << std::endl;
    
    double value1 {10.9};
    double value2 {15.9};
    int whole_number {static_cast<int>(value1) + static_cast<int>(value2)};
    
    float positive_infinity = std::numeric_limits<float>::infinity();
    double negative_infinity = -std::numeric_limits<double>::infinity();
    long double not_a_number = std::numeric_limits<long double>::quiet_NaN();
    
    char letter; // junk like in C
    char yes {'Y'}, no {'N'};
    //    char ch {33}; // iteger initialization
    char ch {'A'};
    letter = ch + 5;
    ++ch;
    ch += 3;
    
    std::cout << "ch is '" << ch
    << "' which is code " << std::hex << std::showbase << static_cast<int>(ch) << std::endl;
    
    wchar_t wch {L'Z'};
    wchar_t wchtwo {L'\x0438'}; // Cyrillic
    
    // UTF-16
    char16_t lettertwo {u'B'};
    char16_t cyr {u'\x0438'};
    
    // UTF-32
    char32_t letterthree {U'B'};
    char32_t cyrtwo {U'\x044f'};
    
    char32_t cyrnative {U'я'};
    
    std::wcout << std::noshowbase << std::dec << cyrnative << " " << cyrtwo << " " << cyr << std::endl;
    
    // automatic types
    auto m {10};
    auto n {200UL};
    auto pi {3.14159};
    

    return 0;
}
