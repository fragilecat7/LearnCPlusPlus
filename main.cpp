//#include "std_lib_facilities.h"
#include "Book/Book.h"




int main() {
    std::cout << "Hello, World!\n ...and welcome Pete :)" << std::endl;

    std::string test = "a test string";
    int test_int = 7;

    // Chapter 2: Hello World!
    Chapter2 chapter2;
    chapter2.output();

    // Chapter 3: Objects, Types, and Values
    Chapter3 chapter3;
    //chapter3.output();
    chapter3.output_types_and_objects_list();
    //chapter3.make_form_letter();
    //chapter3.exercise_operators();
    //chapter3.mile_to_kilometer();
    //chapter3.operate_on_double();
    //chapter3.numerical_sequence();
    //chapter3.string_sequence();
    //chapter3.odd_or_even();
    //chapter3.words_to_numbers();
    //chapter3.operation_first_operands_second();
    //chapter3.counting_pennies();


    // Chapter 4: Computation
    Chapter4 chapter4;
    //chapter4.inch_centimeter_conversion();
    //chapter4.currency_conversion();
    //chapter4.inch_centimeter_conversion_using_switch();
    //chapter4.first_program();
    //chapter4.char_loop();
    //std::cout << "Okay, use that function,baby!!\nTHe square of 7 is: " << chapter4.square(7) << '\n';
    //std::cout << "Okay, use that function,baby!!\nTHe square of 9 is: " << chapter4.square(9) << '\n';
    chapter4.play_with_numbers();


    // The End
    std::string s = "Goodbye, cruel world!";
    std::cout << s << '\n';

    return 0;
}


