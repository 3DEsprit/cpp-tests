//
//  ch6example6.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/10/01.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <array>

int ch6example6() {
    size_t max {};
    
    std::cout << "How many primes would you like? ";
    std::cin >> max;
    
    if(max == 0) return 0;
    
    auto* primes {new unsigned[max]};
    
    size_t count {1};
    primes[0] = 2;
    
    unsigned trial {3};
    
    while(count < max) {
        bool isprime {true};
        
        const auto limit = static_cast<unsigned>(std::sqrt(trial));
        for(size_t i {}; primes[i] <= limit && isprime; ++i) {
            isprime = trial % primes[i] > 0;
        }
        
        if(isprime) {
            primes[count++] = trial;
        }
        
        trial += 2;
    }
    
    for(size_t i {}; i < max; ++i) {
        std::cout << std::setw(10) << primes[i];

        if((i + 1) % 10 == 0)
            std::cout << std::endl;
    }
    std::cout << std::endl;
    
    delete[] primes;
    primes = nullptr;
    
    return 0;
}
