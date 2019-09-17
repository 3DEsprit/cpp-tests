//
//  ch5example14.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/09/17.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <array>

int ch5example14() {
    const unsigned min_wt {100};
    const unsigned max_wt {250};
    const unsigned wt_step {10};
    const size_t wt_count {1 + (max_wt - min_wt) / wt_step};
    
    const unsigned min_ht {48};
    const unsigned max_ht {84};
    const unsigned ht_step {2};
    const size_t ht_count {1 + (max_ht - min_ht) / ht_step};
    
    const double lbs_per_kg {2.2};
    const double ins_per_m {39.37};
    std::array<unsigned, wt_count> weight_lbs{};
    std::array<unsigned, ht_count> height_ins{};
    
    // Create weights from 100lbs in steps of 10lbs
    for(size_t i{}, w{ min_wt }; i < wt_count; w += wt_step, ++i) {
        weight_lbs[i] = w;
    }
    
    // Create heights from 48 inches in steps of 2 inches
    for(size_t i {}, h { min_ht }; h <= max_ht; h += ht_step) {
        height_ins.at(i++) = h;
    }
    
    // Output table headings
    std::cout << std::setw(7) << " |";
    for(auto w : weight_lbs)
        std::cout << std::setw(5) << w << " |";
    std::cout << std::endl;
    
    // Output line below headings
    for(size_t i{1}; i < wt_count; ++i) {
        std::cout << "---------";
    }
    std::cout << std::endl;
    
    double bmi {};
    unsigned int feet{};
    unsigned int inches {};
    const unsigned int inches_per_foot {12U};

    for(auto h : height_ins) {
        feet = h / inches_per_foot;
        inches = h % inches_per_foot;
        std::cout << std::setw(2) << feet << "'" << std::setw(2) << inches << '"' << '|';
        std::cout << std::fixed << std::setprecision(1);

        for(auto w : weight_lbs) {
            bmi = h / ins_per_m;
            bmi = (w / lbs_per_kg) / (bmi * bmi);
            std::cout << std::setw(2) << " " << bmi << " |";
        }
        std::cout << std::endl;
    }
    // Output line below table
    for (size_t i {1}; i < wt_count; ++i) {
        std::cout << "---------";
    }
    std::cout << "\nBMI from 18.5 to 24.9 is normal" << std::endl;
    return 0;
}
