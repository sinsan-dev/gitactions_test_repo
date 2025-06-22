cc_library(
    name = "hello_lib",
    srcs = ["hello.cc"],
    hdrs = ["hello.h"],
    visibility = ["//visibility:public"],
)

cc_binary(
    name = "hello",
    srcs = ["main.cc"],
    deps = [":hello_lib"],
)

cc_test(
    name = "hello_test",
    srcs = ["hello_test.cc"],
    deps = [
        ":hello_lib",
        "@com_google_googletest//:gtest_main",
    ],
)
