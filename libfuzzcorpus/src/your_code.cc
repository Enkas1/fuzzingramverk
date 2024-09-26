#include "your_code.h"
#include <iostream>

void process_input(const uint8_t *data, size_t size) {
    if (size > 0) {
        std::cout << "Processing data of size: " << size << std::endl;
        // Exempel: konvertera data till en sträng
        std::string input(reinterpret_cast<const char*>(data), size);
        std::cout << "Input data: " << input << std::endl;
    }
}
