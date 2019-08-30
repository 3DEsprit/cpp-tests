//
//  ch4example5.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/08/30.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>
#include <iostream>

int ch4example5() {
    int age {};
    int income {};
    int balance {};
    
    std::cout << "Please enter your age in years: ";
    std::cin >> age;
    
    std::cout << "Please enter your annual income in dollars: ";
    std::cin >> income;
    
    std::cout << "What is your current account balance in dollars: ";
    std::cin >> balance;
    
    if(age >= 21 && (income > 25'000 || balance > 100'000)) {
        int loan {};
        if(2*income < balance / 2) {
            loan = 2 * income;
        } else {
            loan = balance / 2;
        }
        std::cout << "\nYou can borrow up to $" << loan << std::endl;
    } else {
        std::cout << "\nUnfortunately, you don't qualify for a loan." << std::endl;
    }
    
    return 0;
}
