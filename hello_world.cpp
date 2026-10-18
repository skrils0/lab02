#include <iostream>
#include <string>

int main() {
    // Ask the user for a name and accept spaces between words.
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    // Display a greeting that includes the entered name.
    std::cout << "Hello world from @" << name << std::endl;
    return 0;
}
