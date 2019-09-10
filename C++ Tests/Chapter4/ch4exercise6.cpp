//
//  ch4exercise6.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/09/03.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>

int ch4exercise6() {
    int number;
    
    std::cout << "Enter a number: ";
    std::cin >> number;
    
    // using conditional operator
    // determine if integer is
    // 20 or less
    if(number <= 20) {
        std::cout << "Number is 20 or less than 20" << std::endl;
        
    // greater than 20, not greater than 30
    } else if(number > 20 && number <= 30) {
        std::cout << "Number greater than 20 and not greater than 30" << std::endl;
        
    // greater than 30, not exceeding 100
    } else if(number > 30 && number <= 100) {
        std::cout << "Number greater than 30 and not greater than 100" << std::endl;
        
    // greater than 100
    } else {
        std::cout << "Number greater than 100" << std::endl;
    }
    
    return 0;
}
