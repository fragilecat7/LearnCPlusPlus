//#include "std_lib_facilities.h"
#include "Book/Book.h"




int main() {
    std::cout << "Hello, World!\n ...and welcome Pete :)" << std::endl;

    std::string test = "a test string";
    int test_int = 7;

    // Chapter 2
    Chapter2 chapter2;
    chapter2.output();

    // Chapter 3
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
    chapter3.counting_pennies();
    // The End
    std::string s = "Goodbye, cruel world!";
    std::cout << s << '\n';

    return 0;
}


