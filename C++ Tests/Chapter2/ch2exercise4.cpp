//
//  ch2exercise4.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/08/22.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include "ch2exercise4.hpp"

using namespace std;

int ch2exercise4() {
    // calculate height of an object
    const double pi { 3.141592653589793238 };
    int inches_per_foot { 12 };
    double distance_feet, distance_inches, distance_total;
    int sight_height;
    double height;
    double sight_angle;
    double object_height;
    int height_feet, height_inches;
    
    // input for distance in feet/inches
    cout << "Input Distance in Feet then Inches: " << endl;
    cin >> distance_feet >> distance_inches;
    
    // input for height of sight line in inches
    cout << "Input height of sight line in inches: " << endl;
    cin >> sight_height;
    
    height = static_cast<double>(sight_height / inches_per_foot);
    
    distance_total = distance_feet + distance_inches / 12;
    
    // input for angle of position and sight
    cout << "Input angle of sight line to top of object: " << endl;
    cin >> sight_angle;
    
    // determine hieght of object with h + d*tan(angle)
//    cout << "Tangent of " << sight_angle << " is: "
//        << tan(sight_angle * pi / 180) << endl;
    object_height = height + distance_feet * tan(sight_angle * pi / 180);
    height_feet = static_cast<int>(object_height);
    height_inches = static_cast<int>(object_height / inches_per_foot);

    cout << "\nObject height is " << height_feet << " Ft and "
        << height_inches << " In. " << endl;

    return 0;
}
