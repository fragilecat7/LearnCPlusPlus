//
// Created by Peter Hornsby on 12/13/19.
//

#include "Chapter.h"
#include <string>

#ifndef LEARNCPLUSPLUS_CHAPTER3_H
#define LEARNCPLUSPLUS_CHAPTER3_H

class Chapter3 : public Chapter {

public:

    // constructor
    Chapter3();

    // decontructor
    virtual ~Chapter3();

    // Chapter's content
    void output() override;

    // Chapter exercises and examples
    std::string collect_output_name_age();
    std::string collect_output_name_age_in_months();
    void output_first_second_names();
    void output_first_second_names_with_string_comparison();

    void output_repeated_words();

    void exercise_operators();
    void exercise_int_operators();

    void output_types_and_objects_list();

    void output_narrowing_conversions();


    void make_form_letter();

};

#endif //LEARNCPLUSPLUS_CHAPTER3_H