//
// Created by Peter Hornsby on 12/13/19.
//
#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>
#include <vector>

#include "Chapter3.h"

std::string collect_output_name_age() {
    std::cout << "Please enter your first name and age:\n";
    std::string first_name = "???";
    int age = 0;

    std::cin >> first_name;
    std::cin >> age;
    return "Hello " + first_name + " (age: " + std::to_string(age) + ")";
}

std::string collect_output_name_age_in_months() {
    std::cout << "Please enter your first name and age:\n";
    std::string first_name = "???";
    double age = 0;

    std::cin >> first_name;
    std::cin >> age;
    age = 12 * age;

    return "Hello " + first_name + " (age: " + std::to_string(age).substr(0, std::to_string(age).find(".")+3) + " months)";
}


void output_first_second_names() {
    std::cout << "Please enter your first and second names:\n";
    std::string first = "???";
    std::string second = "???";

    std::cin >> first >> second;
    std::string name = first + ' ' + second;

    std::cout << "Hello, " + name << '\n';
}


void output_first_second_names_with_string_comparison() {
    std::cout << "Please enter two names names:\n";
    std::string first = "???";
    std::string second = "???";

    std::cin >> first >> second;
    if (first == second) std::cout << "That's the same name twice!\n";
    if (first < second) std::cout << first << " is alphabetically before " << second << '\n';
    if (first > second) std::cout << first << " is alphabetically after " << second << '\n';
}


void output_repeated_words() {
    int number_of_words = 0;
    std::string previous = "";
    std::string current;

    while (std::cin >> current) {
        ++number_of_words;
        if (previous == current)
            std::cout << "Word number: " << number_of_words << " repeated word: " << current << '\n';

        previous = current;
    }
}

void exercise_operators() {
    std::cout << "Please enter a floating point value: ";
    double n;
    std::cin >> n;
    std::cout << "n has been read as a double:  " << n
                << "n == " << n
                << "\nn+1 == " << n + 1
                << "\nthree times n == " << 3 * n
                << "\ntwice n == " << n + n
                << "\nn squared == " << n * n
                << "\nhalf of n == " << n / 2
                << "\nsquare root of n == " << sqrt(n)
                << '\n';
}

void exercise_int_operators() {
    std::cout << "Please enter a integer value: ";
    int n;
    std::cin >> n;
    std::cout << "n has been read as an int:  " << n
                << "n == " << n
                << "\nn+1 == " << n + 1
                << "\nthree times n == " << 3 * n
                << "\ntwice n == " << n + n
                << "\nn squared == " << n * n
                << "\nmodulo of n == " << n % 2
                << "\nDivision of n by 2 == " << n / 2
                << "\nsquare root of n == " << sqrt(n)
                << '\n';
}


void output_types_and_objects_list() {
    std::vector<std::string> list {"A 'type' defines a set of possible values and a set of operations (for an object) ",
                                        "A 'object' is some memory that holds a value of a given 'type'",
                                        "A 'value' is a set of bits in memory interpreted according to a 'type'",
                                        "A 'variable' is a named `object`",
                                        "A 'declaration' is a statement that givens a name to an 'object'",
                                        "A 'definition' is a 'declaration' that sets aside memory for an 'object'"};

    std::cout << "\n3.8 Types and objects" << std::endl;
    for (std::vector<std::string>::iterator it = list.begin() ; it != list.end(); ++it)
        std::cout << '\n' << *it;
    std::cout << "\n\n";
}


void output_narrowing_conversions() {
    double d = 0;
    while (std::cin >> d) {
        int i = d;
        char c = i;
        int i2 = c;

        std::cout  << "d == " << d
                    << "\ni == " << i
                    << "\ni2 == " << i2
                    << "\nchar(" << c << ")\n";
    }
}


void make_form_letter() {
    std::cout << "Welcome to  Cheap & Cheerful Form letter Productions!";
    std::cout << "\nPlease enter the name of the person you want to write to: ";
    std::string first_name;
    std::cin >> first_name;

    std::cout << "\nDear, " << first_name << "\nThis is our basic form letter, not the best but CHEAP" <<"\n";

}