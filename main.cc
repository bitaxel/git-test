#include "stemmer/stemmer.h"

#include <iostream>

int main() {
    std::string s;
    std::cin >> s;

    std::cout << stemmer::stem_ru_string(s) << std::endl;

    return 0;
    
}
