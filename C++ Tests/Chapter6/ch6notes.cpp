//
//  ch6notes.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/09/21.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>

int ch6notes() {
    
    // will not compile since not initialized
    long* pnumber {}; // pointer to type long
    
    // above uses address that points to nothing
    // and can be explicity defined as such
    pnumber = {nullptr};
    
    // define one pointer to long and one long variable
    long* ptrnumber {}, number {};
    
    // a clearer iterpretation of the above
    long *ptrnumber2 {}, number2 {};
    
    // actually defining two pointers to long in statement
    long *ptrnum {}, *ptrnum2 {};
    
    // use on other types
    char32_t* char_pointer {};
    
    // address-of operator '&'
    long num {12345L};
    long* pnum {&num};
    
    long height {1454L};
    // can store addr of and variable of type long
    pnum = &height;
    
    // have the compiler set the type
    auto* pmynum {&height};
    
    // indirection operator * (dereference operator)
    // pointer constants
    const char* pstrtest = { "Some String that can be moved" }; // references can still change
    const char* const pstrtest2 = { "Nothing can change!" };
    
    // moving references
    const char* ptest[] {
        "Test1", "Test2", "Test3", "Test4"
    };
    
    std::cout << "1: " << ptest[0] << " 2: " << ptest[1] << std::endl;
    
    auto* temp = ptest[1];
    ptest[1] = ptest[0];
    ptest[0] = temp;
    
    std::cout << "1: " << ptest[0] << " 2: " << ptest[1] << std::endl;
    
    // pointer arithmatic
    int values[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int* pvalues = { values }; // set pointer to point to starting address
    
    // increment address by the byte amount of the type
    pvalues++;
    
    // will return 2 (element 1)
    std::cout << *pvalues << std::endl;
    
    // set to the third element's address (3)
    pvalues = &values[2];
    
    // increment to 4th element
    pvalues += 1;
    
    // reset to first address
    pvalues -= 1 * sizeof(double);
    
    std::cout << *pvalues << std::endl;
    
    // change the address of the starting value
    values[0] = values[1];
    
    std::cout << *pvalues << std::endl;
    
    // add to the actual value
    *pvalues += 1;
    
    std::cout << *pvalues << std::endl;
    
    
    // pointer difference
    int* pnum1 { &values[1] };
    int* pnum2 { &values[5] };
    
    std::ptrdiff_t diff { pnum1 - pnum2 };
    
    // different goes outside the scope of the pointer address
    std::cout << "Diff: " << diff << std::endl;
    
    return 0;
}
