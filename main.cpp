//#include "std_lib_facilities.h"
#include "Chapters/Chapter.h"
#include "Chapters/Chapter2.h"
#include "Chapters/Chapter3.h"




int main() {
    std::cout << "Hello, World!\n ...and welcome Pete :)" << std::endl;

    std::string test = "a test string";
    int test_int = 7;

    // Chapter 2
    Chapter2 chapter2;
    chapter2.output();

    // Chapter 3
    Chapter3 chapter3;
    chapter3.output();
    chapter3.make_form_letter();


    // The End
    std::string s = "Goodbye, cruel world!";
    std::cout << s << '\n';

    return 0;
}


