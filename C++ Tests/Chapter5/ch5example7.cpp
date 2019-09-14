//
//  ch5example7.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/09/13.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <cctype>

int ch5example7() {
    size_t table {};
    const size_t table_min {2};
    const size_t table_max {12};
    char reply {};
    
    do {
        std::cout << "What size table would you like ("
        << table_min << " to " << table_max << ")? ";
        std::cin >> table;
        
        std::cout << std::endl;
        
        if(table < table_min || table > table_max) {
            std::cout << "Invalid table size entered. Program terminated." << std::endl;
            return 1;
        }
        
        // create top line of table
        std::cout << std::setw(6) << " |";
        for(size_t i {1}; i <= table; ++i) {
            std::cout << " " << std::setw(3) << i << " |";
        }
        std::cout << std::endl;
        
        // create separator row
        for(size_t i {}; i <= table; ++i) {
            std::cout << "------";
        }
        std::cout << std::endl;
        
        // output values in row
        for(size_t i {1}; i <= table; ++i) {
            std::cout << " " << std::setw(3) << i << " |";
            
            for(size_t j {1}; j <= table; ++j) {
                std::cout << " " << std::setw(3) << i * j << " |";
            }
            std::cout << std::endl;
        }
        
        // check if another table will be created
        std::cout << "\nDo you want another table (y or n)? ";
        std::cin >> reply;

    } while(std::tolower(reply) == 'y');
    
    return 0;
}
