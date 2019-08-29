//
//  ch3exercise2.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/08/24.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>
#include <cmath>

int ch3exercise2() {
    std::cout << R"(
    calculate how many sqaure boxes can fit
    in a single layer of a rectangular shelf
    with no overhang 🧰)" << std::endl;

    // use double for length/width of shelf
    double shelf_width;
    double shelf_length;
    long shelf_area;
    
    // int const for feet_to_inches
    const int feet_to_inches {12};
    // int for the box length ^ 3
    int box_length {};
    short box_area {};
    short box_total {};

    // gather input for the following
    // dimension of shelf in ft
    std::cout << "\nEnter Shelf Dimension Length (Ft): ";
    std::cin >> shelf_length;

    std::cout << "\nEnter Shelf Dimension Width (Ft): ";
    std::cin >> shelf_width;
    
    // dimension of side of box in inches
    std::cout << "\nEnter length for a square box in inches: ";
    std::cin >> box_length;

    // calc the number of boxes the shelf can hold
    shelf_width *= feet_to_inches;
    shelf_length *= feet_to_inches;
    box_area = std::pow(box_length, 2);
    
    // on single layer of type long
    shelf_area = shelf_width * shelf_length;
    box_total = static_cast<short>(shelf_area / box_area);

    // output result
    std::cout << "Box Total: " << box_total << std::endl;
    
    return 0;
}
