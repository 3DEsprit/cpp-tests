//
//  ch4example6.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/08/30.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>

int ch4example6() {
    int mice {};
    int brown {};
    int white {};
    
    std::cout << "How many brown mice do you have? ";
    std::cin >> brown;
    std::cout << "How many white mice do you have? ";
    std::cin >> white;
    
    mice = brown + white;
    
    std::cout << "You have " << mice << (mice == 1 ? " mouse" : " mice") << " in total." << std::endl;
    
    return 0;
}
