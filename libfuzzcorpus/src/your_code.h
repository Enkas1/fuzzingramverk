#ifndef YOUR_CODE_H        // Kontrollerar om YOUR_CODE_H inte redan är definierad
#define YOUR_CODE_H        // Definierar YOUR_CODE_H för att förhindra flerfaldig inkludering

#include <cstdint>          // Inkluderar typdefinitioner för fasta heltalstyper (t.ex. uint8_t)
#include <cstddef>          // Inkluderar definitioner för storleksrelaterade typer (t.ex. size_t)

// Deklaration av funktionen process_input som tar in rådata och dess storlek
void process_input(const uint8_t *data, size_t size);

#endif  // YOUR_CODE_H      // Avslutar den tidigare definieringen och skyddet mot flera inkluderingar
