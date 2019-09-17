//
//  ch5example13.cpp
//  C++ Tests
//  Comparing array<> objects and plain arrays
//
//  Created by Dennis on 2019/09/17.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <array>

int ch5example13() {
    {
        std::cout << "First we trying out the comparison operators for std::array<> objects:" << std::endl;
        
        std::array<double,4> these {1.0, 2.0, 3.0, 4.0};
        std::array<double,4> those {1.0, 2.0, 3.0, 4.0};
        std::array<double,4> them  {1.0, 1.0, 5.0, 5.0};
        
        if (these == those) std::cout << "these and those are equal."    << std::endl;
        if (those != them)  std::cout << "those and them are not equal." << std::endl;
        if (those > them)   std::cout << "those are greater than them."  << std::endl;
        if (them < those)   std::cout << "them are less than those."     << std::endl;
    }
    
    std::cout << std::endl;
    
    {
        std::cout << "Next we repeat exactly the same comparisons with plain C++ arrays:" << std::endl;
        double these[4] {1.0, 2.0, 3.0, 4.0};
        double those[4] {1.0, 2.0, 3.0, 4.0};
        double them[4]  {1.0, 1.0, 5.0, 5.0};
        
        if (these == those) std::cout << "these and those are equal."    << std::endl;
        if (those != them)  std::cout << "those and them are not equal." << std::endl;
        if (those > them)   std::cout << "those are greater than them."  << std::endl;
        if (them < those)   std::cout << "them are less than those."     << std::endl;
    }
    
    /* The explanation of why this does not work as expected with plain arrays follows in Chapter 6 */
    return 0;
}
