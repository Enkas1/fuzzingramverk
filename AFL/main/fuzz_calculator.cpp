#include "lib/functions.h"
#include <cstdint>
#include <cstddef>

extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
    if (size < 8) return 0; // Behöver minst 8 byte för två int
    int a = *reinterpret_cast<const int*>(data);
    int b = *reinterpret_cast<const int*>(data + 4);

    // Använd kalkylatorfunktionerna
    add(a, b);
    subtract(a, b);
    multiply(a, b);

    return 0;
}
