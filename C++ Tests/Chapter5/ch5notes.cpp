//
//  ch5notes.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/09/12.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>
#include <array>
#include <typeinfo>

int ch5notes() {
    // initialize array using junk values
    double temperatures[366];
    std::cout << "temperatures[123] " << temperatures[123] << std::endl;
    
    // initialize with set amount of elements with magic number C-like
    double testArray[] { 12, 23, 34, 45, 56 };
    
    // obtain array size
    std::cout << "Array Size: " << std::size(testArray) << std::endl;
    
    // copy array
    double rain[12] { 1.1, 2.8, 3.4, 3.7, 2.1, 2.3, 1.8, 0.0, 0.3, 0.9, 0.7, 0.5 };
    double copy[12];
    
    for(size_t i {}; i < 12; ++i) {
        copy[i] = rain[i];
        std::cout << copy[i] << std::endl;
    }

    // constant array size
    const size_t size { 12 };
    double rainfall[12] { 1.1, 2.8, 3.4, 3.7, 2.1, 2.3, 1.8, 0.0, 0.3, 0.9, 0.7, 0.5 };
    double copyrain[size] {};
    
    // for loops
    // for(initialization; condition; iteration)
    for(size_t i {}; i < size; ++ i) {
        copyrain[i] = rainfall[i];
    }
    
    // for loop with floating point values
    const double pi { 3.14159265358979323846 };
    for (double radius {2.5}; radius <= 20.0; radius += 2.5) {
        std::cout << "radius = " << std::setw(12) << radius
        << " area = " << std::setw(12) << pi * radius * radius << std::endl;
    }
    
    std::cout << std::endl;
    
    // show issue with floating point values
    // this will show issues once it hits the
    // n^10 interval, and every interval after
    // we will never end up with a value == 3.0
    for(double radiusTwo {0.2}; radiusTwo <= 3.0; radiusTwo += 0.2) {
        std::cout << std::fixed << std::setprecision(2)
            << "  radius = " << std::setw(5) << radiusTwo
        << "  area = " << std::setw(6) << pi * radiusTwo * radiusTwo
        << " delta to 3 = " << std::scientific << ((radiusTwo + 0.2) - 3.0) << std::endl;
    }
    
    
    // comma operator - binary op
    // combines two expressions into single expression
    // operation is value of right operand
    // can be used anywhere an expression is used
    // can also use multiple expressions separated by comma
    int i {1};
    int value1 {1};
    int value2 {1};
    int value3 {1};
    // left associative and has lowest prescedence of operators
    // below evaluates like so:
    // (((value1 += ++i), (value2 += ++i)), (value3 += ++i))
    std::cout << (value1 += ++i, value2 += ++i, value3 += ++i) << std::endl;
 
    // example 4 for loop replacement with comma operators
    int limit {1};
    for(unsigned long long n {1}, sum {1}, factorial {1}; n <= limit; ++n, sum += n, factorial *= n) {
        std::cout << std::setw(8) << n << std::setw(8)
            << sum << std::setw(20) << factorial << std::endl;
    }
    
    // range-based for loops
    // for(range_declartion : range_expression) {
    //   statement/block
    // }
    int values[] { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29 };
    int total {};
    // iterates through values to populate x
    for(auto x : values) {
        total += x;
    }
    
    // while loops
    // initialization
    // while(condition) {
    //   iteration
    // }
    
    // like if statements we want to avoid
    // adding semicolons to the block
    // if we do, like so:
    // while(condition);
    // will result in the following evaluation
    // which could result in an infinite loop
    // while(condition) {}
    
    // loop manipulation
    // move execution to the end of the current
    // iteration effectively skipping that iteration
    // continue;
    
    // string arrays using c-style string
    // array terminiated with a null bit
    // and identifying this array type
    
    // array of characters non-string array
    char vowels[5] { 'a', 'e', 'i', 'o', 'u' };   // 'a', 'e', 'i', 'o', 'u'
    // c-style string array
    char c_vowels[6] { 'a', 'e', 'i', 'o', 'u' }; // 'a', 'e', 'i', 'o', 'u', '\0'
    // create c-string with string literal
    char name[10] { "Mae West" }; // 'M', 'a', 'e', ' ', 'W', 'e', 's', 't', '\0', '\0'
    // using magic numbers in this sense still treat as a char array
    char auto_vowels[] { 'a', 'e', 'i', 'o', 'u' }; // 5 elements
    // using a string literal expression will result in a c-string
    char c_name[] { "Mae West" }; // 9 elements
    // as well as this
    char c_auto_vowels[] { "aeiou" };
    
    // output char arrays with the array variable name
    // won't work with other array types
    std::cout << "       Vowels: " << vowels << std::endl;
    std::cout << "     C_Vowels: " << c_vowels << std::endl;
    std::cout << "         Name: " << name << std::endl;
    std::cout << "  Auto_Vowels: " << auto_vowels << std::endl;
    std::cout << "       C_Name: " << c_name << std::endl;
    std::cout << "C_Auto_Vowels: " << c_auto_vowels << std::endl;
    
    // containers
    // array template: array<T, N> Type, Nelements
    std::array<double, 100> values_two;
    std::array<double, 100> values_explicit {0.5, 1.0, 1.5, 2.0};
    
    // array member functions
    values_two.fill(2);
    
    std::cout << values_two[4] << std::endl;
    
    std::cout << values_explicit.size() << std::endl;
    
    return 0;
}
