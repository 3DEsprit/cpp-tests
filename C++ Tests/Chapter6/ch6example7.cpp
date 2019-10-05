//
//  ch6example7.cpp
//  C++ Tests
//  Using Smart Pointers
//
//  Created by Dennis on 2019/10/04.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <memory>
#include <vector>
#include <cctype>

int ch6example7() {
    std::vector<std::shared_ptr<std::vector<double>>> records; // temp records by day
    size_t day{ 1 };
    
    while(true) {
        // vector to store current day's temperatures created in the free store
        auto day_records{ std::make_shared<std::vector<double>>() };
        records.push_back(day_records);
        
        std::cout << "Enter the temperatures for day " << day++
        << " sepaated by spaces. Enter 1000 to end:\n";
        
        while(true) {
            // Get temperatures for current day
            double t {};
            std::cin >> t;
            if(t == 1000.0) break;
            
            day_records->push_back(t);
        }
        
        std::cout << "Enter another day's temperatures (Y or N)? ";
        char answer{};
        std::cin >> answer;
        if(std::toupper(answer) != 'Y') break;
    }
    
    day = 1;
    
    std::cout << std::fixed << std::setprecision(2) << std::endl;
    
    for(auto record : records) {
        double total{};
        size_t count{};
        
        std::cout << "\n Temperatures for day " << day++ << ":\n";
        for(auto temp : *record) {
            total += temp;
            std::cout << std::setw(6) << temp;
            if(++count % 5 == 0) std::cout << std::endl;
        }
        
        std::cout << "\nAverage temperature: " << total / count << std::endl;
    }
    
    return 0;
}
