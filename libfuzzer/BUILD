
cc_library(
    name = "calculator_lib",
    srcs = ["main/calculator.cpp"],
    hdrs = ["lib/functions.h"],
    visibility = ["//visibility:public"],
)

cc_binary(
    name = "calculator",
    srcs = ["main/main.cpp"],
    deps = [":calculator_lib"],
)

# Fuzz-test
cc_test(
    name = "fuzz_calculator",
    srcs = ["main/fuzz_calculator.cpp"],
    deps = [":calculator_lib"],
    copts = ["-fsanitize=fuzzer,address"],
    linkopts = ["-fsanitize=fuzzer,address"],
)
