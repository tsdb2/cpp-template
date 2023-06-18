load("@com_github_grpc_grpc//bazel:cc_grpc_library.bzl", "cc_grpc_library")
load("@com_github_grpc_grpc//bazel:grpc_build_system.bzl", "grpc_proto_library")
load("@rules_proto//proto:defs.bzl", "proto_library")

package(default_visibility = ["//visibility:public"])

cc_library(
    name = "lib",
    srcs = ["lib.cc"],
    hdrs = ["lib.h"],
)

cc_test(
    name = "lib_test",
    srcs = ["lib_test.cc"],
    deps = [
        ":lib",
        "@com_google_googletest//:gtest_main",
    ],
)

proto_library(
    name = "foo_service_proto",
    srcs = ["service.proto"],
)

cc_proto_library(
    name = "foo_service_cc_proto",
    deps = [":foo_service_proto"],
)

grpc_proto_library(
    name = "foo_service_grpc",
    srcs = ["service.proto"],
)

cc_grpc_library(
    name = "foo_service_cc_grpc",
    srcs = [":foo_service_proto"],
    grpc_only = True,
    deps = [":foo_service_cc_proto"],
)

cc_library(
    name = "foo_service",
    srcs = ["service.cc"],
    hdrs = ["service.h"],
    deps = [
        ":foo_service_cc_grpc",
        ":foo_service_cc_proto",
        ":lib",
        "@com_github_grpc_grpc//:grpc++",
    ],
)

cc_binary(
    name = "main",
    srcs = ["main.cc"],
    visibility = ["//visibility:private"],
    deps = [
        ":foo_service",
        ":lib",
        "@com_github_grpc_grpc//:grpc++",
        "@com_google_absl//absl/flags:flag",
        "@com_google_absl//absl/flags:parse",
        "@com_google_absl//absl/log:initialize",
        "@com_google_absl//absl/strings",
    ],
)
