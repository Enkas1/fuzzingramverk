#include <stdint.h>
#include <stddef.h>
#include <iostream>       // Inkludera för att skriva ut resultatet
#include "math_lib/math.h"  // Inkludera biblioteket som ska testas

// LibFuzzer kallar på denna funktion för att fuzz-testa funktionerna i math_lib
extern "C" int LLVMFuzzerTestOneInput(const uint8_t* data, size_t size) {
    if (size < 2) {
        return 0; // Vi behöver minst två bytes för att testa
    }

    int a = data[0];  // Första byte används som första tal
    int b = data[1];  // Andra byte används som andra tal

    // Testa add-funktionen från math_lib
    int result_add = add(a, b);

    // Testa multiply-funktionen från math_lib
    int result_multiply = multiply(a, b);

    // Kontrollera om tal 1 är 2 och tal 2 är 6
    if (a == 2 && b == 6) {
        // Skriv ut resultaten och avsluta fuzzing-processen
        std::cout << "Uträkningar klara för tal 1 = 2 och tal 2 = 6" << std::endl;
        std::cout << "Addition: " << result_add << std::endl;
        std::cout << "Multiplikation: " << result_multiply << std::endl;

        // Avsluta fuzzing när dessa specifika tal uppfylls
        exit(0);
    }

    // Returvärde för fuzzing-funktionen är alltid 0 om inget problem upptäcks
    return 0;
}