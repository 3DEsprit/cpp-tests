
//
//  ch2exercise3.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/08/22.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include "ch2exercise3.hpp"

using namespace std;

int ch2exercise3() {
    // convert inches to feet and inches
    int total_inches, total_feet, extra_inches;
    int foot {12};
    
    // take input for total inches
    cout << "Enter total inches to convert: " << endl;
    cin >> total_inches;
    
    // return result in feet/inches
    total_feet = total_inches / foot;
    extra_inches = total_inches % foot;
    
    // 77 inches should return 6 feet 5 inches
    cout << total_feet << " Ft " << extra_inches << " Inches." << endl;
    
    return 0;
}
