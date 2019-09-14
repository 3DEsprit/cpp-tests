//
//  ch5example5.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/09/13.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <iomanip>

int ch5example5() {
    unsigned int limit {};
    
    std::cout << "This program calculates n! and the sum of the integers"
        << " up to n for values 1 to limit.\n";
    std::cout << "What upper limit for n would you like? ";
    std::cin >> limit;
    
    std::cout << std::setw(8) << "integer" << std::setw(8) << " sum"
        << std::setw(20) << " factorial" << std::endl;
    
    unsigned int n {};
    unsigned int sum {};
    unsigned long long factorial {1ULL};
    
    while(++n <= limit) {
        sum += n;
        factorial *= n;
        std::cout << std::setw(8) << n << std::setw(8) << sum
            << std::setw(20) << factorial << std::endl;
    }
    
    return 0;
}
