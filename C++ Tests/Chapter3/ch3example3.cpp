//
//  ch3example3.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/08/24.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>
#include <iostream>

// globals
long count1 {999L};  // global count1
double count2 {3.14}; // global count2
int count3; // global count3 with zero-initialization

int ch3example3() {
    int count1 {10}; // hides global count1
    int count3 {50}; // hides global count3
    
    std::cout << "Value of outer count1  = " << count1 << std::endl;
    std::cout << "Value of global count1 = " << ::count1 << std::endl;
    std::cout << "Value of global count2 = " << count2 << std::endl;
    
    {
        int count1 {20}; // new variable to hide the global count1
        int count2 {30}; // hide global count2 as well
        
        std::cout << "Value of inner count1  = " << count1 << std::endl;
        std::cout << "Value of global count1 = " << ::count1 << std::endl;
        std::cout << "Value of inner count2  = " << count2 << std::endl;
        std::cout << "Value of global count2 = " << ::count2 << std::endl;
        
        count1 = ::count1 + 3; // set inner count1 to global counter1 + 3
        ++::count1; // change global value1
        std::cout << "Value of inner count1  = " << count1 << std::endl;
        std::cout << "Value og global count1 = " << ::count1 << std::endl;
        count3 += count2; // increments outer count3 by inner count2
        
        int count4 {};
    }
    
    // std::cout << count4 << std::endl; // count4 does not exist in this scope
    std::cout << "Value of outer count1  = " << count1 << std::endl;
    std::cout << "Value of outer count3  = " << count3 << std::endl;
    std::cout << "Value of global count3 = " << ::count3 << std::endl;
    std::cout << "Value of global count2 = " << count2 << std::endl;
    
    return 0;
}
