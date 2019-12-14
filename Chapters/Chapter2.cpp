//
// Created by Peter Hornsby on 12/13/19.
//

#include "Chapter2.h"
#include <iostream>
#include <string>
#include <vector>


std::vector<std::string> questions {"What is the purpose of the \"Hello World!\" program?",
                          "Name the four parts of a function",
                          "Name a function that  must appear in every C++ program",
                          "In the \"Hello World!\" program, what is the purpose of the line 'return 0;'?"
                          "What is the purpose of a compiler?",
                          "What is the purpose of the '#include' directive?",
                          "What does a '.h' suffix at the end of a file name signify in C++?",
                          "What does the linker do for your program?",
                          "What is the difference between a source file and an object file?",
                          "What is an IDE and what does it do for you?",
                          "If you understand everything in the textbook, why is it necessary to practice?"};


std::vector<std::string> answers {"1",
                        "2",
                        "3",
                        "4",
                        "5",
                        "6",
                        "7",
                        "8",
                        "9",
                        "10",
                        "11"};

std::vector<std::string> items {"//",
                      "<<",
                      "C++",
                      "comment",
                      "compiler",
                      "compile-time error",
                      "cout",
                      "executable",
                      "function",
                      "header",
                      "IDE",
                      "#include",
                      "library",
                      "linker",
                      "main()",
                      "object code",
                      "output",
                      "source code",
                      "statement"};


void output_chapter2() {

    std::cout << "\nQuestions" << std::endl;
    for (std::vector<std::string>::iterator it = questions.begin() ; it != questions.end(); ++it)
        std::cout << '\n' << *it;
    std::cout << "\n\n";

    std::cout << "\nAnswers" << std::endl;
    for (std::vector<std::string>::iterator it = answers.begin() ; it != answers.end(); ++it)
        std::cout << '\n' << *it;
    std::cout << "\n\n";

    std::cout << "\nItems you should know about :)" << std::endl;
    for (std::vector<std::string>::iterator it = items.begin() ; it != items.end(); ++it)
        std::cout << ", " << *it;
    std::cout << "\n\n";
}
