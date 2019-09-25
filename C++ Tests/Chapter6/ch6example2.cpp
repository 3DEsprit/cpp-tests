//
//  ch6example2.cpp
//  C++ Tests
//  Deferencing Pointers
//  Calculates the purchase price for a given quantity of items
//
//  Created by Dennis on 2019/09/25.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <iomanip>

int ch6example2() {
    int unit_price {295};
    int count {};
    int discount_threshold {25};
    double discount {0.07};
    
    int* pcount {&count};
    std::cout << "Enter the number of items you want: ";
    std::cin >> *pcount;
    std::cout << "The unit price is " << std::fixed << std::setprecision(2)
        << "$" << unit_price/100.0 << std::endl;
    
    // calculate gross price
    int* punit_price{ &unit_price };
    int price{ *pcount * *punit_price };
    auto* pprice {&price};
    
    // Calculates net price in US $
    double net_price {};
    double* pnet_price {nullptr};
    pnet_price = &net_price;
    
    if(*pcount > discount_threshold) {
        std::cout << "You qualify for a discount of "
            << static_cast<int>(discount * 100.0) << " percent.\n";
        *pnet_price = price*(1.0 - discount) / 100.0;
    } else {
        net_price = *pprice / 100.0;
    }
    
    std::cout << "The net price for " << *pcount
        << " items is $" << net_price << std::endl;
    
    return 0;
}
