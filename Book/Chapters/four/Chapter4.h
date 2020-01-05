//
// Created by phornsby on 12/28/19.
//

#include "../Chapter.h"
#include <string>

#ifndef LEARNCPLUSPLUS_CHAPTER4_H
#define LEARNCPLUSPLUS_CHAPTER4_H


class Chapter4 : public Chapter {

public:
    // constructor
    Chapter4();

    // deconstructor
    virtual ~Chapter4();

    // Chapter's content
    void output() override;

    // Chapter exercises and examples
    void inch_centimeter_conversion();
    void currency_conversion();
    void inch_centimeter_conversion_using_switch();
    void first_program();
    void char_loop();
    int square(int x);
    void using_datastructure();
    void simple_dictionary();
    void play_with_numbers();
    void play_with_numbers_v2();

};


#endif //LEARNCPLUSPLUS_CHAPTER4_H
