//
//  ch2example3.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/08/20.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>
#include <cmath>
#include <iomanip>

int ch2example3() {
    const double fish_factor { 20/0.5 };
//    const double inches_per_foot { 12.0 };
    const unsigned int inches_per_foot {12};
    const double pi { 3.141592653589793238 };
//    double fish_count {};
    unsigned int fish_count {};
    double fish_length {};
    std::cout << "Enter the nnumber of fish you want to keep: ";
    std::cin >> fish_count;
    std::cout << "Enter the average fish length in inches: ";
    std::cin >> fish_length;
    fish_length /= inches_per_foot;

    // use implicit conversion to calculate the below formula
    // fish_length casted to the largest range (double)
    // high to low: long double > double > float > un long long
    // > long long > un long > long > un int > int
    const double pond_area {fish_count * fish_length * fish_factor};
 
    const double pond_diameter {2.0 * std::sqrt(pond_area/pi)};
    
    std::cout << "\nPond diameter required for " << fish_count << " fish is "
        << pond_diameter << " feet.\n";
    
    int a{16}, b{66};
    std::cout << std::setw(5) << a << std::setw(5) << b << std::endl;
    std::cout << std::left << std::setbase(16) << std::setw(6)
        << std::showbase << a << " b = " << std::setw(6) << b << std::endl;
    std::cout << std::setw(10) << a << std::setw(10) << b << std::endl;

    unsigned int x {20u};
    int y {10};
    std::cout << x - y << std::endl;

    return 0;
}
