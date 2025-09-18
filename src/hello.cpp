#include <string>

int strcmp_case_insensitive(std::string str1, std::string str2) {
    std::string lowerString1 = "";
    std::string lowerString2 = "";

    for (char c : str1) {
        lowerString1 += std::tolower(c);
    }
    for (char c : str2) {
        lowerString2 += std::tolower(c);
    }

    return lowerString1.compare(lowerString2);
}

std::string hello() {
   return "Hello World!";
}
