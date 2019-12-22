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
    std::vector<std::string> questions;

    std::vector<std::string> questions1;
    std::vector<std::string> answers;
    std::vector<std::string> items;

    Chapter();

    virtual void output();

    virtual ~Chapter();
};


#endif //LEARNCPLUSPLUS_CHAPTER_H
