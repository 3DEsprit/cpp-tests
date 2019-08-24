//
//  ch2exercise5.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/08/22.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include "ch2exercise5.hpp"

using namespace std;

int ch2exercise5() {
    // calculate BMI
    float weight, weight_kg;
    float body_feet, body_inches;
    float height;
    float kg {2.2f};
    float foot_to_inches {12};
    float foot_to_meter {0.3049f};
    
    // input for weight in lbs
    cout << "Input weight in pounds: " << endl;
    cin >> weight;
    // input for height in feet/inches
    cout << "Input body height in feet and inches: " << endl;
    cin >> body_feet >> body_inches;
    
    // convert weight to kilograms (1lbs = 2.2kg)
    weight_kg = weight * kg;
    
    // convert height to meters (foot = 0.3048m)
    height = body_feet + body_inches / foot_to_inches;
    cout << "Height in m: " << height * foot_to_meter << endl;
    
    cout << "Sqrt of height: " << height << " is " << sqrt(height) << endl;
    
    // calc bmi using w / (h^2)
    double bmi = weight / sqrt(height);
    
    cout << "BMI: " << bmi << endl;
    return 0;
}
