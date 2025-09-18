#include <iostream>
#include "src/hello.hpp"

int main() {

    std::string inputString1 = "";
    std::string inputString2 = "";

    std::cout << "Whats your first string? " << std::endl;
    std::cin >> inputString1;

    std::cout << "Whats your second string? " << std::endl;
    std::cin >> inputString2;

    std::cout << strcmp_case_insensitive(inputString1, inputString2) << std::endl;

}
