//
// Created by Peter Hornsby on 12/13/19.
//

#include "Chapter.h"


#ifndef LEARNCPLUSPLUS_CHAPTER2_H
#define LEARNCPLUSPLUS_CHAPTER2_H
void output_chapter2();

class Chapter2 : public Chapter {

public:
    Chapter2();

    virtual ~Chapter2();

    void output() override;

};

#endif //LEARNCPLUSPLUS_CHAPTER2_H
