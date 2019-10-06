//
//  ch6notes.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/09/21.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>
#include <iomanip>
#include <array>
#include <memory>
#include <vector>
#include <cctype>

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
    
    // free store initialization
    double* pvalue {};
    pvalue = new double; // return free store memory address
    
    *pvalue = 3.14;
    
    // allocate and initialize
    pvalue = new double { 3.14 };
    
    // allocate initialize and add pointer
    double* _pvalue2 { new double {3.14} };
    
    // allocate initialize and point to double with 0.0
    double* _pvalue3 { new double {} };
    
    // release a value
    delete pvalue;
    
    // delete leaves a dangling pointer so reset
    pvalue = nullptr;
    
    // dynamic allocation of arrays
    double* data {new double[100]};
    int* _one_two_three{new int[3] {1, 2, 3}};
    float* _fdata{new float[20] {.1f, .2f}};
//    int* one_two_three {new int[] {1, 2, 3}}; // won't work
    
    // remove array from free store
    delete[] data;
    data = nullptr;
    
    // allocate vector in free store
//    auto* pdata {new std::vector<int>()};
    
    // or better yet
    std::vector<int> vec_data;
    auto* pdata = &vec_data;
    
    // add data with defreference
    (*pdata).push_back(66);
    
    // another way of doing the above using
    // a indirect member selection operator
    // aka arrow operator
    pdata->push_back(63);
    
    // compiler cannot distinguish between these two
    int* _single_int{ new int{ 123} };
    int* _array_of_ints{ new int[123] };
    
    // so when deleting this will work
    // and cause a possible leak
//    delete[] _single_int;
//    delete _array_of_ints;
    
    // what should be done
    delete _single_int;
    delete[] _array_of_ints;
    
    // smart pointers
    
    // unique_ptr<T>
    // old style
    std::unique_ptr<double> _pdata {new double{999.0}};
    
    // C++ 14+ style with type
    std::unique_ptr<double> _pdata2 { std::make_unique<double>(999.0) };
    // or
    auto pdata3 { std::make_unique<double>(999.0) };
    
    // no longer need to worry about deleting free store
    *pdata3 = 8888.0;
    std::cout << *pdata3 << std::endl;
    
    // get address with get function
    std::cout << std::hex << std::showbase << pdata3.get() << std::endl;
    
    // unique to array
    const size_t n { 100 };
    // pre C++ 14
    std::unique_ptr<double[]> _pvalues { new double[n]};
    // C++ 14+
    auto _pvalues2{ std::make_unique<double[]>(n) };
    
    // reset the pointer
    _pdata.reset();
    _pvalues2.reset();
    
    // unique with nullptr
    std::unique_ptr<int> _empty_value;
    std::unique_ptr<int> _empty_value2 {};
    std::unique_ptr<int> _empty_value3 {nullptr};
    
    // change smart ptr into raw ptr
    int* leak = _empty_value.release();
    
    delete leak;
    
    // shared_ptr<T>
    std::shared_ptr<double> _shr_pdata { new double{999.0} };
    
    // can dereference
    *_shr_pdata = 8888.0;
    std::cout << *_shr_pdata << std::endl;
    
    // more efficient
    auto _shr_data { std::make_shared<double>(999.0) };
    
    std::shared_ptr<double> _shr_data2 {_shr_data};
    
    std::shared_ptr<double> _shr_data3;
    _shr_data3 = _shr_data; // copy pointer
    std::cout << *pdata3 << std::endl;
    
    // weak_ptr<T>
    
    // references
    double d_data = 50.0f;
//    double* raw_data = &d_data;
    // create a reference variable that acts
    // like an alias to the value
    double& rdata {d_data};
    
    rdata += 2.5;
    
    std::cout << rdata << std::endl;
    
    double* rdata1 {&rdata};  // 2 pointers to the address
    double* rdata2 {&d_data}; // rdata2 == rdata1
    
    // how to add to the value
    *rdata1 += 2.5;
    
    std::cout << rdata << std::endl;
    
    // dual-reference pointer
    double other_data = 5.0;
    rdata = other_data; // assign value of other_data to d_data (through rdata1 and rdata)
    
    d_data = other_data; // assign the value of other to d_data (directly)
    
    rdata1 = &other_data; // make rdata1 point to other_data
    
    double* const rdata3 {&d_data}; // const pointer containing the addr of d_data
    
    // see that both values reference the same value but have different referenced addresses
    std::cout << d_data << " " << &d_data << " " << *rdata1 << " " << &rdata1 << std::endl;
    
    // const references similar to "const" pointer-to-const
    const double& const_ref { d_data };
    
//    const_ref *= 2; // illegal attempt to modify data through reference-to-const
    
    // range based for loops using references
    double temperatures[] { 45.5, 50.0, 48.2, 57.0, 63.8 };
    const double F2C {5.0/9.0};
    
    // unlike non-referenced loop variables, which makes a copy of the value
    // the reference allows you to access and modify the element value
    for (auto& t : temperatures) {
        t = (t - 32.0) * F2C;
    }
    
    // less terse but shows this ability
    for(auto& t : temperatures) {
        t -= 32.0;
        t *= F2C;
    }
    
    return 0;
}
