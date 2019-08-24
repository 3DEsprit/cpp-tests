//
//  ch2exercise6.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/08/22.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include "ch2exercise6.hpp"

using namespace std;

int ch2exercise6() {
    // input 2 int values
    int value1, value2;
    
    cout << "Input two values: " << endl;

    cin >> value1 >> value2;
    
    cout << "Which value is greater? " << value1
        << " or " << value2 << "?" << endl;

    // determine which is the greater value
    // only use operators taught in ch1-2
    int greater = value1|value2;
    cout << "Greater: " << greater << endl;
    
    return 0;
}
