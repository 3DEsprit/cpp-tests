//
//  ch2exercise2.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/08/22.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include "ch2exercise2.hpp"

int ch2exercise2() {
    long double radius;
    int precision;
    const double pi { 3.141592653589793238 };

    
    cout << "Enter precision amount : " << endl;
    cin >> precision;
    
    // compute area of circle
    // prompt for radius
    cout << "Enter radius of circle: " << endl;
    cin >> radius;
    
    // calc area with input to determine area
    double area = pi * static_cast<double>(radius * radius);

    // allow user to control precision of the result
        // take input to determine number of digits
    // can switch to double-precision floating-point arithmetic
    
    // display result
    cout << "Radius: " << radius << " * "
        << fixed << setprecision(2) << pi << "\nArea: "
        << fixed << setprecision(precision) << area << endl;
    return 0;
}
