//
//  ch4exercise4.cpp
//  C++ Tests
//
//  Created by Dennis on 2019/09/03.
//  Copyright © 2019 Dennis. All rights reserved.
//

#include <stdio.h>

int ch4exercise4() {
    // define int variable age
    int age;
    // char variable for gender (m/f)
    char gender;
    // enumeration type AcademicDegree (none, associate,
    //    bachelor, professional, master, doctor)
    enum AcedemicDegree : int { none = 0, associate = 1, bachelors = 2, professional = 3, masters = 4, doctor = 5 };
    int degree;
    // bool married, speaksHindi, and speaksUrdu
    bool married, speaksHindi, speaksUrdu;

    // emulate trivial online job interview
    // query applicant for input on all variables
    // people who enter invalid values do not qualify
    // rule out asap
    
    // prompt for qualifications
    std::cout << "What is your age? ";
    std::cin >> age;
    
    // check if older than 21,
    // younger than 35
    if(age > 21 && age < 35) {
        
        std::cout << "What is your gender? m/f: ";
        std::cin >> gender;
        
        // is female
        if(gender == 'f') {
            
            std::cout << "Last degree achieved?\n\n"
                << "0 ) none\n"
                << "1 ) Associates\n"
                << "2 ) Bachelors\n"
                << "3 ) Professional\n"
                << "4 ) Masters\n"
                << "5 ) Doctor\n"
                << "\n Answer: ";
            std::cin >> degree;
            
            degree = static_cast<AcedemicDegree>(degree);
            
            // has bachelor's or master's degree
            if(degree == AcedemicDegree::bachelors || degree == AcedemicDegree::masters) {
                
                std::cout << "Are you married?\n"
                    << "0 ) no\n"
                    << "1 ) yes\n\n"
                    << "Answer: ";
                std::cin >> married;
                
                // is unmarried
                if(!married) {
                    
                    std::cout << "Do you speak Hindi?\n"
                        << "0 ) no\n"
                        << "1 ) yes\n\n"
                        << "Answer: ";
                    std::cin >> speaksHindi;
                    
                    std::cout << "Do you speak Urdu?\n"
                        << "0 ) no\n"
                        << "1 ) yes\n\n"
                        << "Answer: ";
                    std::cin >> speaksUrdu;
                    
                    // speaks hindi or urdu
                    if(speaksHindi || speaksUrdu) {
                        std::cout << "You can start tomorrow!" << std::endl;
                    } else {
                        std::cout << "Thank you anyways." << std::endl;
                    }
                } else {
                    std::cout << "Thank you anyways." << std::endl;
                }
            } else {
                std::cout << "Thank you anyways." << std::endl;
            }
        } else {
            std::cout << "Thank you anyways." << std::endl;
        }
    } else {
        std::cout << "Thank you anyways." << std::endl;
    }
    return 0;
}
