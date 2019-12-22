//
// Created by Peter Hornsby on 12/13/19.
//
#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>
#include <vector>

#include "Chapter3.h"

std::vector<std::string> questions3 {"What is meant by the term prompt?",
                                    "Which operator do you use to read into a variable?",
                                    "If you want the user to input an integer value into your program for a variable named 'number', what are two lines of code you could write to ask the user to do it and to input the value into your pprogram?",
                                    "What is '\\n' called and what purpose does it serve?\n"
                                    "What terminates input into a string?",
                                    "What terminates input into an integer?",
                                    "How would you write the following code as one line?\n 'cout<<\"Hello, \"\n;cout<<first_name;\ncout<<'\n';'",
                                    "What is an object?",
                                    "What is a literal?",
                                    "What kinds of literals are there?",
                                    "What is a variable?",
                                    "What are tyical sizes for a char, an int and a double?",
                                    "What measures do we use for the size of small entities in memory, usch as int's and strings?"
                                    "What is the difference between = and ==?",
                                    "What is a definitation?",
                                    "What is initialization and does it differ from assignment?",
                                    "What is string concatenation and how do you make it work in C++?",
                                    "Which of the following are legal names in C++? If a name is not legal, why not?\nThis_little_pig, This_1_is_fine, 2_For_1_special, latest thing, the_$12_method, _this_is_ok, MiniMineMine, number, correct?",
                                    "Give five examples of legal names that you shouldn't use because they are likely to cause confusion",
                                    "What are some good rules for choosing names?",
                                    "What is type safety and why is it important?",
                                    "Why can conversion from double to int be a bad thing?",
                                    "Define a rule to help decide if a conversion from one type to another is safe or unsafe"};


void output_chapter3() {

    std::cout << "\nChapter 3 Questions" << std::endl;
    for (std::vector<std::string>::iterator it = questions3.begin() ; it != questions3.end(); ++it)
        std::cout << '\n' << *it;
    std::cout << "\n\n";

//    std::cout << "\nAnswers" << std::endl;
//    for (std::vector<std::string>::iterator it = answers.begin() ; it != answers.end(); ++it)
//        std::cout << '\n' << *it;
//    std::cout << "\n\n";
//
//    std::cout << "\nItems you should know about :)" << std::endl;
//    for (std::vector<std::string>::iterator it = items.begin() ; it != items.end(); ++it)
//        std::cout << ", " << *it;
//    std::cout << "\n\n";
}




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
    std::cout << "\nWelcome to  Cheap & Cheerful Form letter Productions!\n";
    std::cout << "\nPlease enter your name: ";
    std::string from_name;
    std::cin >> from_name;
    std::cout << "\nPlease enter the name of the person you want to write to: ";
    std::string to_name;
    std::cin >> to_name;
    std::cout << "\nPlease enter the name of the person you want to enquire about: ";
    std::string friend_name;
    std::cin >> friend_name;

    std::cout << "\nPlease enter m for male or f for female for the person you are enquiring about: ";
    char friend_sex;
    std::cin >> friend_sex;

    std::cout << "\nPlease enter the age of that person: ";
    int friend_age;
    std::cin >> friend_age;
    std::string age_related_text = "Next year you will be able to vote.";
    if (friend_age <= 0 || friend_age >= 110) {
        std::cerr << "error: " << "Your'e kidding mate!!" << '\n';
        exit(1);
    } else if (friend_age < 12) {
        age_related_text = "Next year " + friend_name + " will be " + std::to_string(friend_age + 1) + ".";
    } else if (friend_age > 70) {
        age_related_text = "I hope " + friend_name + " is enjoying retirement!";
    } else {
        age_related_text = "Ah, another year wiser!";
    }


    std::cout << "\nDear, " << to_name
                << "\n\t\tHow are you mate? Life treating you well I hope, kids? Still playing golf, lovely! "
                << "I hear that " << friend_name << " just had a birthday and "
                << (friend_sex == 'f' ? "she" : "he") << " is "
                << friend_age << " years old. " << '\n'
                << age_related_text
                << " Hey if you see " << friend_name
                << ", can you get "
                << (friend_sex == 'f' ? "her" : "him")
                << " to call me on this number 404-006-0007, thanks."
                <<"\n\n\tYours sincerely, \n\n\t" << from_name
                << "\n\n";

}