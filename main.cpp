//#include "std_lib_facilities.h"
#include "Book/Book.h"




int main() {
    std::cout << "Hello, World!\n ...and welcome Pete :)" << std::endl;

    std::string test = "a test string";
    int test_int = 7;

    // Chapter 2
    //Chapter2 chapter2;
    //chapter2.output();

    // Chapter 3
    Chapter3 chapter3;
    chapter3.output();
    //chapter3.make_form_letter();
    //chapter3.exercise_operators();
    chapter3.mile_to_kilometer();


    // The End
    std::string s = "Goodbye, cruel world!";
    std::cout << s << '\n';

    return 0;
}


