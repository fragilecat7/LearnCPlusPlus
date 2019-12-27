//
// Created by phornsby on 12/22/19.
//

#ifndef LEARNCPLUSPLUS_CHAPTER_H
#define LEARNCPLUSPLUS_CHAPTER_H

#include <iostream>
#include <string>
#include <vector>

class Chapter {

public:

    // Chapter end questions
    std::vector<std::string> questions;
    std::vector<std::string> answers;
    std::vector<std::string> items;

    // constructor
    Chapter();

    //deconstructor
    virtual ~Chapter();

    // For subclasses
    virtual void output();
};


#endif //LEARNCPLUSPLUS_CHAPTER_H
