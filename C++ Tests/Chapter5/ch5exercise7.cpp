//
//  ch5exercise7.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/09/18.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <array>

int ch5exercise7() {
    // store sequence of items related to products
    // must store a product number, quantity, and unit price
    // use three array-like sequences to store
    std::vector<float> unit_price;
    std::vector<int> unit_quantity;
    std::vector<int> unit_number;
    
    // product #1001 quantity is 25 and $9.95
    unit_number.push_back(1001);
    unit_quantity.push_back(25);
    unit_price.push_back(9.95);
    
    // product #1002
    unit_number.push_back(1002);
    unit_quantity.push_back(101);
    unit_price.push_back(24.95);
    
    // product #1003
    unit_number.push_back(1003);
    unit_quantity.push_back(8);
    unit_price.push_back(109.95);

    float total_cost {0.00f};
    
    // output each product on separate line & include total cost
    for(int i {0}; i < unit_number.size(); ++i) {
        std::cout << std::right << unit_number[i]
        << "   #" << setw(6) << unit_quantity[i]
            << "   $" << std::setw(6) << unit_price[i]
        << "  " << std::setw(8) << (unit_quantity[i] * unit_price[i]) << std::endl;
        
        total_cost += unit_quantity[i] * unit_price[i];
    }
    
    std::cout << "----------------------------------" << std::endl;
    std::cout << std::setw(28) << std::right << "$" << total_cost << std::endl;
    
    // last line outputs total of all items
    return 0;
}
