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


void exercise_operators() {
    std::cout << "Please enter a floating point value: ";
    double n;
    std::cin >> n;
    std::cout << "n == " << n
                << "\nn+1 == " << n + 1
                << "\nthree times n == " << 3 * n
                << "\ntwice n == " << n + n
                << "\nn squared == " << n * n
                << "\nhalf of n == " << n / 2
                << "\nsquare root of n == " << sqrt(n)
                << '\n';
}