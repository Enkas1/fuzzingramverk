#include <iostream>
#include "lib/functions.h"

int main() {
    int a = 10;
    int b = 5;

    std::cout << "Addition: " << add(a, b) << std::endl;
    std::cout << "Subtraktion: " << subtract(a, b) << std::endl;
    std::cout << "Multiplikation: " << multiply(a, b) << std::endl;

    return 0;
}
