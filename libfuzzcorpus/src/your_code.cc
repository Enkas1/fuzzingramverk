#include "your_code.h"  // Inkluderar header-filen där funktioner och datatyper är definierade
#include <iostream>      // Inkluderar standardbiblioteket för in- och utmatning (t.ex. std::cout)

void process_input(const uint8_t *data, size_t size) {
    // Kontrollerar om storleken på datan är större än 0
    if (size > 0) {
        // Skriver ut storleken på datan som bearbetas
        std::cout << "Processing data of size: " << size << std::endl;
        
        // Exempel: konverterar rådata till en std::string
        std::string input(reinterpret_cast<const char*>(data), size);
        
        // Skriver ut den konverterade strängen
        std::cout << "Input data: " << input << std::endl;
    }
}

