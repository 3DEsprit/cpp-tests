//
//  ch2exercise1.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/08/22.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include "ch2exercise1.hpp"

using namespace std;

int ch2exercise1() {
    int radius;
    const double pi { 3.141592653589793238 };

    // compute area of circle
    // prompt for radius
    cout << "Enter radius of circle: " << endl;
    cin >> radius;

    // calc area with input to determine area
    double area = pi * static_cast<double>(radius * radius);

    // display result
    cout << "Area: " << area << endl;
    
    return 0;
}

