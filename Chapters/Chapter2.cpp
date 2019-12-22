//
// Created by Peter Hornsby on 12/13/19.
//

#include "Chapter2.h"


Chapter2::Chapter2() {

    std::cout << "Chapter2 Constructor called" << std::endl;

    Chapter2::questions = {"What is the purpose of the \"Hello World!\" program?",
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

    Chapter2::answers =  {"1",
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

    Chapter2::items = {"//",
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

}


Chapter2::~Chapter2() {

}

void Chapter2::output() {
    std::cout << "\n\nProgramming Principles and Practice Using C++ \nChapter 2\n";
    Chapter::output();
}