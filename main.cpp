#include "std_lib_facilities.h"
#include "Chapters/Chapter2.h"
#include "Chapters/Chapter3.h"




int main() {
    std::cout << "Hello, World!\n ...and welcome Pete :)" << std::endl;

    // Chapter 2
    // output_chapter2();

    // Chapter 3
    //cout << collect_output_name_age() << "!\n";
    std::cout.precision(2);
    std::cout << collect_output_name_age_in_months() << "!\n";
    return 0;
}


