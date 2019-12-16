#include "std_lib_facilities.h"
#include "Chapters/Chapter2.h"
#include "Chapters/Chapter3.h"




int main() {
    std::cout << "Hello, World!\n ...and welcome Pete :)" << std::endl;

    string test = "a test string";
    int test_int = 7;

    // Chapter 2
    // output_chapter2();

    // Chapter 3
    //std::cout << collect_output_name_age() << "!\n";
    //std::cout << collect_output_name_age_in_months() << "!\n";
    //output_first_second_names();
    //output_first_second_names_with_string_comparison();
    //output_repeated_words();
    // Operators
    //exercise_operators();
    //exercise_int_operators();

    output_types_and_objects_list();
    output_narrowing_conversions();
    std::string s = "Goodbye, cruel world!";
    std::cout << s << '\n';

    return 0;
}


