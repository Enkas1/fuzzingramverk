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

    int result_div = my_div(a, b);

    // Returvärde för fuzzing-funktionen är alltid 0 om inget problem upptäcks
    return 0;
}