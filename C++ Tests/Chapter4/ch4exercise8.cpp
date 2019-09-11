//
//  ch4exercise8.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/09/03.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>

int ch4exercise8() {
    float amount { };
    
    int fives { 0 };
    int dollars { 0 };
    int quarters { 0 };
    int dimes { 0 };
    int nickels { 0 };
    int pennies { 0 };
    
    // prompt to enter amount of money
    // between 0 and 10 dollars
    std::cout << "Enter amount of money between 0 and 10 dollars: ";
    std::cin >> amount;
    
    if(amount < 0.00f || amount > 10.00) {
        std::cout << "Amount is invalid." << std::endl;
        return 0;
    }
    
    // limit precision in case extra numbers are added
    amount = floor(amount * 100) / 100;

    std::cout << std::fixed << std::setprecision(2) << "Amount: " << amount << "\n" << std::endl;

    float five { 5.0f };
    float dollar { 1.0f };
    float quarter { 0.25f };
    float dime { 0.10f };
    float nickel { 0.05f };
    float penny { 0.01f };

    // determine how many of the following are needed to make the amount

    if(amount >= 5.00f && amount < 10.01f) {
        fives = static_cast<int>(amount / five);
        amount = amount - static_cast<float>(fives * five);
    }

    // dollars
    dollars = static_cast<int>(amount / dollar);
    amount = amount - static_cast<float>(dollars);

    // quarters
    quarters = static_cast<int>(amount / quarter);
    amount = amount - static_cast<float>(quarters) * quarter;

    // dimes
    dimes = static_cast<int>(amount / dime);
    amount = amount - static_cast<float>(dimes) * dime;

    // nickels
    nickels = static_cast<int>(amount / nickel);
    amount = amount - static_cast<float>(nickels) * nickel;

    // pennies
    pennies = static_cast<int>(amount / penny);
    amount = amount - static_cast<float>(pennies) * penny;

    // output result and make sure
    // result is grammatically correct
    // e.g. 1 dime (not dimes)
    std::cout << fives << (fives == 1 ? " Five" : " Fives") << "\n"
        << dollars << (dollars == 1 ? " Dollar" : " Dollars") << "\n"
        << quarters << (quarters == 1 ? " Quarter" : " Quarters") << "\n"
        << dimes << (dimes == 1 ? " Dime" : " Dimes") << "\n"
        << nickels << (nickels == 1 ? " Nickel" : " Nickels") << "\n"
        << pennies << (pennies == 1 ? " Penny" : " Pennies") << "\n" << std::endl;
    return 0;
}
