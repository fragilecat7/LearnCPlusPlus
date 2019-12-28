//
// Created by Peter Hornsby on 12/13/19.
//

#include "../Chapter.h"
#include <string>

#ifndef LEARNCPLUSPLUS_CHAPTER3_H
#define LEARNCPLUSPLUS_CHAPTER3_H

namespace pjh {

}

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
    void mile_to_kilometer();

    void silly_names_that_break_it();
    void operate_on();
    void operate_on_double();
    void numerical_sequence();
    void string_sequence();
    void odd_or_even();
    void words_to_numbers();
    void operation_first_operands_second();
    void counting_pennies();
};

#endif //LEARNCPLUSPLUS_CHAPTER3_H
