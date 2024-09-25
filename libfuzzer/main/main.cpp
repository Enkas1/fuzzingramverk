#include <iostream>
#include "lib/functions.h"

int main() {
    int a = 5;
    int b = 3;

    std::cout << "Addition: " << add(a, b) << std::endl;
    std::cout << "Subtraktion: " << subtract(a, b) << std::endl;
    std::cout << "Multiplikation: " << multiply(a, b) << std::endl;

    return 0;
}
