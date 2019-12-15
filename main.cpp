#include "std_lib_facilities.h"
#include "Chapters/Chapter2.h"


string collect_output_name_age() {
    cout << "Please enter your first name and age:\n";
    string first_name = "???";
    int age = 0;

    cin >> first_name;
    cin >> age;

    return "Hello " + first_name + " (age: " + to_string(age) + ")";
}

string collect_output_name_age_in_months() {
    cout << "Please enter your first name and age:\n";
    string first_name = "???";
    double age = 0;

    cin >> first_name;
    cin >> age;
    age = 12 * age;

    return "Hello " + first_name + " (age: " + to_string(age) + " months)";
}


int main() {
    std::cout << "Hello, World!\n ...and welcome Pete :)" << std::endl;

    // Chapter 2
    // output_chapter2();

    // Chapter 3
    //cout << collect_output_name_age() << "!\n";
    cout << collect_output_name_age_in_months() << "!\n";
    return 0;
}


