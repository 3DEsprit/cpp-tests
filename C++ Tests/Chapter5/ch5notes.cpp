//
//  ch5notes.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/09/12.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>
#include <array>

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
    
    return 0;
}
