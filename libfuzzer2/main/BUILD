cc_binary(
    name = "main",
    srcs = ["main.cpp"],            # Källfilen för fuzzing
    deps = ["//math_lib:math_lib"],          # Beroende på vårt bibliotek
    copts = ["-fsanitize=fuzzer,address"],   # Använd LibFuzzer och AddressSanitizer
    linkopts = ["-fsanitize=fuzzer,address"] # Linka mot LibFuzzer och AddressSanitizer
)