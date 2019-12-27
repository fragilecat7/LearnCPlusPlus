//
// Created by Peter Hornsby on 12/13/19.
//
#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>
#include <vector>
#include <cstring>


#include "Chapter3.h"

Chapter3::Chapter3() {
    std::cout << "Chapter3 Constructor called" << std::endl;
    Chapter3::questions = {"What is meant by the term prompt?",
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


    Chapter3::answers =  {"1. ```A prompt is text or symbols used to represent the system's readiness to perform the next command.```  \n - [reference: computerhope.com](https://www.computerhope.com/jargon/p/prompt.htm)",
                          "2. To read into a variable you use the `operator>>` called the extraction operator, see [std::operator>> (string)](http://www.cplusplus.com/reference/string/string/operator%3E%3E/)",
                          "3.",
                          "4. '\\n' is the `newline` character and it is a control character.",
                          "5. Any `whitespace` character will terminate a string, that is a newline, tab or space character",
                          "6. Any `whitespace` character will terminate a string, that is a newline, tab or space character as with a string" ,
                          "7.  cout << \"Hello, \" << first_name << \"!\\n\";",
                          "8. Pers section 3.8, 'A object is some memory that holds a value of a given type'",
                          "9. A literal is literally the value that is assigned to a type and are  considered a constant.",
                          "10. An example int literal `int = 7;`, there are int, float, char, string and boolean literals in c++",
                          "11. A variable is a named object!"};


    Chapter3::items = {"assignment",
                       "cin",
                       "concatenation",
                       "conversion",
                       "declaration",
                       "decrement",
                       "increment",
                       "initialization",
                       "name",
                       "narrowing",
                       "object",
                       "operation",
                       "operator",
                       "type",
                       "type safety",
                       "value",
                       "variable"};

}





void Chapter3::output() {
    std::cout << "\n\nProgramming Principles and Practice Using C++ \nChapter 3\n";
    Chapter::output();
}


Chapter3::~Chapter3() {

}






std::string Chapter3::collect_output_name_age() {
    std::cout << "Please enter your first name and age:\n";
    std::string first_name = "???";
    int age = 0;

    std::cin >> first_name;
    std::cin >> age;
    return "Hello " + first_name + " (age: " + std::to_string(age) + ")";
}

std::string Chapter3::Chapter3::collect_output_name_age_in_months() {
    std::cout << "Please enter your first name and age:\n";
    std::string first_name = "???";
    double age = 0;

    std::cin >> first_name;
    std::cin >> age;
    age = 12 * age;

    return "Hello " + first_name + " (age: " + std::to_string(age).substr(0, std::to_string(age).find(".")+3) + " months)";
}


void Chapter3::output_first_second_names() {
    std::cout << "Please enter your first and second names:\n";
    std::string first = "???";
    std::string second = "???";

    std::cin >> first >> second;
    std::string name = first + ' ' + second;

    std::cout << "Hello, " + name << '\n';
}


void Chapter3::output_first_second_names_with_string_comparison() {
    std::cout << "Please enter two names names:\n";
    std::string first = "???";
    std::string second = "???";

    std::cin >> first >> second;
    if (first == second) std::cout << "That's the same name twice!\n";
    if (first < second) std::cout << first << " is alphabetically before " << second << '\n';
    if (first > second) std::cout << first << " is alphabetically after " << second << '\n';
}


void Chapter3::output_repeated_words() {
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

void Chapter3::exercise_operators() {
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

void Chapter3::exercise_int_operators() {
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


void Chapter3::output_types_and_objects_list() {
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


void Chapter3::output_narrowing_conversions() {
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


void Chapter3::make_form_letter() {
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



void Chapter3::mile_to_kilometer() {
    /// 1 mile == 1.609 kilometers

    double value = 0;
    std::string prompt = "Would you like to convert miles to kilometers(y/n)?";

    std::cout << "\nCheap & Cheerful Productions gives you the miles/kilometer converter!! ";
    std::string user_input;

    std::cout << prompt << '\n';
    while (user_input.compare("y") != 0 && user_input.compare("n") != 0)  {
        std::cout << prompt << '\n';
        std::cin >> user_input;
    }



    if (user_input.compare("y") == 0) {
        // miles to kilometers
        std::cout << "Please enter the number of miles:" << '\n';
        std::cin >> value;

        if (value == 0) {
            std::cout << "Zero? Your on your own with that one, dog!" << '\n';
            return;
        }

        std::cout << "Answwer: " << value << " mile(s)  is " << value * 1.609 << " kilometer(s)" << '\n';
    } else if (user_input.compare("n") == 0) {
        std::cout << "Please enter the number of kilometers:" << '\n';
        std::cin >> value;
        std::cout << "Answwer: " << value << " kilometer(s)  is " << value / 1.609 << " mile(s)" << '\n';
    }
}



void Chapter3::silly_names_that_break_it() {

    std::string fine = "";
    //std::string no good = "wtf?"; // fail
    //int silly&name = 7; // fail
    int number = 7;
    //double incorrect? = 7.7; // fail
    double correct = 7.7;
}


void Chapter3::operate_on() {
    std::cout << "\nCheap & Cheerful Productions operator!! " << '\n';
    std::cout << "Please enter your first integer value: ";
    int first;
    std::cin >> first;

    std::cout << "Please enter your second integer value: ";
    int second;
    std::cin >> second;


    std::cout << "The operations begin..." << '\n';
    if (first > second) {
        std::cout << "the number " << first  << " is greater than the number " << second << '\n';
        std::cout << "the number " << second  << " is smaller than the number " << first << '\n';
    } else if (first < second) {
        std::cout << "the number " << second  << " is greater than the number " << first << '\n';
        std::cout << "the number " << first  << " is smaller than the number " << second << '\n';
    } else if (first == second) {
        std::cout << "There are two instances of the same number, the number " << second  << " is equal to the number " << first << '\n';
    }

    std::cout << "The sum of " << first << " + " << second << " is " << first + second << '\n';
    std::cout << "The difference of " << first << " - " << second << " is " << first - second << '\n';
    std::cout << "The product of " << first << " * " << second << " is " << first * second << '\n';
    std::cout << "The ratio of " << first << " / " << second << " is " << first / second << '\n';
}


void Chapter3::operate_on_double() {

    std::cout << "\nCheap & Cheerful Productions type double operator!! " << '\n';
    std::cout << "Please enter your first floating point value: ";
    double first;
    std::cin >> first;

    std::cout << "Please enter your second floating point value: ";
    double second;
    std::cin >> second;


    std::cout << "The operations begin..." << '\n';
    if (first > second) {
        std::cout << "the number " << first  << " is greater than the number " << second << '\n';
        std::cout << "the number " << second  << " is smaller than the number " << first << '\n';
    } else if (first < second) {
        std::cout << "the number " << second  << " is greater than the number " << first << '\n';
        std::cout << "the number " << first  << " is smaller than the number " << second << '\n';
    } else if (first == second) {
        std::cout << "There are two instances of the same number, the number " << second  << " is equal to the number " << first << '\n';
    }

    std::cout << "The sum of " << first << " + " << second << " is " << first + second << '\n';
    std::cout << "The difference of " << first << " - " << second << " is " << first - second << '\n';
    std::cout << "The product of " << first << " * " << second << " is " << first * second << '\n';
    std::cout << "The ratio of " << first << " / " << second << " is " << first / second << '\n';
}








































