//
// Created by phornsby on 12/28/19.
//

#include "Chapter4.h"

Chapter4::Chapter4() {
    std::cout << "Chapter4 Constructor called" << std::endl;
    Chapter4::questions = {"",
                           "",
                           "",
                           ""
                           "",
                           "",
                           "",
                           "",
                           "",
                           "",
                           "",
                           "",
                           ""
                           "",
                           "",
                           "",
                           "",
                           "",
                           "",
                           "",
                           "",
                           "",
                           ""};


    Chapter4::answers =  {"1. ",
                          "2. ",
                          "3.",
                          "4. ",
                          "5.",
                          "6." ,
                          "7. ",
                          "8. '",
                          "9. ",
                          "10. ",
                          "11. "};


    Chapter4::items = {"abstraction",
                       "computation",
                       "conditional statement",
                       "declaration",
                       "definition",
                       "divide and conquer",
                       "else",
                       "expression",
                       "for-statement",
                       "range-for-statement",
                       "function",
                       "if-statement",
                       "increment",
                       "input",
                       "iteration",
                       "loop",
                       "lvalue",
                       "member function",
                       "output",
                       "push_back()",
                       "repetition",
                       "rvalue",
                       "selection",
                       "size()",
                       "sort()",
                       "statement",
                       "switch-statement",
                       "vector",
                       "while-statement"};

}


Chapter4::~Chapter4() {

}



void Chapter4::output() {
    std::cout << "\n\nProgramming Principles and Practice Using C++ \nChapter 4: Computation\n";
    Chapter::output();
}

void Chapter4::inch_centimeter_conversion() {
    std::cout << "\nWelcome to  Cheap & Cheerful's Metric Conversion Tool!\n";
    std::cout << "Please enter a length followed by a unit (c or i): ";
    constexpr double cm_per_inch = 2.54;
    double length = 1;
    char unit = 0;

    std::cin >> length >> unit;

    if (unit == 'i')
        std::cout << length << "in == " << cm_per_inch * length << "cm\n";
    else
        std::cout << length << "in == " << length / cm_per_inch << "cm\n";
}