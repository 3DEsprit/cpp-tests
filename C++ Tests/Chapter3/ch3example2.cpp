//
//  ch3example2.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/08/24.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>

int ch3example2() {
    enum class Day { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };
    Day yesterday { Day::Monday }, today { Day::Tuesday }, tomorrow {Day::Wednesday };
    const Day poets_day { Day::Friday };
    
    enum class Punctuation : char { Comma = ',', Exclamation = '!', Question = '?' };
    Punctuation ch{ Punctuation::Comma };
    
    std::cout << "yesterday's value is " << static_cast<int>(yesterday)
        << static_cast<char>(ch) << " but poets_day's is " << static_cast<int>(poets_day)
        << static_cast<char>(Punctuation::Exclamation) << std::endl;
    
    today = Day::Thursday;
    ch = Punctuation::Question;
    tomorrow = poets_day;
    
    std::cout << "Is today's value(" << static_cast<int>(today)
        << ") the same as poets_day(" << static_cast<int>(poets_day)
        << ')' << static_cast<char>(ch) << std::endl;

    // Uncomment for an error
//    ch = tomorrow;
//    tomorrow = Friday;
//    today = 6;
    
    return 0;
}
