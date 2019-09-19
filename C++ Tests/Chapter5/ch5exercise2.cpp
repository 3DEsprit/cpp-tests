//
//  ch5exercise2.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/09/18.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>

int ch5exercise2() {

    int input {};
    int total {0};
    int num {0};
    char answer {};

    // using while loop
    while(true) {
        // prompt for integers
        std::cout << "Enter a number: ";
        std::cin >> input;
        
        // accumulate sum of arbitrary number of ints entered
        ++num;
        total += input;

        // after every iteration ask if user is done entering numbers
        std::cout << "Do you want to enter more numbers? " << std::endl;
        std::cout << "[y/n]: ";
        std::cin >> answer;
        
        if(answer != 'y') {
            break;
        }
    }

    // output total of all values and overall average
    // as floating point number
    std::cout << num << " values entered, totalling " << total << std::endl;
    std::cout << std::fixed << std::setprecision(8) << "Average of numbers: "
        << (static_cast<float>(total / num)) << std::endl;
    
    return 0;
}
