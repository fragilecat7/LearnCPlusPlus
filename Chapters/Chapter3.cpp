//
// Created by Peter Hornsby on 12/13/19.
//
#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>

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