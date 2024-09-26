#include <cstdint>      // Inkluderar typdefinitioner för uint8_t och andra heltalstyper
#include <cstddef>      // Inkluderar definitioner för storleksrelaterade typer (size_t)
#include <fstream>      // Inkluderar funktioner för filhantering
#include <iostream>     // Inkluderar funktioner för standard in- och utmatning (t.ex. cout)
#include <string>       // Inkluderar definitioner för strängklassen std::string

#include "src/your_code.h" // Inkluderar headerfilen där process_input-funktionen är definierad

// Denna funktion kallas av LLVM Fuzzer för att testa en given indata
extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
    // Kallar på process_input-funktionen med indata
    process_input(data, size);
    return 0;  // Returnera 0 om inget fel inträffar (fuzz-testet genomfördes utan problem)
}

// Funktion för att läsa seed-filer från corpus
void read_corpus_seed_files() {
    // Skapar ett ifstream-objekt för att läsa filen "seed1.txt" i mappen "fuzz/corpus_seed_files"
    std::ifstream seed_file("fuzz/corpus_seed_files/seed1.txt");
    std::string line;  // Variabel för att lagra varje rad som läses in från filen
    
    // Så länge det finns rader att läsa från filen
    while (std::getline(seed_file, line)) {
        // Gör något med varje rad av seed-filer
        // Kallar process_input med den lästa raden, konverterar till uint8_t* och skickar storleken
        process_input(reinterpret_cast<const uint8_t*>(line.data()), line.size());
    }
}
