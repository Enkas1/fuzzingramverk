#include <cstdint>
#include <cstddef>
#include <fstream>
#include <iostream>
#include <string>

#include "src/your_code.h"

extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
    process_input(data, size);
    return 0;  // Returnera 0 om inget fel inträffar
}

// Funktion för att läsa seed-filer
void read_corpus_seed_files() {
    std::ifstream seed_file("fuzz/corpus_seed_files/seed1.txt");
    std::string line;
    while (std::getline(seed_file, line)) {
        // Gör något med varje rad av seed-filer
        process_input(reinterpret_cast<const uint8_t*>(line.data()), line.size());
    }
}
