//
//  ch5example6.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/09/13.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <cctype>   // for tolower

int ch5example6() {
    char reply {};
    int count {};
    double temperature {};
    double total {};

    do {
        std::cout << "Enter a temperature reading: ";
        std::cin >> temperature;
        
        total += temperature;
        ++count;
        
        std::cout << "Do you want to enter another? (y/n): ";
        std::cin >> reply;
        
    } while(std::tolower(reply) == 'y');
    
    std::cout << "The average temperature is " << total/count << std::endl;
    
    return 0;
}
