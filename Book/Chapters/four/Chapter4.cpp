//
// Created by phornsby on 12/28/19.
//

#include "Chapter4.h"
#include <iomanip>

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
    std::cout << "\nWelcome to Cheap & Cheerful's Metric Conversion Tool!\n";
    std::cout << "Please enter a length followed by a unit (c or i): ";
    constexpr double cm_per_inch = 2.54;
    double length = 1;
    char unit = 0;

    std::cin >> length >> unit;

    if (unit == 'i') {
        std::cout << length << "in == " << cm_per_inch * length << "cm\n";
    } else if (unit == 'c') {
        std::cout << length << "cm == " << length / cm_per_inch << "in\n";
    } else {
        std::cout << "We'll leave you with that one..." << "\n";
    }
}


void Chapter4::currency_conversion() {

    std::string index = "yen = y\nkroner = k\npound = p\ndollar = d";

    std::cout << "\nWelcome to Cheap & Cheerful's Currency Exchange!\n";
    std::cout << index << '\n';
    std::cout << "Please enter the amount followed by the currency's code (y, k, p): ";


    double from_amount = 0;
    char from_unit = 0;
    std::cin >> from_amount >> from_unit;


    while (from_unit != 'y' && from_unit != 'k' && from_unit != 'p') {
        std::cout << "\nPlease enter the amount followed by the currency's code (y, k, p): ";
        std::cin >> from_unit;
    }

    if (from_unit == 'y') {
        std::cout << "You would like to convert " << from_amount << " yen to dollars." << '\n';
    } else if (from_unit == 'k') {
        std::cout << "You would like to convert " << from_amount << " kroner to dollars." << '\n';
    } else if (from_unit == 'p') {
        std::cout << "You would like to convert " << from_amount << " pound to dollars." << '\n';
    }  else {
        std::cout << "We are a small exchange and that is is all we deal with, yen, kroner, pound!" << "\n";
        return;
    }

    // pjh: source google.com
    double yen_to_dollar_rate = 109.45;
    double kroner_to_dollar_rate = 8.82;
    double pound_to_dollar_rate = 0.76;

    if (from_unit == 'y') {
        std::cout << "You have " << std::fixed << std::setprecision(2) << from_amount /
        yen_to_dollar_rate  << " dollars!" << '\n';
    } else if (from_unit == 'k') {
        std::cout << "You have " << std::fixed << std::setprecision(2) << from_amount / kroner_to_dollar_rate << " dollars!" << '\n';
    } else if (from_unit == 'p') {
        std::cout << "You have " << std::fixed << std::setprecision(2) <<  from_amount / pound_to_dollar_rate  << " dollars!" << '\n';
    } else {
        std::cout << "We are a small exchange and that is all we deal with, goodbye sir!" << "\n";
    }
}