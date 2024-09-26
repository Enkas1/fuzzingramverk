

cc_test(
    name = "fuzz_test",
    srcs = ["fuzz/fuzz_target.cc"],
    copts = ["-fsanitize=fuzzer"],  # Aktivera libFuzzer
    linkopts = ["-fsanitize=fuzzer"],
    deps = [
        "//src:your_code",  # Lägg till dina kodberoenden här
    ],
)
