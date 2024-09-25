# C++ Library Dependencies with Bazel Compilation Example

## Innehåll

Denna övning visar hur du kan skapa ett C++-bibliotek med Bazel och sedan använda det i en applikation. Genom att bygga och köra ett enkelt bibliotek lär du dig hur man organiserar kod med Bazel, hur man specificerar byggmål med cc_library, och hur man hanterar beroenden mellan olika delar av ett projekt.

### Struktur

Projektet består av följande filer:

**main.cpp** Huvudfilen som körs vid programstart
**math.h** Header-fil som deklarerar funktionerna
**match.cpp** Implementation av de funktioner som deklareras i math.h
**Build** Bazel build-fil som definierar byggmålen