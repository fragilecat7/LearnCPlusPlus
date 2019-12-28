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

    Chapter2::answers =  {"1. To serve as an introductory example into a  programing language, in this case c++.",
                          "2. body, return type, name, parameter list",
                          "3. The function that must appear in every c++ program is `main()`",
                          "4. There is a tradition of returning the int 0 to indicate the function completed correctly, without error.",
                          "5. To convert the source code to object code, the object code is the executable",
                          "6. Means make available the contents of the file in the file that has the #include statement",
                          "7. `.h` indicates the file is a header file that generally contains definitions of terms.",
                          "8 The linker  links all the source files together into a program",
                          "9 The difference between a source file and object file is that the source file is what is written by the programmer and is transportable to another machine. Object code is the output from compiling the source file and is not human readable or transferable. ",
                          "10 `Integrated Development Environment` - it provides a configurable environment tailored to the language it was built for, removing many mundane tasks",
                          "11 Practice makes perfect, well it helps a lot!"};

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