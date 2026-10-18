#include <iostream>
#include <string>

int main() {
    // Read a complete user name, including spaces.
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    // Print a personalized greeting.
    std::cout << "Hello world from @" << name << std::endl;
    return 0;
}
