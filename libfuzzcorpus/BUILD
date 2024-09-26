cc_test(                           # Definierar en C++ test target i Bazel
    name = "fuzz_test",            # Namnet på testet som kommer att användas av Bazel
    srcs = ["fuzz/fuzz_target.cc"],  # Anger källfilen för fuzz-testet
    copts = ["-fsanitize=fuzzer"],  # Kompilatoralternativ för att aktivera libFuzzer
    linkopts = ["-fsanitize=fuzzer"],  # Länkalternativ för att aktivera libFuzzer vid länkning
    deps = [
        "//src:your_code",          # Anger beroenden; här inkluderas din kod från src-mappen
    ],
)
