//
//  ch5example3.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/09/12.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <iomanip>

int ch5example3() {
    const double pi { 3.14159265358979323846 };
    const size_t perline {3};
    size_t linecount {};

    for(double radius {0.2}; radius <= 3.0; radius += 0.2) {
        std::cout << std::fixed << std::setprecision(2)
            << "  radius =" << std::setw(5) << radius
            << "  area =" << std::setw(6) << pi * radius * radius;
        
        if(perline == ++linecount) {
            std::cout << std::endl;
            linecount = 0;
        }
    }
    std::cout << std::endl;
}
