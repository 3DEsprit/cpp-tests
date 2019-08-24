//
//  math.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/08/20.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include "math.hpp"
#include <iostream>
#include <cmath>

int math() {
    float angle_deg { 60.0f };
    const float pi { 3.14159265f };
    const float pi_degrees { 180.0f };
    float tangent {std::tan(pi * angle_deg/pi_degrees)};
    
    double height {100.0};
    double distance {50.0};
    double angle {std::atan(distance / height)};
    
    double toe_to_tip {distance / std::sin(angle)};
    double toe_to_tip2 {std::sqrt(std::pow(distance,2) + std::pow(height, 2))};
    
    std::cout << "test: " << std::fixed << std::setprecision(2) << height << std::endl;
    return 0;
}
