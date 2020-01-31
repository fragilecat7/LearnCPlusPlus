//
// Created by phornsby on 12/28/19.
//

#include "Chapter4.h"
#include <iomanip>
#include <cmath>
#include <vector>

Chapter4::Chapter4() {
    std::cout << "Chapter4 Constructor called" << std::endl;
    Chapter4::questions = {"What is a computation?",
                           "What do we mean by inputs and outputs to computation? Give examples.",
                           "What are the three requirements a programmer should keep in mind when expressing computations?",
                           "What does an expression do?"
                           "Waht is the difference between a statement and an expression, as described in this chapter?",
                           "What is an lvalue? List the operators that require an lvalue. why do these operators, and not others require an lvalue?",
                           "What is a constant expression?",
                           "What is a literal?",
                           "What is a symbolic constant and why do we use them?",
                           "What is a magic constant? Give examples",
                           "What are some operators that we use for integers and floating-point values?",
                           "What operators can  be used on integers but not floating-point numbers?",
                           "What are some operators that can be used for strings?"
                           "When would a programmer prefer a switch-statement to an if-statement?",
                           "What are some common problems with the switch-statement?",
                           "What is the function of each part of the header line in a for-loop, and in what sequence are they executed?",
                           "When should the for-loop be used and when should the while-loop be used?",
                           "How do you print the numeric value of a char?",
                           "Describe what the line char foo(int x) means in a function definition",
                           "When should you define a separate function for part of a program? List the reasons.",
                           "What can you do to an int that you cannot do to a string?",
                           "What can you do to an sting that you cannot do to a int?",
                           "What is the index of the third vector?",
                           "How do you write a for-loop that prints every element of a vector?",
                           "What does vector<char> alphabet(26); do?" ,
                           "Describe what push_back() does to a vector?",
                           "What does vector's member size() do?",
                           "What makes vector so popular/useful?",
                           "How do you sort the elements of a vector?"};


    Chapter4::answers =  {"1. The chapter refers to computation as the act of producing output derived from input(s), it's worth noting as the book says `...Today we simply delegate most computations to computers... (s 4.1)",
                          "2. By `inputs` we are referring to means that data can be entered into a program, by many means, camera, software, printer, sensor, etc. The output refers to what is generated from the program given various inputs, for instance  the average yearly car payments given the input of monthly payment amount.",
                          "3. The three requirements to keep  in focus are 1. Correctness, 2. Simplicity and 3. Efficiently. Note the order matters, not much value in efficiently doing it incorrectly, or simply.",
                          "4. An `expression` is the most basic building block of a program and it computes a value from a given number of operands.",
                          "5. The difference between a statement and an expression per the book is a semi-colon (;) and it is used to terminate the expression, ie it makes it an expression statement.",
                          "6. A lvalue is left sided operand of a binary operation, a = 103;, here `a` is the lvalue and 103 is the rvalue. " ,
                          "7. A constant expression is an expression that can only be assigned a value at initialization, C++ uses symbolic constants to implement constant expressions, for example the statement 'constexpr double pi = 3.14;'",
                          "8. A literal is a constant expression",
                          "9. we use a symbolic constant to represent literal and avoid  making it a magic numbers.",
                          "10. A magic constant is a literal value that has meaning within the program that is implicit, for example the book uses the speed of light - 299792458, we are assuming all programmers will recognize it's meaning.",
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

    // pjh: happy to see my friend switch!
    switch (from_unit) {
        case 'y':
            std::cout << "You would like to convert " << from_amount << " yen to dollars." << '\n';
            break;
        case 'k':
            std::cout << "You would like to convert " << from_amount << " kroner to dollars." << '\n';
        case 'p':
            std::cout << "You would like to convert " << from_amount << " pound to dollars." << '\n';
            break;
        default:
            std::cout << "We are a small exchange and that is is all we deal with, yen, kroner, pound!" << "\n";
            std::cout << "We'll leave you with that one..." << "\n";
    }

    // pjh: source google.com
    double yen_to_dollar_rate = 109.45;
    double kroner_to_dollar_rate = 8.82;
    double pound_to_dollar_rate = 0.76;

    switch (from_unit) {
        case 'y':
            std::cout << "You have " << std::fixed << std::setprecision(2) << from_amount / yen_to_dollar_rate  << " dollars!" << '\n';
            break;
        case 'k':
            std::cout << "You have " << std::fixed << std::setprecision(2) << from_amount / kroner_to_dollar_rate << " dollars!" << '\n';
        case 'p':
            std::cout << "You have " << std::fixed << std::setprecision(2) <<  from_amount / pound_to_dollar_rate  << " dollars!" << '\n';
            break;
        default:
            std::cout << "We are a small exchange and that is all we deal with, goodbye sir!" << "\n";
            std::cout << "We'll leave you with that one..." << "\n";
    }


    std::cout << "Did ya catch all the bugs? :)" << '\n';
}

void Chapter4::inch_centimeter_conversion_using_switch() {
    std::cout << "\nWelcome to Cheap & Cheerful's Metric Conversion Tool!\n";
    std::cout << "Please enter a length followed by a unit (c or i): ";
    constexpr double cm_per_inch = 2.54;
    double length = 1;
    char unit = 0;

    std::cin >> length >> unit;

    switch (unit) {
        case 'i':
            std::cout << length << "in == " << cm_per_inch * length << "cm\n";
            break;
        case 'c':
            std::cout << length << "cm == " << length / cm_per_inch << "in\n";
            break;
        default:
            std::cout << "We'll leave you with that one..." << "\n";
    }
}


void Chapter4::first_program() {
    // pjh: David Wheeler, May 6th, England

    int i = 0;
    while (i < 100) {
        std::cout << i << '\t' << std::pow(i, 2) << '\n';
        ++i;
    }
}

void Chapter4::char_loop() {
    // pjh: David Wheeler, May 6th, England

    for (int j = 0; j < 26; ++j) {
        char character = char('a' + j);
        int integer = character;
        std::cout << character << '\t' << integer << '\n';
    }

//    int i = 0;
//    while (i < 26) {
//        char character = char('a' + i);
//        int integer = character;
//        std::cout << character << '\t' << integer << '\n';
//        ++i;
//    }
}

int Chapter4::square(int x) {

    int result = 0;
    for (int i = 0; i < x; ++i) {
        result += x;
    }

    return result;
    //return x * x;
}

void Chapter4::play_with_numbers() {
    double input;
    double smallest = 0;
    double largest = 0;
    while (true) {
        std::cin.clear();
        std::cout << "Please enter a double value: ";
        std::cin >> input;
        if (std::cin.fail()) {
            std::cin.clear();
            std::string incorrect_value;
            std::cin >> incorrect_value;
            if (incorrect_value == "|") {
                break;
            } else {
                std::cout << "incorrect_value: " << incorrect_value << '\n';
            }
        }

        if (smallest == 0 && largest == 0) {
            smallest = largest = input;
        }

        std::cout << "You enter the number " << input;
        if (input > largest) {
            largest = input;
            std::cout << ", the largest number so far!" << '\n';
        } else if (input < smallest) {
            smallest = input;
            std::cout << ", the smallest number so far!" << '\n';
        } else {
            std::cout << "." << '\n';
        }

    }
}


void Chapter4::play_with_numbers_v2() {

    double value;
    std::string input;
    std::string raw = "";
    std::string unit = "";
    std::vector<double> values;
    double smallest = 0;
    double largest = 0;
    double sum_of_values = 0;
    double converted_value = 1;
    const std::string largestunit = "m";
    const std::string smallestunit = "m";


    while (true) {
        // pjh: keep program running
        std::cout << "\nPlease enter a number with a unit(cm, m, in, ft): ";
        std::cin >> input;

        for (int i = 0; i < input.size(); ++i) {
            char c = input.at(i);
            if (std::isdigit(c) || c == '.') {
                raw += c;

            } else if (std::isalpha(c)) {
                unit += c;
            }

            if (c == '|') {
                std::cout << "\nExiting the program... \n";
                return;
            }
        }

        if (unit.empty()) {
            std::cin >> unit;
            std::cout << "new value for units " << unit << '\n';
        }

        if (unit != "cm" && unit != "m" && unit != "in" && unit != "ft") {
            std::cout << "I am confused ?? Invalid unit."  << '\n';
            input = "";
            raw = "";
            unit = "";
            continue;
        }

        std::cout << "You have entered: " << raw << " with " << " units of " << unit << '\n';
        value = std::stod(raw);

        // Meter is our unit of choice
        if (unit == "m") {
            converted_value = value;
        } else if (unit == "cm") {
            converted_value = value / 100;

        } else if (unit == "ft") {
            converted_value = ((value * 12) * 2.54) / 100;

        } else if (unit == "in") {
            converted_value = (value * 2.54) / 100;
        }



        if (smallest == 0 && largest == 0) {
            smallest = largest = converted_value;
        }

        std::cout << "You enter the number " << value;
        if (converted_value > largest) {
            largest = converted_value;
            std::cout << ", with unit " <<  unit << "it's the largest number so far!" << '\n';
        } else if (converted_value < smallest) {
            smallest = converted_value;
            if (values.size() > 1) {
                std::cout << ", with unit " <<  unit << "it's the smallest number so far!" << '\n';
            }
        } else {
            std::cout << ", with unit " << unit << ".\n";
        }
        sum_of_values += converted_value;
        values.push_back(converted_value);

        // pjh: report our deeds
        std::cout << "The total number of inputs is: " << values.size() << ".\n";
        std::cout << "The largest value is: " << largest << "(m).\n";
        std::cout << "The smallest value is: " << smallest << "(m).\n";
        std::cout << "The sum of all the values is: " << sum_of_values << "(m).\n\n";

        std::sort(values.begin(), values.end());
        std::cout << "Values: ";
        for(double value: values) {
            std::cout << value << ", ";
        }

        std::cout << '\n';

        // pjh: clear for next iteration
        input = "";
        raw = "";
        unit = "";
        converted_value = 0;
    }

}

void Chapter4::median_temp() {
    std::vector<double> temps;
    std::cout << "Please enter the temps in your data set: " << '\n';
    for(double temp; std::cin >> temp;)
        temps.push_back(temp);

    // mean temperature
    double sum = 0;
    for(double x : temps) sum += x;
    std::cout << "Average temperature: " << sum / temps.size() << '\n';

    if (temps.size() == 1) {
        std::cout << "There is only one entry, dataset is pretty small!!";
    }

    // median temperature
    std::sort(temps.begin(), temps.end());
    if (temps.size() % 2 == 1) {
        std::cout << "Median Temperature: " << temps[temps.size() / 2] << '\n';
    } else if (temps.size() >= 3) {

        std::cout << "-1: " << temps[(temps.size() / 2) - 1] << " +1: " << temps[(temps.size() / 2)] << '\n';
        double median = (temps[(temps.size() / 2) - 1] + temps[(temps.size() / 2)]) / 2;
        std::cout << "Median Temperature: " << median << '\n';

    }


}


void Chapter4::simple_dictionary() {
    std::cout << "Please enter the words for this dictionary: " << '\n';

    std::vector<std::string> words;
    for(std::string temp; std::cin >> temp;) {
        words.push_back(temp);
        if (temp == "end") { break; }
    }


    std::cout << "Number of words: " << words.size() << '\n';
    std::sort(words.begin(), words.end());

    for (int i = 0; i < words.size(); ++i) {
        if (i == 0 || words[i-1] != words[i])
            std::cout << words[i] << ',';
    }
}


void Chapter4::city_distances() {
    std::string input = "";
    std::string raw = "";
    std::vector<double> distances;
    double distance;
    double smallest_distance = 0;
    double greatest_distance = 0;
    double sum_distance = 0;


    while (true) {
        // pjh: keep program running
        std::cout << "\nPlease enter the distance between the two cities (miles):  ";
        std::cin >> input;

        for (int i = 0; i < input.size(); ++i) {
            char c = input.at(i);
            if (std::isdigit(c) || c == '.') {
                raw += c;
            }

            if (c == '|') {
                std::cout << "\nExiting the program... \n";

                return;
            }
        }

        std::cout << '\n';
        std::cout << "You have entered: " << raw << " mile(s)" << '\n';
        distance = std::stod(raw);
        sum_distance += distance;
        distances.push_back(distance);

        std::cout << "Distances: ";
        for(double mileage: distances) {
            std::cout << mileage << ", ";
        }

        std::cout << '\n';

        // pjh: clear
        distance = 0;
        raw = "";

    }
}