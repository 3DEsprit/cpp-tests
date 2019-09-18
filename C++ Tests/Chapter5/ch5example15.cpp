//
//  ch5example15.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/09/18.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <vector>

int ch5example15() {
    std::vector<double> x;
    
    while(true) {
        double input {};      // Temporary store for a value
        
        std::cout << "Enter a non-zero value, or 0 to end: ";
        std::cin >> input;
        
        if(input == 0)
            break;
        
        x.push_back(input);
    }
    
    if(x.empty()) {
        std::cout << "Nothing to sort..." << std::endl;
        return 0;
    }
    
    std::cout << "Starting to sort." << std::endl;
    
    while(true) {
        
        bool swapped { false }; // becomes true when not all values are in order
        
        for(size_t i {}; i < x.size() - 1; ++i) {
            // out of order so swap them
            if(x[i] > x[i + 1]) { // switch condition operator to use descending order
                const auto temp = x[i];
                x[i] = x[i+1];
                x[i + 1] = temp;
                swapped = true;
            }
        }
        
        if(!swapped) {          // if there were no swaps
            break;              // ... all values are in order...
        }                       // ... otherwise iterate again
    }
    
    std::cout << "Your data in ascending sequence:\n"
    << std::fixed << std::setprecision(1);
    
    const size_t perline {10};  // Number output per line
    size_t n {};                // Number on current line
    
    for(size_t i {}; i < x.size(); ++i) {
        std::cout << std::setw(8) << x[i];
        if(++n == perline) {    // When perline has been written...
            std::cout << std::endl; // ...start a new line and...
            n = 0;              // ...reset count on this line
        }
    }
    std::cout << std::endl;

    
    return 0;
}
