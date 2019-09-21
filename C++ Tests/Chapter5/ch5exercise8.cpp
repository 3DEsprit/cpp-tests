//
//  ch5exercise8.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/09/18.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>
#include <array>

int ch5exercise8() {
    int max_iterations {93};
    // fibonacci sequence
    int iterations {0};
    
    // use a 93 element array container
    std::vector<unsigned long long> fib_list;
    
    unsigned long long i {1};
    unsigned long long prev {0};

    while(iterations < max_iterations) {
        fib_list.push_back(i + prev);
        i = i + prev;
        prev = i - prev;
        iterations++;
    }
    
    int line {0};
    
    for(size_t i {0}; i < fib_list.size(); ++i) {
        std::cout << std::setw(20) << std::right << fib_list[i] << " ";
        line++;
        
        if(line == 6) {
            std::cout << std::endl;
            line = 0;
        }
    }
    return 0;
}
