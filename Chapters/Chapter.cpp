//
// Created by phornsby on 12/22/19.
//

#include "Chapter.h"

// Constructor
Chapter::Chapter() {

}

// Deconstructor
Chapter::~Chapter() {
    questions = {};
    answers = {};
    items = {};
}


void Chapter::output() {

    std::cout << "\nQuestions" << std::endl;
    for (std::vector<std::string>::iterator it = questions.begin() ; it != questions.end(); ++it)
        std::cout << '\n' << *it;
    std::cout << "\n\n";

    std::cout << "\nAnswers" << std::endl;
    for (std::vector<std::string>::iterator it = answers.begin() ; it != answers.end(); ++it)
        std::cout << '\n' << *it;
    std::cout << "\n\n";

    std::cout << "\nItems related to Chapter 2" << std::endl;
    for (std::vector<std::string>::iterator it = items.begin() ; it != items.end(); ++it)
        std::cout << ", " << *it;
    std::cout << "\n\n";
}