//
//  ch3notes.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/08/24.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <iomanip>

int ch3notes() {
    // enumerators
    // enum class Day { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };
    // force the enumurated couter to start at 1 instead of 0
    // enum class Day { Monday = 1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };
    // or reset the counter in between iteration 3-7 Sat-Sun 1-2
    // enum class Day { Monday = 3, Tuesday, Wednesday, Thursday, Friday, Saturday = 1, Sunday };
    // can also set multiple since the value doesn't need to be unique
    enum class Day { Monday = 1, Mon = 1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };
    Day today { Day::Tuesday };
    Day yesterday { Day::Mon };
    
    enum class NewDay {
        Monday,                   Mon = Monday,
        Tuesday = Monday + 2,     Tues = Tuesday,
        Wednesday = Tuesday + 2,  Weds = Wednesday,
        Thursday = Wednesday + 2, Thurs = Thursday,
        Friday = Thursday + 2,    Fri = Friday,
        Saturday = Friday +2,     Sat = Saturday,
        Sunday = Saturday + 2,    Sun = Sunday
    };
    
    std::cout << "Todays is " << static_cast<int>(today) << std::endl;
    
    enum class Punctuation : char { Comma = ',', Exclamation = '!', Question = '?' };
    
    // alias data types
    using BigOnes = unsigned long long;
    // used as replacement for typedef statements
    
    BigOnes mynum {};
    
    // use aliases to make code more readable
    // using Phonebook = std::map<std::shared_prt<Contact>, std::string>;
    // make sure to only use aliases when they can make code more readable
    // and not make it more obscure
    // e.g. using StrPtr = std::shared_ptr<std::string>;
    
    return 0;
}

// C++ Variable Scoping

/*

// global variable
long value1; // zero-initialized

int main() {
    // automatic variable scoped to main
    int value2{};
    
    {
        // automatic variable scoped to block
        int value3();
    }
}

int value4; // global but outside the scope of main()

int function(int) {
    long value5 {};
    // automatic variable which replaces global value1
    // global can still be accessed but only by using
    // a scope resolution operator: ::value1
    int value1 {};
}
*/
