//
// Created by Peter Hornsby on 12/13/19.
//
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <vector>
#include <cstdlib>



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
                "What are typical sizes for a char, an int and a double?",
                "What measures do we use for the size of small entities in memory, usch as int's and strings?"
                "What is the difference between = and ==?",
                "What is a definition?",
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


Chapter3::~Chapter3() {

}


void Chapter3::output() {
    std::cout << "\n\nProgramming Principles and Practice Using C++ \nChapter 3\n";
    Chapter::output();
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
    std::cout << "\nWelcome to Cheap & Cheerful Form letter Productions!\n";
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


void Chapter3::numerical_sequence() {
    std::cout << "\nCheap & Cheerful Production's Numerical Sequencer!! " << '\n';

    std::cout << "Please enter your first integer value: ";
    int first;
    std::cin >> first;

    std::cout << "Please enter your second integer value: ";
    int second;
    std::cin >> second;

    std::cout << "Please enter your third integer value: ";
    int third;
    std::cin >> third;

    std::cout << "The original sequence is " << first << ", " << second << ", " << third << '\n';


    int sequence[3] =  {first, second, third};
    std::sort(sequence, sequence + 3);
    std::cout << "The numerical sequence is " << sequence[0] << ", " <<sequence[1] << ", " << sequence[2] << '\n';
}


void Chapter3::string_sequence() {
    std::cout << "\nCheap & Cheerful Production's Numerical Sequencer!! " << '\n';

    std::cout << "Please enter your first string value: ";
    std::string first;
    std::cin >> first;

    std::cout << "Please enter your second string value: ";
    std::string second;
    std::cin >> second;

    std::cout << "Please enter your third string value: ";
    std::string third;
    std::cin >> third;

    std::cout << "The original sequence is " << first << ", " << second << ", " << third << '\n';


    std::string sequence[3] =  {first, second, third};
    std::sort(sequence, sequence + 3);
    std::cout << "The sorted string sequence is " << sequence[0] << ", " <<sequence[1] << ", " << sequence[2] << '\n';
}



void Chapter3::odd_or_even() {
    std::cout << "\nCheap & Cheerful Production's Odd or Even Detector!! " << '\n';
    std::cout << "Please enter the integer your interested in: ";
    int input;
    std::cin >> input;

    if (input % 2 == 1) {
        std::cout << "You have an odd number " << input << " my friend, you have not chosen the darkside have you?" << '\n';
    } else {
        std::cout << "You have an even number " << input << " my friend, may the force be with you" << '\n';
    }

}

void Chapter3::words_to_numbers() {
    std::cout << "\nCheap & Cheerful Production's Words to Numbers Processor!! " << '\n';
    std::cout << "Please enter that spelt out integer your interested in: ";
    std::string input = "";
    std::cin >> input;
    int integer = -1;

    if (input == "zero") {
        integer = 0;
    } else if (input == "one") {
        integer = 1;
    } else if (input == "two") {
        integer = 2;
    } else if (input == "three") {
        integer = 3;
    } else if (input == "four") {
        integer = 4;
    } else if (input == "five") {
        integer = 5;
    } else if (input == "six") {
        integer = 6;
    } else if (input == "seven") {
        integer = 7;
    } else if (input == "eight") {
        integer = 8;
    } else if (input == "nine") {
        integer = 9;
    } else if (input == "ten") {
        integer = 10;
    } else {
        std::cout << "I know not what you seek... " << '\n';
        return;
    }

        std::cout << "The integer you seek is " << integer << " from the word " << input << '\n';
}


void Chapter3::operation_first_operands_second() {
    std::cout << "\nCheap & Cheerful Production's operation first style!! " << '\n';
    std::cout << "Please enter the operation followed by the operands: ";
    std::string operation;
    double first;
    double second;
    std::cin >> operation >> first >> second;

    if (operation == "+") {
        std::cout << operation << " " << first << " " << second <<  " == " << first + second <<'\n';
    } else if (operation == "-") {
        std::cout << operation << " " << first << " " << second <<  " == " << first - second <<'\n';
    } else if (operation == "*") {
        std::cout << operation << " " << first << " " << second <<  " == " << first * second <<'\n';
    } else if (operation == "/") {
        std::cout << operation << " " << first << " " << second <<  " == " << first / second <<'\n';
    }
}


void Chapter3::counting_pennies() {


    std::cout << "\nCheap & Cheerful Production's piggy bank coin counter!! " << '\n';
    int inital_value = -1;
    int pennies = inital_value;
    int nickels = inital_value;
    int dimes = inital_value;
    int quarters = inital_value;
    int half_dollars = inital_value;
    int one_dollars = inital_value;
    std::string prompt = "Please enter the number of pennies: ";
    while (true)  {
        if (pennies == inital_value) {
            std::cout << prompt;
            std::cin >> pennies;
        } else if (nickels == inital_value) {
            prompt = "Please enter the number of nickels: ";
            std::cout << prompt;
            std::cin >> nickels;
        } else if (dimes == inital_value) {
            prompt = "Please enter the number of dimes: ";
            std::cout << prompt;
            std::cin >> dimes;
        } else if (quarters == inital_value) {
            prompt = "Please enter the number of quarters: ";
            std::cout << prompt;
            std::cin >> quarters;
        } else if (half_dollars == inital_value) {
            prompt = "Please enter the number of half dollars coins: ";
            std::cout << prompt;
            std::cin >> half_dollars;
        } else if (one_dollars == inital_value) {
            prompt = "Please enter the number of one dollar coins: ";
            std::cout << prompt;
            std::cin >> one_dollars;
        }

        if (pennies != inital_value && nickels != inital_value && dimes != inital_value && quarters != inital_value
            && half_dollars != inital_value && one_dollars != inital_value) {
            break;
        }
    }

    prompt = "We  will now count your coins for a grand total!";
    std::cout << prompt << '\n';
    if (pennies != 0) {
        std::cout << "You have " << pennies << (pennies == 1 ? " penny.":  " pennies.") << '\n';
    }

    if (nickels != 0) {
        std::cout << "You have " << nickels << (nickels == 1 ? " nickel.":  " nickels.") << '\n';
    }

    if (dimes != 0) {
        std::cout << "You have " << dimes << (dimes == 1 ? " dime.":  " dimes.") << '\n';
    }

    if (quarters != 0) {
        std::cout << "You have " << quarters << (quarters == 1 ? " quarter.":  " quarters.") << '\n';
    }

    if (half_dollars != 0) {
        std::cout << "You have " << half_dollars << (half_dollars == 1 ? " half dollar.":  " half dollars.") <<  '\n';
    }

    if (one_dollars != 0) {
        std::cout << "You have " << one_dollars << (one_dollars == 1 ? " dollar.":  " dollars.") <<  '\n';
    }

    int total = pennies + (5 * nickels) + (10 * dimes) + (50 * half_dollars) + (100 * one_dollars);

    std::cout << "Because we are penny wise...\nYou have " << total << " cents!" << '\n';

    if (total < 1000) {
        std::cout << "You should keep saving!" << '\n';
    }

    double total_dollars = (total / 100);
    if (total_dollars > 1) {
        std::cout << "That is $" << std::fixed << std::setprecision(2) << total_dollars << "!" << '\n';
    }
}



























